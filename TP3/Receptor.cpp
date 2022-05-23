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
	stringstream ss;

	ss << "Paciente [ " << this->dni << " :: " << this->nombre << " ]" << endl
		<< "Fecha Nacimiento > " << this->nacimiento->tostring() << endl
		<< "Telefono de Contacto > " << this->telefonoContacto << endl
		<< "Sexo > " << eSexo::getSexoString(u_int(this->sexo)) << endl
		<< "Grupo Sanguineo > " << eGrupoSanguineo::getGrupoString(u_int(this->gs)) << endl
		<< "Centro de Salud Asociado > " << this->HospiAsociado->tostring() << endl
		<< "Patologia > " << ePato::getPatologiaString(u_int(this->patologia)) << endl
		<< (this->estado != eEst::Estado::Alta ? "Organo defectuoso" : "Organo Trasplantado") << this->Organo->tostring()
		<< "Prioridad > " << ePrio::getPrioridadString(u_int(this->prioridad)) << endl;

	return ss.str();
}

void cReceptor::imprimir() const {
	cout << tostring() << endl;
}