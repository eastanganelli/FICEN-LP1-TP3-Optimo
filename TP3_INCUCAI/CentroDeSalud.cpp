/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "CentroDeSalud.h"

CentroDeSalud::CentroDeSalud(string n, string d, string p, Provincias::eProv pr, string t): nombre(n), direccion(d), partido(p), provincia(pr), telefono(t) {
}

Organo* CentroDeSalud::Ablar(Donante* d) {
    Organo* rmOrgano = NULL;



    return rmOrgano;
}

void CentroDeSalud::Trasplantar(Receptor* r, Organo* o) {

}

string CentroDeSalud::tostring() const {
    return this->nombre + "\t" + this->telefono + "\n" + this->direccion + ", " + this->partido + ", " + Provincias::tostring(this->provincia);
}

void CentroDeSalud::imprimir() const {
    cout << tostring() << endl;
}