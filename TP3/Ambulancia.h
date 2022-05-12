/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CAMBULANCIA_H
#define CAMBULANCIA_H

#include "Vehiculos.h"

class cAmbulancia: public cVehiculos {

public: 
	cAmbulancia(string r, float t, u_int c, string color);
	~cAmbulancia() { }
	string tostring() const;
	void imprimir()   const;

private:
	string color;
};

#endif //AMBULANCIA_H