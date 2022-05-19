#ifndef CLISTARECEPTORES_H
#define CLISTARECEPTORES_H

#include "listaT.h"
#include "Receptor.h"
#include "Donante.h"

class cListaReceptores : public cListaT<cReceptor> {
public:
	cListaReceptores();
	cListaReceptores(u_int tam, bool flag);

	cListaReceptores* obtenerReceptoresCompatibles(cOrgano* d_org, cDonante* d);
    u_int posicionPaciente(cReceptor* r);

    friend ostream& operator<<(ostream& os, const cListaReceptores& r);
};

inline cListaReceptores::cListaReceptores() : cListaT() { }

inline cListaReceptores::cListaReceptores(u_int tam, bool flag) : cListaT(tam, flag) { }

inline cListaReceptores* cListaReceptores::obtenerReceptoresCompatibles(cOrgano* d_org, cDonante* d) {
    cListaReceptores* listR = NULL;
    try {
        listR = new cListaReceptores(this->ca, false);
    }
    catch (bad_alloc& e) {
        cerr << "Error al pedir Memoria" << e.what() << endl;
        return NULL;
    }

    for (u_int pp = 0; pp < 3; pp++) {
        for (u_int i = 0; i < this->ct; i++) {
            cReceptor* r = dynamic_cast<cReceptor*>(this->List[i]);
            if (r != NULL && r->getMiOrgano()->getTipoOrg() == d_org->getTipoOrg()
                && r->prioridad == ePrio::UIntToProiridad(pp) && r == dynamic_cast<cPaciente*>(d))
                (*listR) + r;
        }
    }
    return listR;
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

inline ostream& operator<<(ostream& os, const cListaReceptores& r) {
    for (u_int i = 0; i < r.ca; i++) {
        if(r.List[i] != NULL)
            os << r.List[i]->tostring() << endl;
    }
}

#endif //CLISTARECEPTORES