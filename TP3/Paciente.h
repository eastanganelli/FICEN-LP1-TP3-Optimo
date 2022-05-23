#ifndef PACIENTE_H
#define PACIENTE_H

#include "CentroDeSalud.h"
#include "Fecha.h"
#include "GrupoSanguineo.h"
#include "Sexo.h"

class cPaciente {
protected:
	const string dni;
	const string nombre;
	const cFecha* nacimiento;
	eSexo::Sexo  sexo;
	string telefonoContacto;
	eGrupoSanguineo::Grupo gs;
	cCentroDeSalud* HospiAsociado;

public:
	friend class cListaPacientes;

	/// <summary>
	/// Constructor de la clase Paciente.
	/// </summary>
	/// <param name="dni">DNI</param>
	/// <param name="n">Nombre y Apellido</param>
	/// <param name="t">Teléfono de contacto</param>
	/// <param name="nac">Fecha de Nacimiento</param>
	/// <param name="g">grupo Sanguineo</param>
	/// <param name="s">Sexo</param>
	/// <param name="asc">Centro de Salud Asociado</param>
	cPaciente(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc);
	virtual ~cPaciente() = 0;

	/// <summary>
	/// Verifica si los pacientes son compatibles
	/// </summary>
	/// <param name="R">Paciente a comparar</param>
	/// <returns>
	/// True: Compatible
	/// False: No Compatible
	/// </returns>
	virtual bool operator==(const cPaciente* R) const;
	/// <summary>
	/// Se obtiene el Centro de Salud al que el paciente esta asociado.
	/// </summary>
	/// <returns>Devuelve puntero del centro de salud</returns>
	cCentroDeSalud* getCentroAsociado() const;

	virtual string tostring() const;
	virtual void   imprimir() const;

};
#endif //PACIENTE_H