/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Ambulancia.h"

cAmbulancia::cAmbulancia(string r, float t, u_int c, string color) : cVehiculos(r, t, c) {
    this->color = color;
}

string cAmbulancia::tostring() const {
    return "iuiuiuiuiu";
}

void cAmbulancia::imprimir()   const {
    cout << tostring() << endl;
}