/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CCENTRODESALUD_H
#define CCENTRODESALUD_H

#include "eProvincia.h"
#include "listaOrganos.h"

class cCentroDeSalud {
public: 
	cCentroDeSalud(string, string, string, eProv::Provincias, string);
	~cCentroDeSalud() { }
	
	cOrgano* Ablar(/*listaOrganos& d,*/ eOrg::Organos q);
	void Trasplantar(cOrgano*& r, cOrgano* o);

	string tostring() const;
	void   imprimir() const;

private: 
	const string nombre;
	const string direccion;
	const string partido;
	const string telefono;
	const eProv::Provincias provincia;
};

#endif //CENTRODESALUD_H