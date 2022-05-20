/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Receptor.h"

cReceptor::cReceptor(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc, eEst::Estado est,
					ePrio::Prioridad prio, ePato::Patologia pat) : cPaciente(dni, n, t, nac, g, s, asc) {
	this->patologia = pat;
	this->estado    = est;
	this->prioridad = prio;
	this->Fecha     = NULL;
	this->Organo    = NULL;
}

cReceptor::~cReceptor() {
	delete this->Fecha;
	delete this->Organo;
}

void cReceptor::setOrganoDefectuoso(cOrgano* o) {
	this->Organo = o;
}

cOrgano* cReceptor::getMiOrgano() const {
	return this->Organo;
}

void cReceptor::TrasplanteExitoso(bool exito) {
	if (exito) {
		this->estado = eEst::Estado::Alta;
		this->prioridad = ePrio::Prioridad::NON;
		this->patologia = ePato::Patologia::INMO;
	}
	else {
		this->estado = eEst::Estado::Inestable;
		this->prioridad = ePrio::Prioridad::ALTA;
	}
	this->AgregadoLista();
}

void cReceptor::AgregadoLista() {
	if(this->Fecha != NULL)
		delete this->Fecha;

	this->Fecha = new cFecha(cFecha::Hoy());
}

string cReceptor::tostring() const {
	return "Nombre: " + this->nombre + "\nDNI: " + this->dni +
		"\n Fecha Nacimiento" + this->nacimiento->tostring() +
		"\nSexo:" + eSexo::getSexoString((u_int)sexo) +
		"\nGrupo Sanguineo: " + eGrupoSanguineo::getGrupoString((u_int)gs) +
		"\nTelefono de contacto: " + this->telefonoContacto +
		(this->estado != eEst::Estado::Alta ? "\nOrgano defectuoso" : "\nOrgano Trasplantado") + this->Organo->tostring();
}

void cReceptor::imprimir() const {
	cout << tostring() << endl;
}