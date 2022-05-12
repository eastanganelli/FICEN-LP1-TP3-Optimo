/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _CENTRODESALUD_H
#define _CENTRODESALUD_H

#include "eProvincia.h"
#include "listaOrganos.h"

class CentroDeSalud {
public: 
	CentroDeSalud(string, string, string, eProv::Provincias, string);
	~CentroDeSalud() { }
	
	Organo* Ablar(listaOrganos& d, eOrg::Organos q);
	void Trasplantar(Organo*& r, Organo* o);

	string tostring() const;
	void   imprimir() const;

private: 
	const string nombre;
	const string direccion;
	const string partido;
	const string telefono;
	const eProv::Provincias provincia;
};

#endif //_CENTRODESALUD_H