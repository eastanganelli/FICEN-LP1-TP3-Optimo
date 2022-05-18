/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Donante.h"

cDonante::cDonante(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc, cFecha* f) : cPaciente(dni, n, t, nac, g, s, asc) {
    this->Organos = NULL;
    this->fallecimiento = f;
    this->initAblacion = NULL;
}

bool cDonante::tieneOrgano(eOrg::Organos o) const {
    return (*Organos)[o] != NULL;
}

cOrgano* cDonante::remover(eOrg::Organos o) {
    cOrgano* Ablado = NULL;

    Ablado = (*Organos)[o];
    (*Organos) - Ablado;

    return Ablado;
}

string cDonante::tostring() const {
    return "Paciente [ DNI: " + this->dni + " ]\n" + this->nombre +
           "\nFallecio: " + this->fallecimiento->tostring() +
           "\nAblacion: " + this->initAblacion->tostring();
}

void cDonante::imprimir() const {
    cout << tostring() << endl;
}