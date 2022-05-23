#ifndef RECEPTOR_H
#define RECEPTOR_H

#include "Prioridad.h"
#include "Patologia.h"
#include "Estado.h"
#include "Paciente.h"

class cReceptor: public cPaciente {
	ePrio::Prioridad prioridad;
	ePato::Patologia patologia;
	eEst::Estado     estado;
	cFecha* Fecha;
	cOrgano* Organo;	
	
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
	/// <param name="Hospital Asociado"></param>
	/// <param name="Estado">Estado del Paciente</param>
	/// <param name="Prioridad">Prioridad</param>
	/// <param name="Patologia">Patologia presente</param>
	cReceptor(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc, eEst::Estado est, ePrio::Prioridad prio, ePato::Patologia pat);
	~cReceptor();

	/// <summary>
	/// Agregación del órgano afectado.
	/// </summary>
	/// <param name="o">Órgano afectado del paciente</param>
	void setOrganoDefectuoso(cOrgano* o);
	/// <summary>
	/// Se obtiene el órgano defectuoso.
	/// </summary>
	/// <returns>Puntero del órgano</returns>
	cOrgano* getMiOrgano()        const;
	/// <summary>
	/// Se obtiene la fecha del Trasplante
	/// </summary>
	/// <returns>Puntero del tipo Fecha</returns>
	cFecha*  getFechaTrasplante() const;

	/// <summary>
	/// Cambia estado y prioridad del paciente.
	/// Si el trasplante es exitoso, cambia prioridad a NON y estado ALTA.
	/// Caso contrario, cambia prioridad a ALTA y estado INESTABLE.
	/// </summary>
	/// <param name="exito">Estado del trasplante</param>
	void TrasplanteExitoso(bool exito = false);
	/// <summary>
	/// Setea la fecha de ingreso a la lista de Espera.
	/// </summary>
	void AgregadoLista();

	string tostring() const;
	void   imprimir() const;
};

#endif //RECEPTOR_H