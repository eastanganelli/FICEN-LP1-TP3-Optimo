/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CRECEPTOR_H
#define CRECEPTOR_H

#include "ePrioridad.h"
#include "ePatologia.h"
#include "eEstado.h"
#include "Paciente.h"

class cReceptor: public cPaciente {
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
	cReceptor(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc, eEst::Estado est, ePrio::Prioridad prio, ePato::Patologia pat);
	~cReceptor();

	string tostring() const;
	void   imprimir() const;

private: 
	ePrio::Prioridad prioridad;
	ePato::Patologia  patologia;
	eEst::Estado     estado;
	cFecha*  agregadoListaEspera;
	cOrgano* OrganoDefectuoso;
};
#endif //RECEPTOR_H