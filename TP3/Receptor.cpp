/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Receptor.h"

Receptor::Receptor(string dni, string n, string t, Fecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, CentroDeSalud* asc, eEst::Estado est,
					ePrio::Prioridad prio, ePato::Patologia pat) : Paciente(dni, n, t, nac, g, s, asc) {
	this->patologia = pat;
	this->estado = est;
	this->prioridad = prio;
	this->agregadoListaEspera = NULL;
	this->OrganoDefectuoso    = NULL;
}

Receptor::~Receptor() {
	delete this->agregadoListaEspera;
	delete this->OrganoDefectuoso;
}

string Receptor::tostring() const {
	string o;
	return o;
}

void Receptor::imprimir() const {
	cout << tostring() << endl;
}