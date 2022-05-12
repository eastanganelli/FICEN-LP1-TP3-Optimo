/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _RECEPTOR_H
#define _RECEPTOR_H

#include "ePrioridad.h"
#include "ePatologia.h"
#include "eEstado.h"
#include "Paciente.h"

class Receptor: public Paciente {
public:
	/// <summary>
	/// Constructor de la clase Receptor
	/// </summary>
	/// <param name="DNI"></param>
	/// <param name="Nombre Completo"></param>
	/// <param name="Telefono Contacto"></param>
	/// <param name="Fecha Nacimiento"></param>
	/// <param name="Grupo Sanguineo"></param>
	/// <param name="Sexo"></param>
	/// <param name="Hospital ASociado"></param>
	/// <param name="Estado"></param>
	/// <param name="Prioridad"></param>
	/// <param name="Patologia"></param>
	Receptor(string dni, string n, string t, Fecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, CentroDeSalud* asc, eEst::Estado est, ePrio::Prioridad prio, ePato::Patologia pat);
	~Receptor();

	string tostring() const;
	void   imprimir() const;

private: 
	ePrio::Prioridad prioridad;
	ePato::Patologia  patologia;
	eEst::Estado     estado;
	Fecha*  agregadoListaEspera;
	Organo* OrganoDefectuoso;
};
#endif //_RECEPTOR_H