/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _DONANTE_H
#define _DONANTE_H

#include "Paciente.h"

class Donante: public Paciente {
public:
	Donante(string dni, string n, string t, Fecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, CentroDeSalud* asc, Fecha* f);
	~Donante() { }

	Organo* remover(eOrg::Organos o);

	string tostring() const;
	void   imprimir() const;

private:
	listaOrganos* Organos;
	Fecha* fallecimiento;
	Fecha* initAblacion;
};

#endif //_DONANTE_H