#include <exception>
#include "global.h"

#ifndef CUSTOMEX_H
#define CUSTOMEX_H

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
#endif // !CUSTOMEX_H