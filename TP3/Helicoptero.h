/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef CHELICOPTERO_H
#define CHELICOPTERO_H

#include "Vehiculos.h"

class cHelicoptero: public cVehiculos {
public: 
	cHelicoptero(string r);
	~cHelicoptero() { }
	string tostring() const;
	void imprimir()   const;
};
#endif //HELICOPTERO_H