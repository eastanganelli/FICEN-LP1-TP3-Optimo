#include "Vehiculos.h"

cVehiculos::cVehiculos(string r, float largo, float ancho) : registro(r), largo(largo), ancho(ancho) { }

void cVehiculos::RealizarTransporte() const { }

string cVehiculos::tostring() const {
    return "Registro: " + this->registro;
}

void cVehiculos::imprimir() const {
    cout << tostring() << endl;
}