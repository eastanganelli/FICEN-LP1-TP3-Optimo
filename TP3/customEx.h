#pragma once
#include <exception>
#include "global.h"

class overtime : public exception {
	virtual const char* what() const throw() {
		return "Más de 20 horas, no es posible realizar Trasplante";
	}
};

class repeatednode : public exception {
	virtual const char* what() const throw() {
		return "Este valor ya se encuentra en la Lista";
	}
} rep_node;