/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "INCUCAI.h"

cINCUCAI::cINCUCAI() : direccion("Ramsay 2250, CABA"), telefono("11-2154-8518") {
    this->Trasplantados      = NULL;
    this->Receptores         = NULL;
    this->Donantes           = NULL;
    this->CentrosHabilitados = NULL;
}

cINCUCAI::cINCUCAI(string d = "Ramsay 2250, CABA", string t = "11-2154-8518") : direccion(d), telefono(t) {
    this->Trasplantados      = NULL;
    this->Receptores         = NULL;
    this->Donantes           = NULL;
    this->CentrosHabilitados = NULL;
}

cINCUCAI::~cINCUCAI() {
    if (this->Trasplantados != NULL) {
        delete this->Trasplantados;
        this->Trasplantados = NULL;
    }
    if (this->Receptores != NULL) {
        delete this->Receptores;
        this->Receptores = NULL;
    }
    if (this->Donantes != NULL) {
        delete this->Donantes;
        this->Donantes = NULL;
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
    } IngresarPaciente(p);
}

cListaReceptores* cINCUCAI::PosiblesReceptores(cOrgano* c, cDonante* d) {
    if (this->Donantes->getCA() > 0)
        return this->Receptores->obtenerReceptoresCompatibles(c, d);

    return NULL;
}

void cINCUCAI::IngresarPaciente(cPaciente* p) {
    if (dynamic_cast<cReceptor*>(p) != NULL) {
        cReceptor* r_ = dynamic_cast<cReceptor*>(p);
        (*Receptores) + r_;
    } else {
        cDonante* d_ = dynamic_cast<cDonante*>(p);
        (*Donantes).queue(d_);
    }
}

bool cINCUCAI::CentroEstaHabilitado(cCentroDeSalud* csr) {
    return this->CentrosHabilitados->EstaListado(csr);
}

void cINCUCAI::InicioProtocolo(cReceptor* p, cDonante* d) {

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
    }

    return MiTransporte;
}

u_int cINCUCAI::PosicionEspera(cPaciente* p) {
    u_int pos = 0;
    try {
        if (dynamic_cast<cReceptor*>(p) == NULL) throw exception();

        pos = Receptores->posicionPaciente(dynamic_cast<cReceptor*>(p));
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

cListaReceptores* cINCUCAI::Buscar(cOrgano* o) {
    cListaReceptores* sublista = new cListaReceptores();

    for (u_int i = 0; i < (*Receptores).getCA(); i++) {
        cOrgano* Aux = (*Receptores)[i]->getMiOrgano();
        if (Aux->getTipoOrg() == o->getTipoOrg())
            (*sublista) + (*Receptores)[i];
    }

    return sublista;
}

cListaReceptores* cINCUCAI::Buscar(cCentroDeSalud* cs) {
    cListaReceptores* sublista = new cListaReceptores();

    for (u_int i = 0; i < (*Receptores).getCA(); i++) {
        cCentroDeSalud* Aux = (*Receptores)[i]->getCentroAsociado();
        if (Aux == cs)
            (*sublista) + (*Receptores)[i];
    }

    return sublista;
}

string cINCUCAI::tostring() const {
    string o = "ccINCUCAI\nDireccion: " + this->direccion + "\nTelefono: " + this->telefono;
    return o;
}

void cINCUCAI::imprimir() const {
    cout << tostring() << endl;
}