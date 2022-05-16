#include <exception>
#include "global.h"

#ifndef CUSTOMEX_H
#define CUSTOMEX_H

class overtime : public exception {
public:
	virtual const char* what() const throw() {
		return "Más de 20 horas, no es posible realizar Trasplante";
	}
};

class trasplant : public exception {
public:
	virtual const char* what() const throw() {
		return "Hubo dificultad para realizar el trasplante";
	}
};

class null_node : public exception {
public:
	virtual const char* what() const throw() {
		return "Este valor es nulo";
	}
};

class rep_node : public exception {
public:
	virtual const char* what() const throw() {
		return "Este valor ya se encuentra en la Lista";
	}
};

class empty_list : public exception {
public:
	virtual const char* what() const throw() {
		return "La Lista esta vacía";
	}
};

class out_list : public exception {
public:
	virtual const char* what() const throw() {
		return "No se encuentra en la Lista";
	}
};

#endif //CUSTOMEX_H