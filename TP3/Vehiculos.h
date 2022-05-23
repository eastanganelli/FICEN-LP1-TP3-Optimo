#ifndef VEHICULOS_H
#define VEHICULOS_H

#include "global.h"

class cVehiculos {
protected:
	const string registro;
	const float largo, ancho;
	
public: 
	friend class cListaVehiculos;

	/// <summary>
	/// Constructor de la clase Vehiculos
	/// </summary>
	/// <param name="r">Registro</param>
	/// <param name="largo"></param>
	/// <param name="ancho"></param>
	cVehiculos(string r, float largo, float ancho);
	~cVehiculos();

	/// <summary>
	/// Se realiza el transporte del Organo del Donante
	/// al Receptor
	/// </summary>
	virtual void RealizarTransporte() const = 0;

	virtual string tostring() const;
	virtual void   imprimir() const;
};

#endif //VEHICULOS_H