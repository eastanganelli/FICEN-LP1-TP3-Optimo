/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Donante.h"

Donante::Donante(string dni, string n, string t, Fecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, CentroDeSalud* asc, Fecha* f) : Paciente(dni, n, t, nac, g, s, asc) {
    this->Organos = NULL;
    this->fallecimiento = f;
    this->initAblacion = NULL;
}

Organo* Donante::remover(eOrg::Organos o) {
    Organo* Ablado = NULL;

    //this->Organos.

    return Ablado;
}

string Donante::tostring() const {
    return "Paciente [ DNI: " + this->dni + " ]\n" + this->nombre + "\nFallecio: " + this->fallecimiento->tostring() + "\nAblacion: " +this->initAblacion->tostring();
}

void Donante::imprimir() const {
    cout << tostring() << endl;
}