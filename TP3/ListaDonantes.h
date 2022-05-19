#ifndef LISTADONANTES_H
#define LISTADONANTES_H

#include "ListaT.h"
#include "Donante.h"

class cListaDonantes : public cListaT<cDonante> {
public:
    cListaDonantes();
    cListaDonantes(u_int tam, bool flag);

    friend ostream& operator<<(ostream& os, const cListaDonantes& d);
};

inline cListaDonantes::cListaDonantes() : cListaT() {  }

inline cListaDonantes::cListaDonantes(u_int tam, bool flag) : cListaT(tam, flag) {  }

inline ostream& operator<<(ostream& os, const cListaDonantes& d) {
    for (u_int i = 0; i < d.ca; i++) {
        if (d.List[i] != NULL)
            os << d.List[i]->tostring() << endl;
    }
}

#endif //LISTADONANTES_H