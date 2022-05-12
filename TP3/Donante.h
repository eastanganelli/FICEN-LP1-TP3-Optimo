/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CDONANTE_H
#define CDONANTE_H

#include "Paciente.h"

class cDonante: public cPaciente {
public:
	cDonante(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc, cFecha* f);
	~cDonante() { }

	cOrgano* remover(eOrg::Organos o);

	string tostring() const;
	void   imprimir() const;

private:
	cListaOrganos* Organos;
	cFecha* fallecimiento;
	cFecha* initAblacion;
};

#endif //DONANTE_H