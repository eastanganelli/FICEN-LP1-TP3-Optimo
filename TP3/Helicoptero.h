/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef HELICOPTERO_H
#define HELICOPTERO_H

#include "Vehiculos.h"

class cHelicoptero: public cVehiculos {
public: 
	cHelicoptero(string r);
	~cHelicoptero() { }
	string tostring() const;
	void imprimir()   const;
};
#endif //HELICOPTERO_H