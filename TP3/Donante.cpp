#include "Donante.h"

cDonante::cDonante(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc, cFecha* f) : cPaciente(dni, n, t, nac, g, s, asc) {
    this->Organos = NULL;
    this->fallecimiento = f;
    this->initAblacion = NULL;
}

bool cDonante::tieneOrgano(eOrg::Organos o) const {
    return (*Organos)[o] != NULL;
}

cOrgano* cDonante::removerOrgano(eOrg::Organos o) {
    cOrgano* Ablado = NULL;

    Ablado = (*Organos)[o];
    (*Organos) - Ablado;

    return Ablado;
}

void cDonante::setListaOrganos(cListaOrganos* lst) {
    this->Organos = lst;
}

cListaOrganos* cDonante::getListaOrganos() const {
    return this->Organos;
}

string cDonante::tostring() const {
    stringstream ss;

    ss << "Paciente [ " << this->dni << " :: " << this->nombre << " ]" << endl
        << "Fecha Nacimiento > " << this->nacimiento->tostring() << endl
        << "Telefono de Contacto > " << this->telefonoContacto << endl
        << "Sexo > " << eSexo::getSexoString(u_int(this->sexo)) << endl
        << "Grupo Sanguineo > " << eGrupoSanguineo::getGrupoString(u_int(this->gs)) << endl
        << "Centro de Salud Asociado > " << this->HospiAsociado->tostring() << endl
        << "Fecha Defunción > " << this->fallecimiento->tostring() << endl
		<< "Inicio Ablación > " << this->initAblacion->tostring() << endl
        << this->Organos;

    return ss.str();
}

void cDonante::imprimir() const {
    cout << tostring() << endl;
}