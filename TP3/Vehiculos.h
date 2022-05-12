/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef _VEHICULOS_H
#define _VEHICULOS_H
#include "global.h"

class Vehiculos {
public: 
	Vehiculos(string r, float t, u_int c);
	~Vehiculos() { }

	virtual string tostring() const;
	virtual void   imprimir() const;

protected: 
	const string registro;
	const float  tara;
	unsigned int capacidad;
};
#endif //_VEHICULOS_H