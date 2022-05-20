/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "CentroDeSalud.h"

cCentroDeSalud::cCentroDeSalud(string n, string d, string p, eProv::Provincias pr, string t): nombre(n), direccion(d), partido(p), provincia(pr), telefono(t), MisVehiculos(NULL) { }

cOrgano* cCentroDeSalud::Ablar(cListaOrganos* d, eOrg::Organos q) {
    cOrgano* rmOrgano = (*d)[q];

    (*d) - rmOrgano;

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

void cCentroDeSalud::setMisVehiculos(cListaVehiculos* v) {
    try {
        if (v == NULL) throw new null_node();
    }
    catch (null_node& e) {
        cerr << e.what() << endl;
    }

    this->MisVehiculos = v;
}

cListaVehiculos* cCentroDeSalud::getMisVehiculos() const {
    return this->MisVehiculos;
}

eProv::Provincias cCentroDeSalud::getProvincia() const {
    return this->provincia;
}

string cCentroDeSalud::tostring() const {
    return this->nombre + "\t" + this->telefono + "\n" + this->direccion + ", " + this->partido + ", " + eProv::getProvinciaString((u_int)provincia);
}

void cCentroDeSalud::imprimir() const {
    cout << tostring() << endl;
}

char cCentroDeSalud::CalculadoraDeDistancia(cCentroDeSalud* csd, cCentroDeSalud* csr) {
    char distancia = 1;

    if (csd->provincia == csr->provincia)
        if (csd->partido == csr->partido)
            distancia = 0;
    else distancia = -1;

    return distancia;
}