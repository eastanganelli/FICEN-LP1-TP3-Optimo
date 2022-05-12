/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CAVION_H
#define CAVION_H

#include "Vehiculos.h"

class cAvion: public cVehiculos {
public: 
	cAvion(string r, float t, u_int c);
	~cAvion() { }
	string tostring() const;
	void   imprimir() const;
};

#endif //AVION_H