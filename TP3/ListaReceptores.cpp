#include "ListaReceptores.h"

cListaReceptores::cListaReceptores() : cListaT<cReceptor>() { }

cListaReceptores::cListaReceptores(u_int tam, bool flag) : cListaT<cReceptor>(tam, flag) { }

cListaReceptores* cListaReceptores::obtenerReceptoresCompatibles(cOrgano& d_org) {
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