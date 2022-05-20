/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Vehiculos.h"

cVehiculos::cVehiculos(string r): registro(r) { }

string cVehiculos::tostring() const {
    return "Registro: " + this->registro;
}

void cVehiculos::imprimir() const {
    cout << tostring() << endl;
}
