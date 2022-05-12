/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Helicoptero.h"

cHelicoptero::cHelicoptero(string r, float t, u_int c) : cVehiculos(r, t, c) {
}

string cHelicoptero::tostring() const {
    return "taca-taca-taca";
}

void cHelicoptero::imprimir()   const {
    cout << tostring() << endl;
}