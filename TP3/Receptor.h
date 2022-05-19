/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef RECEPTOR_H
#define RECEPTOR_H

#include "Prioridad.h"
#include "Patologia.h"
#include "Estado.h"
#include "Paciente.h"

class cReceptor: public cPaciente {
public:
	friend class cListaReceptores;

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

	void setOrganoDefectuoso(cOrgano* o);
	cOrgano* getMiOrgano() const;

	void TrasplanteExitoso(bool exito = false);
	void AgregadoLista();

	string tostring() const;
	void   imprimir() const;


private: 
	ePrio::Prioridad prioridad;
	ePato::Patologia patologia;
	eEst::Estado     estado;
	cFecha*  Fecha;
	cOrgano* Organo;
};
#endif //RECEPTOR_H