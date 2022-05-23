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

	/// <summary>
	/// Sobrecarga de Impresión
	/// </summary>
	/// <see cref="https://www.learncpp.com/cpp-tutorial/overloading-the-io-operators/"/>
	/// <seealso cref="https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170"/>
	friend ostream& operator<<(ostream& os, const cListaVehiculos& out);
};

inline cListaVehiculos::cListaVehiculos() :cListaT() { }

inline cListaVehiculos::cListaVehiculos(u_int tam, bool flag) : cListaT(tam, flag) { }

inline ostream& operator<<(ostream& os, const cListaVehiculos& out) {
	os << "Listado de Vehiculos" << endl
		<< "=====================" << endl;
	
	for (u_int i = 0; i < out.ca; i++) {
		if (out.List[i] != NULL)
			os << out.List[i]->tostring() << endl;
	}

	return os;
}

#endif //LISTAVEHICULOS_H