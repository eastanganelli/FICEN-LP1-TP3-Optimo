/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef CPACIENTE_H
#define CPACIENTE_H

#include "CentroDeSalud.h"
#include "Fecha.h"
#include "GrupoSanguineo.h"
#include "Sexo.h"

class cPaciente {
public:
	friend class cListaPacientes;

	cPaciente(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc);
	virtual ~cPaciente() = 0;

	virtual bool operator==(const cPaciente* R) const;

	virtual string tostring() const;
	virtual void   imprimir() const;
	
protected: 
	const string dni;
	const string nombre;
	const cFecha* nacimiento;
	eSexo::Sexo  sexo;
	string telefonoContacto;
	eGrupoSanguineo::Grupo gs;
	cCentroDeSalud* HospiAsociado;

};
#endif //PACIENTE_H