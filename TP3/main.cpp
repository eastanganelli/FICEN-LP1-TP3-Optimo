#include "INCUCAI.h"

const string nombreYapellidos[] = {
    "Marcelo Gallardo",
    "Gonzalo Martinez",
    "Lucas Pratto",
    "Juan Fernando Quintero",
    "Enzo Nicolas Perez",
    "Bruno Zuculini",
    "Jonatan Maidana",
    "Marcelo Barovero",
    "Franco Armani",
    "Fernando Cavenaghi",
    "Julian Alvarez",
    "Leonardo Ponzio",
    "Javier Pinola",
    "Sebastian Driussi"
};

cListaCentroSalud* CargaCentros();
void CargaPacientes(cListaT<cPaciente>*& MisPacientes, cListaCentroSalud* MisCentros);

int main() {
    srand((u_int)time(NULL));
	
    /*Carga de datos iniciales*/
    cINCUCAI*           Mi_INCUCAI = new cINCUCAI();
    cListaCentroSalud*  MisCentros = CargaCentros();
    cListaT<cPaciente>* Pacientes  = NULL;
    
    CargaPacientes(Pacientes, MisCentros);

    Mi_INCUCAI->setCentrosHabilitados(MisCentros);
	
	/*Inicio de Rutina*/
    while (Pacientes->getCA() > 0) {
        /*Random de donante/paciente*/
        cPaciente* nuevo_Paciente = Pacientes->dequeue();
		
        Mi_INCUCAI->RecibirPaciente(nuevo_Paciente);

        /*Verificar si hay donante disponible -> verificar stack*/
        if (Mi_INCUCAI->hayDonantes() && Mi_INCUCAI->hayReceptores()) {
			cDonante* nuevo_Donante = Mi_INCUCAI->ObtenerDonante();
			
            cListaOrganos* OrganosDelDonante = nuevo_Donante->getListaOrganos();
            for (u_int i = 0; i < OrganosDelDonante->getCA(); i++) {
				cOrgano* Organo = OrganosDelDonante->positionValue(i);
                cListaReceptores* PosiblesReceptores = Mi_INCUCAI->BuscarPosiblesReceptores(Organo, nuevo_Donante);
				
                if (PosiblesReceptores != NULL && PosiblesReceptores->getCA() > 0) {
					cReceptor* Receptor = PosiblesReceptores->dequeue();
                    bool flag = false;

                    /*Realizar protocolos*/
                    do {
						
                        try {
                            flag = Mi_INCUCAI->InicioProtocolo(Receptor, nuevo_Donante);
                        }
                        catch (overtime& e) {
                            cerr << e.what() << endl;
                            flag = !flag;
                        }
                        catch (trasplant& e) {
                            cerr << e.what() << endl;
                        }
                        catch (vehicle& e) {
                            cerr << e.what() << endl;
                        }
						
						if(!flag)
                            Receptor = PosiblesReceptores->dequeue();

                    } while (!flag && PosiblesReceptores->getCA() > 0);
                }
				
                delete PosiblesReceptores;
            }
        }
    }

	/*Fin de ciclo*/
    //cout << "Informacion sobre INCUCAI" << endl << Mi_INCUCAI->tostring() << endl << endl;
	
    Mi_INCUCAI->imprimir();

    /*Imprimir resumen*/
    Mi_INCUCAI->informeTrasplantados();


    delete Mi_INCUCAI;	
	return 0;
}

