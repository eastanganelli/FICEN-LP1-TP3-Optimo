/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "CentroDeSalud.h"

CentroDeSalud::CentroDeSalud(string n, string d, string p, Provincias::eProv pr, string t): nombre(n), direccion(d), partido(p), provincia(pr), telefono(t) {
}

const string CentroDeSalud::tostring() {
    return "";
}

const void CentroDeSalud::imprimir() {
    cout << tostring() << endl;
}