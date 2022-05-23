#ifndef AMBULANCIA_H
#define AMBULANCIA_H

#include "Vehiculos.h"

class cAmbulancia: public cVehiculos {
	const bool tieneAirCon;
	
public: 
	/// <summary>
	/// Constructor de clase Ambulancia
	/// </summary>
	/// <param name="r">Registro</param>
	/// <param name="la">Largo</param>
	/// <param name="an">Ancho</param>
	/// <param name="AirCon">Aire Acondicionado</param>
	cAmbulancia(string r, float la, float an, bool AirCon);
	~cAmbulancia() { }
	
	void RealizarTransporte() const;

	string tostring() const;
	void   imprimir() const;
};

#endif //AMBULANCIA_H