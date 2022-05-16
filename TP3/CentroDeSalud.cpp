/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "CentroDeSalud.h"

cCentroDeSalud::cCentroDeSalud(string n, string d, string p, eProv::Provincias pr, string t): nombre(n), direccion(d), partido(p), provincia(pr), telefono(t) { }

cOrgano* cCentroDeSalud::Ablar(cListaOrganos& d, eOrg::Organos q) {
    cOrgano* rmOrgano = d[q];

    d - rmOrgano;

    cFecha* tiempoAblado = new cFecha(cFecha::Hoy());
    rmOrgano->setAblacion(tiempoAblado);

    return rmOrgano;
}

void cCentroDeSalud::Trasplantar(cOrgano*& r, cOrgano* o) {
    if (cFecha::OrganoTrasplantable(cFecha::Hoy(), o->getAblacion()->getFecha())) {
        if (TransplateEquiprobable()) {
            cOrgano* viejoOrgano = r;
            r = o;
            delete viejoOrgano;

            cout << "El transplante fue realizado de forma exitosa" << endl;
        } else throw new trasplant();
    } else throw new overtime();
}

bool cCentroDeSalud::TransplateEquiprobable() {
    srand((u_int)time(NULL));
    return ((rand() % 2) - 1) == 0 ? true : false;
}

string cCentroDeSalud::tostring() const {
    return this->nombre + "\t" + this->telefono + "\n" + this->direccion + ", " + this->partido + ", " + eProv::convertProvinciasString(this->provincia);
}

void cCentroDeSalud::imprimir() const {
    cout << tostring() << endl;
}