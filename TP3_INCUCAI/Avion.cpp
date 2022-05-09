/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Avion.h"

Avion::Avion(string r, float t, u_int c) : Vehiculos(r, t, c) {
}

string Avion::tostring() const {
    return "zhooooooom";
}

void Avion::imprimir()   const {
    cout << tostring() << endl;
}