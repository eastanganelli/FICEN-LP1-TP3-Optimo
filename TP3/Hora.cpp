/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Hora.h"

Hora::Hora(u_int hh, u_int mm) {
    this->hh = hh;
    this->mm = mm;
}

string Hora::tostring() const {
    string o = this->hh + ":" + this->mm;
    return o;
}

void Hora::imprimir() const {
    cout << tostring() << endl;
}