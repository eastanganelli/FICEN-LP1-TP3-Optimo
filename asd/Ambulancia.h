/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _AMBULANCIA_H
#define _AMBULANCIA_H

#include "Vehiculos.h"

class Ambulancia: public Vehiculos {

public: 
	Ambulancia(string r, float t, u_int c, string color);
	~Ambulancia() { }
	string tostring() const;
	void imprimir()   const;

private:
	string color;
};

#endif //_AMBULANCIA_H