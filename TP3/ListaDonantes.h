#ifndef QUEUEDONANTES_H
#define QUEUEDONANTES_H

#include "ListaT.h"
#include "Donante.h"

class cColaDonantes : public cListaT<cDonante> {
    cColaDonantes();
    cColaDonantes(u_int tam = MAX, bool flag = false);

    friend ostream& operator<<(ostream& os, const cColaDonantes& d);
};

inline cColaDonantes::cColaDonantes() : cListaT() {  }

inline cColaDonantes::cColaDonantes(u_int tam, bool flag) : cListaT(tam, flag) {  }

inline ostream& operator<<(ostream& os, const cColaDonantes& d) {
    for (u_int i = 0; i < d.ca; i++) {
        if (d.List[i] != NULL)
            os << d.List[i]->tostring() << endl;
    }
}

#endif //QUEUEDONANTES_H