#include "INCUCAI.h"

cINCUCAI::cINCUCAI() : direccion("Ramsay 2250, CABA"), telefono("11-2154-8518") {
    this->Trasplantados      = new cListaT<cPaciente>(15, false);
    this->ListaEspera        = new cListaReceptores(10, true);
    this->Donantes           = new cListaDonantes(5, true);
    this->CentrosHabilitados = new cListaCentroSalud(6, true);
}

cINCUCAI::cINCUCAI(string d, string t) : direccion(d), telefono(t) {
    this->Trasplantados      = new cListaT<cPaciente>(15, false);
    this->ListaEspera        = new cListaReceptores(10, true);
    this->Donantes           = new cListaDonantes(5, true);
    this->CentrosHabilitados = new cListaCentroSalud(6, true);
}

cINCUCAI::~cINCUCAI() {
    if (this->Trasplantados != NULL) {
        delete this->Trasplantados;
        this->Trasplantados = NULL;
    }
	
    if (this->ListaEspera != NULL) {
        delete this->ListaEspera;
        this->ListaEspera  = NULL;
    }

    if (this->Donantes != NULL) {
        delete this->Donantes;
        this->Donantes     = NULL;
    }
	
    if (this->CentrosHabilitados != NULL) {
        delete this->CentrosHabilitados;
        this->CentrosHabilitados = NULL;
    }
}

void cINCUCAI::RecibirPaciente(cPaciente* p) {
    try {
        if (p == NULL) throw new null_node();
    }
    catch (null_node& e) {
        cerr << e.what() << endl;
        return;
    }
    
    IngresarPaciente(p);
}

cListaReceptores* cINCUCAI::BuscarPosiblesReceptores(cOrgano* c, cDonante* d) {
    return this->ListaEspera->obtenerReceptoresCompatibles(c, d);
}

void cINCUCAI::IngresarPaciente(cPaciente* p) {
    if (dynamic_cast<cReceptor*>(p) != NULL) {
        cReceptor* r_ = dynamic_cast<cReceptor*>(p);
        (*ListaEspera) + r_;
    } else {
        cDonante* d_ = dynamic_cast<cDonante*>(p);
        (*Donantes).queue(d_);
    }
}

bool cINCUCAI::CentroEstaHabilitado(cCentroDeSalud* csr) {
    return this->CentrosHabilitados->EstaListado(csr);
}

bool cINCUCAI::InicioProtocoloTyT(cReceptor* r, cDonante* d) {
    try {
        cCentroDeSalud* CS_R, * CS_D;
        CS_R = r->getCentroAsociado();
        CS_D = d->getCentroAsociado();
		

        // Buscar transporte dispo
        char distancia = cCentroDeSalud::CalculadoraDeDistancia(CS_D, CS_R);
        cVehiculos* MiTransporte = this->AsignarVehiculo(CS_D, distancia);
        
        if (MiTransporte == NULL) throw new vehicle();

		// Ablar organo
        cOrgano* O_Trasplante = CS_D->Ablar(d->getListaOrganos(), r->getMiOrgano()->getTipoOrg());
		
		// Enviarlo
        MiTransporte->RealizarTransporte();
		
		// Trasplantar
        cOrgano* Defectuoso = r->getMiOrgano();
        CS_R->Trasplantar(Defectuoso, O_Trasplante);
    }
    catch (overtime& e) {
        cerr << e.what() << endl;
        
        this->cambiarEstadoPaciente(r);
        throw;
        return false;
    }
    catch (trasplant& e) {
        cerr << e.what() << endl;

		// Poner en nueva posición en lista de espera
        this->cambiarEstadoPaciente(r);
        throw;
        return false;
    }
    catch (vehicle& e) {
        cerr << e.what() << endl;
		
        // Poner en nueva posición en lista de espera
        this->cambiarEstadoPaciente(r);
        throw;
        return false;
    }

    // Cambiar paciente a trasplantado
	// y agregar a Lista de Trasplantados
    this->cambiarEstadoPaciente(r, true);

    return true;
}

cVehiculos* cINCUCAI::AsignarVehiculo(cCentroDeSalud* cs_, char distancia) {
    cVehiculos* MiTransporte = NULL;

    try {
        cListaVehiculos* v_dispo = cs_->getMisVehiculos();

        if (v_dispo == NULL) throw new null_node();

        for (u_int i = 0; i < v_dispo->getCA(); i++) {
            switch (distancia) {
            case -1:
                MiTransporte = dynamic_cast<cAmbulancia*>((*v_dispo)[i])  != NULL ? (*v_dispo)[i] : NULL;
                break;

            case 0:
                MiTransporte = dynamic_cast<cAvion*>((*v_dispo)[i])       != NULL ? (*v_dispo)[i] : NULL;
                break;

            default:
                MiTransporte = dynamic_cast<cHelicoptero*>((*v_dispo)[i]) != NULL ? (*v_dispo)[i] : NULL;
                break;
            }
        }
    }
    catch (null_node& e) {
        cerr << e.what() << endl;
        throw;
    }

    return MiTransporte;
}

