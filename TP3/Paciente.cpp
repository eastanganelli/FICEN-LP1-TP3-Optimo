/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Paciente.h"

cPaciente::cPaciente(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc): dni(dni), nombre(n), sexo(s), nacimiento(nac) {
	this->HospiAsociado = asc == NULL ? NULL : asc;
	this->telefonoContacto = t;
	this->gs = gs;
}

cPaciente::~cPaciente() { }

bool cPaciente::operator==(const cPaciente& R) const {
	return eGrupoSanguineo::compatibilidad(this->gs, R.gs);
}

string cPaciente::tostring() const {
	return "Nombre: " + this->nombre + "\nDNI: " + this->dni +
		"\n Fecha Nacimiento" + this->nacimiento->tostring() +
		"\nSexo:" + eSexo::convertSexoString(this->sexo) +
		"\nGrupo Sanguineo: " + eGrupoSanguineo::convertGrupoString(this->gs) +
		"\nTelefono de contacto: " + this->telefonoContacto;
}

void cPaciente::imprimir() const {
	cout << tostring() << endl;
}