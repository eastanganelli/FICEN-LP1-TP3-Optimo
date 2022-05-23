#include "Helicoptero.h"

cHelicoptero::cHelicoptero(string r, float la, float an, bool tu) : cVehiculos(r, la, an), turbina(tu) { }

void cHelicoptero::RealizarTransporte() const {
    cout << "taca-taca-taca";
}

string cHelicoptero::tostring() const {
    stringstream ss;
    ss << "Nro Registro: " << this->registro << endl
        << "Informacion" << endl
        << "\tArea minima para aterrizar: " << to_string(this->ancho * this->largo) << " m^2" << endl
		<< "\tTurbina: " << (this->turbina ? "Si" : "No") << endl;
    return ss.str();
}

void cHelicoptero::imprimir()   const {
    cout << tostring() << endl;
}