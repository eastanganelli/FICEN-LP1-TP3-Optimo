/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#include "Vehiculos.h"

#ifndef CAMBULANCIA_H
#define CAMBULANCIA_H

class cAmbulancia: public cVehiculos {

public: 
	cAmbulancia(string r);
	~cAmbulancia() { }
	string tostring() const;
	void imprimir()   const;

private:
	string color;
};

#endif //AMBULANCIA_H