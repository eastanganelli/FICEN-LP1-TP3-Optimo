/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Helicoptero.h"

Helicoptero::Helicoptero(string r, float t, u_int c) : Vehiculos(r, t, c) {
}

string Helicoptero::tostring() const {
    return "taca-taca-taca";
}

void Helicoptero::imprimir()   const {
    cout << tostring() << endl;
}