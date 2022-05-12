/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Avion.h"

cAvion::cAvion(string r, float t, u_int c) : cVehiculos(r, t, c) {
}

string cAvion::tostring() const {
    return "zhooooooom";
}

void cAvion::imprimir()   const {
    cout << tostring() << endl;
}