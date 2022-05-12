/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _AVION_H
#define _AVION_H

#include "Vehiculos.h"


class Avion: public Vehiculos {
public: 
	Avion(string r, float t, u_int c);
	~Avion() { }
	string tostring() const;
	void   imprimir() const;
};

#endif //_AVION_H