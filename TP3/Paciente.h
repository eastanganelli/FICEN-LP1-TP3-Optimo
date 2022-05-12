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
	Paciente(string dni, string n, string t, Fecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, CentroDeSalud* asc);
	virtual ~Paciente() = 0;

	bool operator==(const Paciente& R) const;

	virtual string tostring() const;
	virtual void   imprimir() const;
	
protected: 
	const string dni;
	const string nombre;
	const Fecha* nacimiento;
	eSexo::Sexo  sexo;
	string telefonoContacto;
	eGrupoSanguineo::Grupo gs;
	CentroDeSalud* HospiAsociado;
};
#endif //_PACIENTE_H