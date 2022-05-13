/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Fecha.h"

cFecha::cFecha(string strtime) {
    this->strTime = strtime;
}

string cFecha::tostring() const {
    return this->strTime;
}

void cFecha::imprimir() const {
    cout << tostring() << endl;
}

time_t cFecha::StringToTime(string str) {
    u_int d, m, y, hh, mm;
    struct tm when = { 0 };

    sscanf_s(str.c_str(), "%d/%d/%d %d:%d", &d, &m, &y, &hh, &mm);
    
    when.tm_year = y;
    when.tm_mon  = m;
    when.tm_mday = d;
    when.tm_hour = hh;
    when.tm_min  = mm;

    time_t converted = mktime(&when);

    return converted;
}