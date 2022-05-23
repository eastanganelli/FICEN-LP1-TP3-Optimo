/*
* Excepciones personalizadas
* ----------------------------------------------------------------------------------
* Aqu� podr�n encontrar excepciones que se encargan de informar distintos problemas:
* - Excepci�n de sobre tiempo (overtime)
* - Excepci�n de trasplante (transplant):
*		Salta cuando el trasplante presenta un problema.
* - Excepci�n de veh�culo (vehicle):
*		Salta cuando no se puede encontrar un veh�culo para transportar el �rgano ablado.
* - Excepci�n NULL (null_node):
*		Se ejecuta cuando recibimos o queremos leer una secci�n de memoria que se encuentra en NULL.
* - Excepci�n repetido (rep_node):
*		Se ejecuta cuando se intenta insertar un nodo que ya existe en la lista.
* - Expci�n de lista vac�a (empty_list):
*		Se ejecuta cuando se intenta leer una lista vac�a.
* - Excepci�n fuera de lista (out_list):
*		Se ejecuta cuando se intenta leer un nodo que no est� en la lista.
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
		return "M�s de 20 horas, no es posible realizar Trasplante";
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
		return "La Lista esta vac�a";
	}
};

class out_list : public exception {
public:
	virtual const char* what() const throw() {
		return "No se encuentra en la Lista";
	}
};

#endif //CUSTOMEX_H