void cINCUCAI::cambiarEstadoPaciente(cReceptor* r, bool exito) {
    r->TrasplanteExitoso(exito);	
	if(exito)
		(*Trasplantados) + r;
    else        
		(*ListaEspera) + r;
}

u_int cINCUCAI::PosicionEspera(cPaciente* p) {
    u_int pos = 0;
    try {
        if (dynamic_cast<cReceptor*>(p) == NULL) throw exception();

        pos = ListaEspera->posicionPaciente(dynamic_cast<cReceptor*>(p));
    }
    catch (out_list& e) {
        cerr << e.what() << endl;
        pos = 0;
    }
    catch (exception) {
        cerr << "No es un paciente receptor" << endl;
        pos = 0;
    }

    return pos;
}

void cINCUCAI::setCentrosHabilitados(cListaCentroSalud* lcs) {
    this->CentrosHabilitados = lcs;
}

bool cINCUCAI::hayDonantes() const {
    return (Donantes->getCA() > 0 ? true : false);
}

bool cINCUCAI::hayReceptores() const {
    return (ListaEspera->getCA() > 0 ? true : false);
}

cDonante* cINCUCAI::ObtenerDonante() const {
    return Donantes->dequeue();
}

cListaReceptores* cINCUCAI::Buscar(cCentroDeSalud* cs) {
    cListaReceptores* sublista = new cListaReceptores();

    for (u_int i = 0; i < (*ListaEspera).getCA(); i++) {
        cCentroDeSalud* Aux = (*ListaEspera)[i]->getCentroAsociado();
        if (Aux == cs)
            (*sublista) + (*ListaEspera)[i];
    }

    return sublista;
}

cListaReceptores* cINCUCAI::Buscar(cOrgano* o) {
    cListaReceptores* sublista = new cListaReceptores();
    
    for (u_int i = 0; i < (*ListaEspera).getCA(); i++) {
        cOrgano* Aux = (*ListaEspera)[i]->getMiOrgano();
        if (Aux->getTipoOrg() == o->getTipoOrg())
            (*sublista) + (*ListaEspera)[i];
    }
    
    return sublista;
}

void cINCUCAI::informeTrasplantados() {
    cListaT<cPaciente>* sublista = this->Trasplantados;
    time_t time_aux = cFecha::Hoy();
    struct tm Hoy_;
    
    (void)localtime_s(&Hoy_, &time_aux);
    
    cout << "Informe de trasplantados " << to_string(Hoy_.tm_year + 1900) << " por Provincia " << endl
            << "---------------------------------------" << endl;
    
    if (sublista->getCA() > 0) {
        for (u_int i = 0; i < CantProvincias; i++) {
            eProv::Provincias Prov_Busqueada = eProv::getProvinciasEnum(i);
            u_int total = 0, parcial = 0;
            stringstream ss_prov, ss_mes;

            for (u_int mes = 0; i < u_int(Hoy_.tm_mon); i++) {

                for (u_int j = 0; j < sublista->getCT(); j++) {
                    cReceptor* r = dynamic_cast<cReceptor*>((*sublista)[j]);
                    eProv::Provincias Aux_p = r->getCentroAsociado()->getProvincia();

                    if (Aux_p == Prov_Busqueada) {
                        time_t aux_f = r->getMiOrgano()->getAblacion()->getFecha();
                        struct tm fecha_trasplante;
                        localtime_s(&fecha_trasplante, &aux_f);

                        if (fecha_trasplante.tm_year == Hoy_.tm_year && fecha_trasplante.tm_mon == mes)
                            parcial++;

                        total++;
                    }
                    ss_mes << "Mes " << eMes::getMesString(mes) << " :: "
                        << (parcial == 0 ? "No se realizaron trasplantes" : parcial + " trasplantes realizados")
                        << endl;
                }

            }

            ss_prov << total + " trasplantes totales realizados"
                << endl << "-----------------------------------" << endl
                << ss_mes.str();

            cout << eProv::getProvinciaString((u_int)Prov_Busqueada) << " :: "
                << (total == 0 ? "No se realizaron trasplantes" : ss_mes.str())
                << endl;
        }
    } else cout << "No se realizaron trasplantes en este último tiempo" << endl;
}

string cINCUCAI::tostring() const {
	stringstream ss;

    ss << "Direccion: " << this->direccion << endl << "Telefono: " << this->telefono;
	
    return ss.str();
}

void cINCUCAI::imprimir() const {
    cout << tostring() << endl
        << "-----------------------------------" << endl
        << (*ListaEspera) << endl
        << "-----------------------------------" << endl
        << (*Donantes) << endl
        << "-----------------------------------" << endl
        << (*CentrosHabilitados) << endl;
}