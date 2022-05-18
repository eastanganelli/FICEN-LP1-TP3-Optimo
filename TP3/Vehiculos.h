/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef CVEHICULOS_H
#define CVEHICULOS_H

#include "global.h"

class cVehiculos {
public: 
	friend class cListaVehiculos;

	cVehiculos(string r, float t, u_int c);
	~cVehiculos() { }

	virtual string tostring() const;
	virtual void   imprimir() const;

protected: 
	const string registro;
	const float  tara;
	unsigned int capacidad;
};
#endif //VEHICULOS_H