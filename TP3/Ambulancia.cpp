#include "Ambulancia.h"

cAmbulancia::cAmbulancia(string r, float la, float an, bool AirCon) : cVehiculos(r, la, an), tieneAirCon(AirCon) { }

void cAmbulancia::RealizarTransporte() const {
    cout << "iuiuiuiuiu" << endl;
}

string cAmbulancia::tostring() const {
    stringstream ss;
    ss << "Nro Registro: " << this->registro << endl
        << "Información" << endl
        << "\tLargo: " << this->largo << " m" << endl
        << "\tAncho: " << this->ancho << " m" << endl
        << "\tTiene Aires: " << (this->tieneAirCon ? "Si" :  "No") << endl;
    return ss.str();
}

void cAmbulancia::imprimir()   const {
    cout << tostring() << endl;
}