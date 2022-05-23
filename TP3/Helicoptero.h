#ifndef HELICOPTERO_H
#define HELICOPTERO_H

#include "Vehiculos.h"

class cHelicoptero: public cVehiculos {
	const bool turbina;
	
public: 
	cHelicoptero(string r, float la, float an, bool tu);
	~cHelicoptero() { }

	void RealizarTransporte() const;

	string tostring() const;
	void   imprimir() const;
};

#endif //HELICOPTERO_H