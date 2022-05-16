/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CCENTRODESALUD_H
#define CCENTRODESALUD_H

#include "Provincia.h"
#include "ListaOrganos.h"

class cCentroDeSalud {
	const string nombre;
	const string direccion;
	const string partido;
	const string telefono;
	const eProv::Provincias provincia;

	bool TransplateEquiprobable();

public: 
	cCentroDeSalud(string, string, string, eProv::Provincias, string);
	~cCentroDeSalud() { }
	
	cOrgano* Ablar(cListaOrganos& d, eOrg::Organos q);
	void Trasplantar(cOrgano*& r, cOrgano* o);

	string tostring() const;
	void   imprimir() const;
};

#endif //CENTRODESALUD_H