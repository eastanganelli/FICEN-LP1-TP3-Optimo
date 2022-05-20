/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#include "Paciente.h"

#ifndef DONANTE_H
#define DONANTE_H

class cDonante: public cPaciente {
public:
	cDonante(string dni, string n, string t, cFecha* nac, eGrupoSanguineo::Grupo g, eSexo::Sexo s, cCentroDeSalud* asc, cFecha* f);
	~cDonante() { }

	bool tieneOrgano(eOrg::Organos o) const;
	cOrgano* remover(eOrg::Organos o);

	void setListaOrganos(cListaOrganos* lst);
	cListaOrganos* getListaOrganos() const;

	string tostring() const;
	void   imprimir() const;

private:
	cListaOrganos* Organos;
	cFecha* fallecimiento;
	cFecha* initAblacion;
};

#endif //DONANTE_H