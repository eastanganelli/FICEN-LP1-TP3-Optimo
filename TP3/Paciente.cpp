#include "Paciente.h"

cPaciente::cPaciente(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc): dni(dni), nombre(n), sexo(s), nacimiento(nac) {
	this->HospiAsociado = asc == NULL ? NULL : asc;
	this->telefonoContacto = t;
	this->gs = gs;
}

cPaciente::~cPaciente() { }

bool cPaciente::operator==(const cPaciente* R) const {
	return eGrupoSanguineo::compatibilidad(this->gs, R->gs);
}

cCentroDeSalud* cPaciente::getCentroAsociado() const {
	return this->HospiAsociado;
}

string cPaciente::tostring() const {
	stringstream ss;

	ss << "Paciente [ " << this->dni << " :: " << this->nombre << " ]" << endl
		<< "Fecha Nacimiento > " << this->nacimiento->tostring() << endl
		<< "Telefono de Contacto > " << this->telefonoContacto << endl
		<< "Sexo > " << eSexo::getSexoString(u_int(this->sexo)) << endl
		<< "Grupo Sanguineo > " << eGrupoSanguineo::getGrupoString(u_int(this->gs)) << endl
		<< "Centro de Salud Asociado > " << this->HospiAsociado->tostring() << endl;
	
	return ss.str();
}

void cPaciente::imprimir() const {
	cout << tostring() << endl;
}