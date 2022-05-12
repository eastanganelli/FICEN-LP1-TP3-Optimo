/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "CentroDeSalud.h"

CentroDeSalud::CentroDeSalud(string n, string d, string p, eProv::Provincias pr, string t): nombre(n), direccion(d), partido(p), provincia(pr), telefono(t) { }

Organo* CentroDeSalud::Ablar(listaOrganos& d, eOrg::Organos q) {
    Organo* rmOrgano = d[q];
    d - rmOrgano;
    rmOrgano->setAblacion(new Fecha(1,1,1)); //example
    return rmOrgano;
}

void CentroDeSalud::Trasplantar(Organo*& r, Organo* o) {
    try {

    }
    catch () {

    }
}

string CentroDeSalud::tostring() const {
    return this->nombre + "\t" + this->telefono + "\n" + this->direccion + ", " + this->partido + ", " + eProv::tostring(this->provincia);
}

void CentroDeSalud::imprimir() const {
    cout << tostring() << endl;
}