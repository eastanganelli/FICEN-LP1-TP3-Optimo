#ifndef AVION_H
#define AVION_H

#include "Vehiculos.h"

class cAvion: public cVehiculos {
	const float topSpeed;
	const bool  Helice;
	
public:
	/// <summary>
	/// Constructor de clase Avion
	/// </summary>
	/// <param name="r">Registro</param>
	/// <param name="la">Largo</param>
	/// <param name="an">Ancho</param>
	/// <param name="ts">Velocidad Maxima</param>
	/// <param name="he">Tiene Helice</param>
	cAvion(string r, float la, float an, float ts, bool he);
	~cAvion() { }

	void RealizarTransporte() const;

	string tostring() const;
	void   imprimir() const;
};

#endif //AVION_H