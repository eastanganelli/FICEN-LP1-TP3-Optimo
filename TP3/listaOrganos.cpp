#include "listaOrganos.h"

listaOrganos::listaOrganos() : listaT<Organo>(MAX, false) {
}

listaOrganos::listaOrganos(u_int tam, bool flag) : listaT<Organo>(tam, flag) {
}

Organo* listaOrganos::operator[](eOrg::Organos o) {
	for (int i = 0; i < this->ct; i++)
		if (this->List[i]->tipo == o)
			return this->List[i];

	return NULL;
}