#include "ListaOrganos.h"

cListaOrganos::cListaOrganos() : cListaT<cOrgano>() { }

cListaOrganos::cListaOrganos(u_int tam, bool flag) : cListaT<cOrgano>(tam, flag) {
}

cOrgano* cListaOrganos::operator[](eOrg::Organos o) {
	for (int i = 0; i < this->ct; i++)
		if (this->List[i]->tipo == o)
			return this->List[i];

	return NULL;
}