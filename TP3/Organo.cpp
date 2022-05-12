/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Organo.h"

Organo::Organo(eOrg::Organos t) {
	this->tipo = t;
	this->ablacion = NULL;
}

Organo::Organo(eOrg::Organos t, Fecha* f) {
	this->tipo = t;
	this->ablacion = f;
}

Organo::~Organo() {
	delete this->ablacion;
}

void Organo::setAblacion(Fecha* f) {
	this->ablacion = f;
}

Fecha* Organo::getAblacion() const {
	return this->ablacion;
}

string Organo::tostring() const {
	return "Organo [ " + eOrg::tostring(this->tipo) + " ]\nAblación [ " + this->ablacion->tostring() + " ]";
}

void Organo::imprimir() const {
	cout << tostring() << endl;
}
