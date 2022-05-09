/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _HELICOPTERO_H
#define _HELICOPTERO_H

#include "Vehiculos.h"

class Helicoptero: public Vehiculos {
public: 
	Helicoptero(string r, float t, u_int c);
	~Helicoptero() { }
	string tostring() const;
	void imprimir()   const;
};
#endif //_HELICOPTERO_H