cListaCentroSalud* CargaCentros() {
    cListaCentroSalud* MisCentros = new cListaCentroSalud(4, true);

    cCentroDeSalud* cs = new cCentroDeSalud("Hospital Italiano", "Perón 4190", "Almagro", eProv::Provincias::CABA, "4959-0201");
    cListaVehiculos* MiTransportes = new cListaVehiculos(2, true);
    (*MiTransportes) + new cAmbulancia("TRP 382", (float)5.3, (float)3.6, true);
    (*MiTransportes) + new cAmbulancia("GMC 512", (float)6.2, (float)4.02, false);
    cs->setMisVehiculos(MiTransportes);
    (*MisCentros) + (cs);

    cs = new cCentroDeSalud("hospital Britanico", "Perdriel 74", "Almagro", eProv::Provincias::CABA, "4482-0377");
    MiTransportes = new cListaVehiculos(3, true);
    (*MiTransportes) + new cHelicoptero("HEL-569-JK", (float)20.6, (float)15.7, true);
    (*MiTransportes) + new cAmbulancia("MIA 632", (float)5.8, (float)4.4, true);
    (*MiTransportes) + new cAvion("MAD-JK09P-BRAVO", (float)27.4, (float)15.7, (float)140.8, false);
    cs->setMisVehiculos(MiTransportes);
    (*MisCentros) + (cs);

    cs = new cCentroDeSalud("Hospital Garrahan", "Pichincha 1890", "La Falda", eProv::Provincias::CR, "(03548)423-561");
    MiTransportes = new cListaVehiculos(0, true);
    cs->setMisVehiculos(MiTransportes);
    (*MisCentros) + (cs);

    cs = new cCentroDeSalud("Sanatorio Otamendi", "San Martin 431" , "San Rafael", eProv::Provincias::MZ, "(02627)421-659");
    MiTransportes = new cListaVehiculos(1, true);
    (*MiTransportes) + new cAvion("MAD-AMP34-ALFA", (float)43.8, (float)21.6, (float)155.2, true);
    cs->setMisVehiculos(MiTransportes);
    (*MisCentros) + (cs);

    return MisCentros;
}

void CargaPacientes(cListaT<cPaciente>*& MisPacientes, cListaCentroSalud* MisCentros) {
    MisPacientes = new cListaT<cPaciente>(10, false);
	
    cReceptor* raux = new cReceptor("21338543", nombreYapellidos[0], "4569-3548", new cFecha("18/01/1976"), eGrupoSanguineo::Grupo::O_MAS, eSexo::Sexo::M, (*MisCentros)[1], eEst::Estado::Estable, ePrio::Prioridad::MEDIA, ePato::Patologia::IR);
    raux->setOrganoDefectuoso(new cOrgano(eOrg::Organos::HIGADO));
    (*MisPacientes) + raux;

    raux = new cReceptor("39068857", nombreYapellidos[3], "4192-1231", new cFecha("13/06/1993"), eGrupoSanguineo::Grupo::A_MENOS, eSexo::Sexo::M, (*MisCentros)[3], eEst::Estado::Inestable, ePrio::Prioridad::ALTA, ePato::Patologia::IC);
    raux->setOrganoDefectuoso(new cOrgano(eOrg::Organos::PANCREAS));
    (*MisPacientes) + raux;

    cDonante* daux = new cDonante("42111107", nombreYapellidos[8], "4903-1650", new cFecha("04/06/1988"), eGrupoSanguineo::Grupo::O_MAS, eSexo::Sexo::M, (*MisCentros)[1], new cFecha(cFecha::Hoy()));
	cListaOrganos* listaOrg = new cListaOrganos(2, true);
    (*listaOrg) + (new cOrgano(eOrg::Organos::PANCREAS));
	(*listaOrg) + (new cOrgano(eOrg::Organos::HIGADO));
    daux->setListaOrganos(listaOrg);
    (*MisPacientes) + daux;
	
    raux = new cReceptor("41004737", nombreYapellidos[4], "4886-8821", new cFecha("18/01/1993"), eGrupoSanguineo::Grupo::AB_MAS, eSexo::Sexo::F, (*MisCentros)[0], eEst::Estado::Estable, ePrio::Prioridad::BAJA, ePato::Patologia::IR);
    raux->setOrganoDefectuoso(new cOrgano(eOrg::Organos::RINYON));
    (*MisPacientes) + raux;

    daux = new cDonante("38004459", nombreYapellidos[9], "4904-8356", new cFecha("22/02/1986"), eGrupoSanguineo::Grupo::A_MENOS, eSexo::Sexo::M, (*MisCentros)[0], new cFecha(cFecha::Hoy()));
    listaOrg = new cListaOrganos(1, true);
    (*listaOrg) + (new cOrgano(eOrg::Organos::PANCREAS));
    daux->setListaOrganos(listaOrg);
    (*MisPacientes) + daux;
}