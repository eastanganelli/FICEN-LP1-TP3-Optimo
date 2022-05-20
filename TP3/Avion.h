/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#include "Vehiculos.h"

#ifndef AVION_H
#define AVION_H

class cAvion: public cVehiculos {
public: 
	cAvion(string r);
	~cAvion() { }
	string tostring() const;
	void   imprimir() const;
};

#endif //AVION_H