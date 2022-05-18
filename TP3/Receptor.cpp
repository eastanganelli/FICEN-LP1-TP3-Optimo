/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Receptor.h"

cReceptor::cReceptor(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc, eEst::Estado est,
					ePrio::Prioridad prio, ePato::Patologia pat) : cPaciente(dni, n, t, nac, g, s, asc) {
	this->patologia = pat;
	this->estado = est;
	this->prioridad = prio;
	this->agregadoListaEspera = NULL;
	this->OrganoDefectuoso    = NULL;
}

cReceptor::~cReceptor() {
	delete this->agregadoListaEspera;
	delete this->OrganoDefectuoso;
}

cOrgano* cReceptor::getMiOrgano() const {
	return this->OrganoDefectuoso;
}

cCentroDeSalud* cReceptor::getCentroAsociado() const {
	return this->HospiAsociado;
}

string cReceptor::tostring() const {
	return "Nombre: " + this->nombre + "\nDNI: " + this->dni +
		"\n Fecha Nacimiento" + this->nacimiento->tostring() +
		"\nSexo:" + eSexo::convertSexoString(this->sexo) +
		"\nGrupo Sanguineo: " + eGrupoSanguineo::convertGrupoString(this->gs) +
		"\nTelefono de contacto: " + this->telefonoContacto +
		"\nOrgano defectuoso" + this->OrganoDefectuoso->tostring();
}

void cReceptor::imprimir() const {
	cout << tostring() << endl;
}