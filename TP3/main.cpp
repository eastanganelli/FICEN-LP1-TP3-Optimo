#include "INCUCAI.h"

const string nombreYapellidos[] = {
    "Cesar Llano Torre",
    "Horacio Apolinar Baena Fuente",
    "Victoria de Gimeno",
    "Herminia Barreda Espa�ol",
    "Juanita Rivero",
    "Remigio Sacrist�n Guijarro",
    "Jos� Mari Vi�as Bl�zquez",
    "Y�sica Tena Morcillo",
    "Carlito Barbero Sanjuan",
    "Alejo Sala",
    "Julie Mate-Aragon�s",
    "Valent�n Pedro Vazquez",
    "W�lter de Donaire",
    "Chema Catal�n Toro"
};


cListaVehiculos* GeneradorListaVehiculos();

cListaOrganos*   GeneradorListaOrganos();

string           GeneradorDNI();

cPaciente*       GeneratorPaciente(cCentroDeSalud* cs);

int main() {
    srand(time(NULL));
	
    cINCUCAI* Mi_INCUCAI = new cINCUCAI();
    cListaCentroSalud* MisCentros = NULL;

	/*Carga de datos iniciales*/


	/*Inicio de Rutina*/
		/*Random de donante/paciente*/

		/*Verificar si hay donante disponible -> verificar stack*/

		/*Realizar protocolos*/

	/*Fin de ciclo*/
		/*Imprimir resumen*/

	return 0;
}

cPaciente* GeneratorPaciente(cCentroDeSalud* cs) {
    cPaciente* ret_Paciente = NULL;
	
	bool moneda = (rand() % 2 - 1 == 0) ? true : false;
	
    if (moneda) {
        cReceptor* pac = new cReceptor();
		
        ret_Paciente = pac;
    } else {
		
    }
	

    return nullptr;
}
