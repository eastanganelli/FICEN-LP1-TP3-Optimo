#ifndef LISTAVEHICULOS_H
#define LISTAVEHICULOS_H

#include "ListaT.h"
#include "Ambulancia.h"
#include "Avion.h"
#include "Helicoptero.h"

class cListaVehiculos : public cListaT<cVehiculos> {
public:
	cListaVehiculos();
	cListaVehiculos(u_int tam, bool flag);
};

inline cListaVehiculos::cListaVehiculos() :cListaT() { }

inline cListaVehiculos::cListaVehiculos(u_int tam, bool flag) : cListaT(tam, flag) { }

#endif // !LISTAVEHICULOS_H