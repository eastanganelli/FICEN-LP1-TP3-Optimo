/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CENTRODESALUD_H
#define CENTRODESALUD_H

#include "Provincia.h"
#include "ListaVehiculos.h"
#include "ListaOrganos.h"

class cCentroDeSalud {
	const string nombre;
	const string direccion;
	const string partido;
	const string telefono;
	const eProv::Provincias provincia;

	cListaVehiculos* MisVehiculos;

	bool TransplateEquiprobable();

public: 
	cCentroDeSalud(string, string, string, eProv::Provincias, string);
	~cCentroDeSalud() { }
	
	cOrgano* Ablar(cListaOrganos& d, eOrg::Organos q);
	void Trasplantar(cOrgano*& r, cOrgano* o);

	void setMisVehiculos(cListaVehiculos* v);
	cListaVehiculos* getMisVehiculos() const;

	string tostring() const;
	void   imprimir() const;

	static char CalculadoraDeDistancia(cCentroDeSalud* csd, cCentroDeSalud* csr);
};

#endif //CENTRODESALUD_H