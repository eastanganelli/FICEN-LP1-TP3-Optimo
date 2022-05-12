/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
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

string cOrgano::tostring() const {
	return "Organo [ " + eOrg::convertOrganoString(this->tipo) + " ]\nAblación [ " + this->ablacion->tostring() + " ]";
}

void cOrgano::imprimir() const {
	cout << tostring() << endl;
}
