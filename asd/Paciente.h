/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _PACIENTE_H
#define _PACIENTE_H

#include "eGrupoSanguineo.h"
#include "eSexo.h"
#include "CentroDeSalud.h"
#include "Fecha.h"

class Paciente {
public:
	Paciente(string dni, string n, string t, Fecha* nac, GrupoSanguineo::eGrupoSanguineo g, Sexo::eSexo s, CentroDeSalud* asc);
	virtual ~Paciente() = 0;

	bool operator==(const Paciente& R) const;

	virtual string tostring() const;
	virtual void   imprimir() const;
	
protected: 
	const string dni;
	const string nombre;
	const Fecha* nacimiento;
	Sexo::eSexo  sexo;
	string telefonoContacto;
	GrupoSanguineo::eGrupoSanguineo gs;
	CentroDeSalud* HospiAsociado;
};
#endif //_PACIENTE_H