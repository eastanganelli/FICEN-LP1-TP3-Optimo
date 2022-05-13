#ifndef CLISTARECEPTORES_H
#define CLISTARECEPTORES_H

#include "listaT.h"
#include "Receptor.h"

class cListaReceptores : public cListaT<cReceptor> {
public:
	cListaReceptores();
	cListaReceptores(u_int tam, bool flag);

	cListaReceptores* obtenerReceptoresCompatibles(cOrgano& d_org);
};
#endif //CLISTARECEPTORES