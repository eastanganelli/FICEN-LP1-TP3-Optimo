/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "CentroDeSalud.h"

cCentroDeSalud::cCentroDeSalud(string n, string d, string p, eProv::Provincias pr, string t): nombre(n), direccion(d), partido(p), provincia(pr), telefono(t) { }

cOrgano* cCentroDeSalud::Ablar(/*listaOrganos& d,*/ eOrg::Organos q) {
    //Organo* rmOrgano = d[q];
    //d - rmOrgano;
    //rmOrgano->setAblacion(new Fecha(1,1,1)); //example
    //return rmOrgano;
    return NULL;
}

void cCentroDeSalud::Trasplantar(cOrgano*& r, cOrgano* o) {
    try {
        throw 505;
    }
    catch (int err) {
        cout << err << endl;
    }
}

string cCentroDeSalud::tostring() const {
    return this->nombre + "\t" + this->telefono + "\n" + this->direccion + ", " + this->partido + ", " + eProv::convertProvinciasString(this->provincia);
}

void cCentroDeSalud::imprimir() const {
    cout << tostring() << endl;
}