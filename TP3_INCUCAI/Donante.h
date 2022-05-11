/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _DONANTE_H
#define _DONANTE_H

#include "Receptor.h"
#include "listaT.h"

class Receptor;
class Donante: public Paciente {
public:
	Donante(string dni, string n, string t, Fecha* nac, GrupoSanguineo::eGrupoSanguineo g, Sexo::eSexo s, CentroDeSalud* asc, Fecha* f);
	~Donante() { }

	Organo* remover(Organos::eOrg o);

	string tostring() const;
	void   imprimir() const;

private:
	listaT<Organo*> Organos;
	Fecha* fallecimiento;
	Fecha* initAblacion;
};

#endif //_DONANTE_H