#ifndef DONANTE_H
#define DONANTE_H

#include "Paciente.h"

class cDonante: public cPaciente {
	cListaOrganos* Organos;
	cFecha* fallecimiento;
	cFecha* initAblacion;
	
public:
	/// <summary>
	/// Constructor de la clase Donante
	/// </summary>
	/// <param name="dni">DNI</param>
	/// <param name="n">Nombre y Apellido</param>
	/// <param name="t">Teléfono de Contacto</param>
	/// <param name="nac">Fecha Nacimiento</param>
	/// <param name="g">Grupo Sanguineo</param>
	/// <param name="s">Sexo del paciente</param>
	/// <param name="asc">Centro de salud asociado</param>
	/// <param name="f">Fecha de defunción</param>
	cDonante(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc, cFecha* f);
	~cDonante() { }

	/// <summary>
	/// Verifica si el donante tiene el órgano de interés.
	/// </summary>
	/// <param name="o">Órgano buscado</param>
	/// <returns>
	/// True: si lo tiene.
	/// False: si no lo tiene.
	/// </returns>
	bool tieneOrgano(eOrg::Organos o) const;
	/// <summary>
	/// Remueve el órgano del donante que se requiere para el receptor.
	/// </summary>
	/// <param name="o">Órgano buscado</param>
	/// <returns>Devuelve el órgano</returns>
	cOrgano* remover(eOrg::Organos o);

	/// <summary>
	/// Se agrega al Donante la lista de organos que desea donar.
	/// </summary>
	/// <param name="lst">Lista de organos a donar</param>
	void setListaOrganos(cListaOrganos* lst);
	/// <summary>
	/// Devuelve listado de organos que desea donar el Donante.
	/// </summary>
	/// <returns>Lista de organos a donar</returns>
	cListaOrganos* getListaOrganos() const;

	string tostring() const;
	void   imprimir() const;
};

#endif //DONANTE_H