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

string cReceptor::tostring() const {
	string o;
	return o;
}

void cReceptor::imprimir() const {
	cout << tostring() << endl;
}