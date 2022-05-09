/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Vehiculos.h"

Vehiculos::Vehiculos(string r, float t, u_int c): registro(r), tara(t) {
    this->capacidad = c;
}

string Vehiculos::tostring() const {
    string o = "Registro: "+ this->registro + 
               "\nTara: " + to_string(this->tara) + 
               "\nCapacidad: " + to_string(this->capacidad);
    return o;
}

void Vehiculos::imprimir() const {
    cout << tostring() << endl;
}
