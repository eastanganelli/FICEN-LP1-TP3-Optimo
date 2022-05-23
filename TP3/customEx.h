/*
* Excepciones personalizadas
* ----------------------------------------------------------------------------------
* Aquí podrán encontrar excepciones que se encargan de informar distintos problemas:
* - Excepción de sobre tiempo (overtime)
* - Excepción de trasplante (transplant):
*		Salta cuando el trasplante presenta un problema.
* - Excepción de vehículo (vehicle):
*		Salta cuando no se puede encontrar un vehículo para transportar el órgano ablado.
* - Excepción NULL (null_node):
*		Se ejecuta cuando recibimos o queremos leer una sección de memoria que se encuentra en NULL.
* - Excepción repetido (rep_node):
*		Se ejecuta cuando se intenta insertar un nodo que ya existe en la lista.
* - Expción de lista vacía (empty_list):
*		Se ejecuta cuando se intenta leer una lista vacía.
* - Excepción fuera de lista (out_list):
*		Se ejecuta cuando se intenta leer un nodo que no está en la lista.
* 
* @see https://www.cplusplus.com/doc/tutorial/exceptions/
* @see https://www.learncpp.com/cpp-tutorial/rethrowing-exceptions/
*/

#ifndef CUSTOMEX_H
#define CUSTOMEX_H

#include <exception>
#include "global.h"

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

class vehicle : public exception {
public:
	virtual const char* what() const throw() {
		return "Hubo dificultad para encontrar un vehiculo";
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