/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef VEHICULOS_H
#define VEHICULOS_H

#include "global.h"

class cVehiculos {
public: 
	friend class cListaVehiculos;

	cVehiculos(string r);
	~cVehiculos() { }

	virtual string tostring() const;
	virtual void   imprimir() const;

protected: 
	const string registro;
};
#endif //VEHICULOS_H