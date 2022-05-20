#ifndef CLISTAORGANOS_H
#define CLISTAORGANOS_H

#include "listaT.h"
#include "Organo.h"

class cListaOrganos : public cListaT<cOrgano> {
public:
	cListaOrganos();
	cListaOrganos(u_int tam, bool flag);

	cOrgano* operator[](eOrg::Organos o);

};

inline cListaOrganos::cListaOrganos() : cListaT() { }

inline cListaOrganos::cListaOrganos(u_int tam, bool flag) : cListaT(tam, flag) { }

inline cOrgano* cListaOrganos::operator[](eOrg::Organos o) {
	for (u_int i = 0; i < this->ct; i++)
		if (this->List[i]->tipo == o)
			return this->List[i];

	return NULL;
}

#endif //CLISTAORGANOS_H