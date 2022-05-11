/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Donante.h"

Donante::Donante(string dni, string n, string t, Fecha* nac, GrupoSanguineo::eGrupoSanguineo g, Sexo::eSexo s, CentroDeSalud* asc, Fecha* f) : Paciente(dni, n, t, nac, g, s, asc) {
    this->fallecimiento = f;
    this->initAblacion = NULL;
}

Organo* Donante::remover(Organos::eOrg o) {
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