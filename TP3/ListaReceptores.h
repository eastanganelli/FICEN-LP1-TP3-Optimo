#ifndef CLISTARECEPTORES_H
#define CLISTARECEPTORES_H

#include "listaT.h"
#include "Receptor.h"

class cListaReceptores : public cListaT<cReceptor> {
public:
	cListaReceptores();
	cListaReceptores(u_int tam, bool flag);

	cListaReceptores* obtenerReceptoresCompatibles(cOrgano& d_org);
    u_int posicionPaciente(cReceptor* r);
};

inline cListaReceptores::cListaReceptores() : cListaT() { }

inline cListaReceptores::cListaReceptores(u_int tam, bool flag) : cListaT(tam, flag) { }

inline cListaReceptores* cListaReceptores::obtenerReceptoresCompatibles(cOrgano& d_org) {
    cListaReceptores* listR = NULL;
    try {
        listR = new cListaReceptores();
    }
    catch (bad_alloc& e) {
        cerr << "Error al pedir Memoria" << e.what() << endl;
        return listR;
    }

    for (u_int i = 0; i < this->ct; i++) {
        cReceptor* r = dynamic_cast<cReceptor*>(this->List[i]);
        if (r != NULL && r->getMiOrgano()->getTipoOrg() == d_org.getTipoOrg()) (*listR) + r;
    }   return listR;
}

inline u_int cListaReceptores::posicionPaciente(cReceptor* r) {
    for (u_int i = 0; i < this->ct; i++) {
        if (this->List[i] == r) {
            return i + 1;
            break;
        }
    }
    throw new out_list();
}

#endif //CLISTARECEPTORES