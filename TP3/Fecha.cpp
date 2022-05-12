/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Fecha.h"

cFecha::cFecha(u_int d, u_int m, u_int y) : y(y), m(m), d(d) {
    this->hm = NULL;
}

cFecha::cFecha(u_int d, u_int m, u_int y, u_int h, u_int mm) : y(y), m(m), d(d) {
    Hora* hora = new Hora(h, mm);
    this->hm = hora;
}

cFecha::cFecha(u_int d, u_int m, u_int y, Hora* hhm) : y(y), m(m), d(d) {
    this->hm = hhm == NULL ? NULL : hhm;
}

string cFecha::tostring() const {
	string o = to_string(this->d) + "/" + to_string(this->m) + "/" + to_string(this->y) + " " + this->hm->tostring();
    return o;
}

void cFecha::imprimir() const {
    cout << tostring() << endl;
}