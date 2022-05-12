#pragma once
#include "Organo.h"
#include "listaT.h"

class listaOrganos : public listaT<Organo> {
public:
	listaOrganos();
	listaOrganos(u_int tam = MAX, bool flag = false);

	Organo* operator[](eOrg::Organos o);

};