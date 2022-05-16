/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include "Fecha.h"

cFecha::cFecha(string strtime) {
    this->Fecha = this->StringToTime(strtime);
}

cFecha::cFecha(time_t t) {
    this->Fecha = t;
}

time_t cFecha::getFecha() const {
    return this->Fecha;
}

string cFecha::tostring() const {
    return ctime(&(this->Fecha));
}

void cFecha::imprimir() const {
    cout << tostring() << endl;
}

time_t cFecha::Hoy() {
    time_t when = time(NULL);

    return when;
}

time_t cFecha::StringToTime(string str) {
    time_t Tiempo = 0;
    int y = 0, m = 0, d = 0, hh = 0, mm = 0;

    (void)sscanf(str.c_str(), "%2d/%2d/%4d %2d:%2d", &d, &m, &y, &hh, &mm);

    struct tm when = { 0 };

    when.tm_year = y - 1900;
    when.tm_mon  = m - 1;
    when.tm_mday = d;
    when.tm_hour = hh;
    when.tm_min  = mm;

    Tiempo = mktime(&when);

    return Tiempo;
}

bool cFecha::OrganoTrasplantable(time_t recibido, time_t ablado) {
    time_t b, e;

    b = recibido, e = ablado;

    int Aceptable = 20 * 3600,
        diff = difftime(recibido,ablado);

    if (diff < Aceptable)
        return true;

    return false;
}