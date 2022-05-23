#include "Organo.h"

cOrgano::cOrgano(eOrg::Organos t) {
	this->tipo = t;
	this->ablacion = NULL;
}

cOrgano::cOrgano(eOrg::Organos t, cFecha* f) {
	this->tipo = t;
	this->ablacion = f;
}

cOrgano::~cOrgano() {
	delete this->ablacion;
}

void cOrgano::setAblacion(cFecha* f) {
	this->ablacion = f;
}

cFecha* cOrgano::getAblacion() const {
	return this->ablacion;
}

eOrg::Organos cOrgano::getTipoOrg() const {
	return this->tipo;
}

string cOrgano::tostring() const {
	stringstream ss;
	
	ss << "Organo [ " << eOrg::getOrganoString((u_int)tipo) << " ]" << endl
		<< "Ablación [ " << (this->ablacion != NULL ? this->ablacion->tostring() : "Sin Fecha") << " ]" << endl;

	return ss.str();
}

void cOrgano::imprimir() const {
	cout << tostring() << endl;
}
