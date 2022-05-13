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
#endif //CLISTAORGANOS_H