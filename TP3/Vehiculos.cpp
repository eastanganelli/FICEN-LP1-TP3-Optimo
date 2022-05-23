#include "Vehiculos.h"

cVehiculos::cVehiculos(string r, float largo, float ancho) : registro(r), largo(largo), ancho(ancho) { }

cVehiculos::~cVehiculos() {

}

void cVehiculos::RealizarTransporte() const { }

string cVehiculos::tostring() const {
	stringstream ss;
	
	ss << "Registro: " << this->registro << endl
		<< "Largo: " << largo << endl
		<< "Ancho: " << ancho << endl;
	
    return ss.str();
}

void cVehiculos::imprimir() const {
    cout << tostring() << endl;
}