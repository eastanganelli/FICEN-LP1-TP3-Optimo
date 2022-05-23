#include "Avion.h"

cAvion::cAvion(string r, float la, float an, float ts, bool he) : cVehiculos(r, la, an), topSpeed(ts), Helice(he) { }

void cAvion::RealizarTransporte() const {
    cout << "zhooooooom" << endl;
}

string cAvion::tostring() const {
    stringstream ss;
    ss << "Nro Registro: " << this->registro << endl
        << "Información" << endl
		<< "\tTipo: " << (this->Helice ? "Helice" : "Turbina") << endl
        << "\tVelocidad Maxima: " << this->topSpeed << "Knots" << endl
        << "\tDatos minimos de pista" << endl
        << "\t\tLongitud: " << this->largo  << " m" << endl
        << "\t\tAncho: " << this->ancho << " m" << endl;
    return ss.str();
}

void cAvion::imprimir()   const {
    cout << tostring() << endl;
}