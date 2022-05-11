/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Paciente.h"

Paciente::Paciente(string dni, string n, string t, Fecha* nac, GrupoSanguineo::eGrupoSanguineo g, Sexo::eSexo s, CentroDeSalud* asc): dni(dni), nombre(n), sexo(s), nacimiento(nac) {
	this->HospiAsociado = asc == NULL ? NULL : asc;
	this->telefonoContacto = t;
	this->gs = gs;
}

Paciente::~Paciente() {
	delete this->nacimiento;
}

bool Paciente::operator==(const Paciente& R) const {
	return GrupoSanguineo::compatibilidad(this->gs, R.gs);
}

string Paciente::tostring() const {
	string o = "Nombre: " + this->nombre + "\nDNI: " + this->dni +
			   "\n Fecha Nacimiento" + this->nacimiento->tostring() +
			   "\nSexo:" + Sexo::tostring(this->sexo) +
			   "\nGrupo Sanguineo: " + GrupoSanguineo::tostring(this->gs) +
			   "\nTelefono de contacto: " + this->telefonoContacto;
	return o;
}

void Paciente::imprimir() const {
	cout << tostring() << endl;
}