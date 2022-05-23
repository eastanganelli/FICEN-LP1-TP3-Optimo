#ifndef LISTADONANTES_H
#define LISTADONANTES_H

#include "ListaT.h"
#include "Donante.h"

class cListaDonantes : public cListaT<cDonante> {
public:
    cListaDonantes();
    cListaDonantes(u_int tam, bool flag);

    /// <summary>
    /// Sobrecarga de Impresi�n
    /// </summary>
    /// <see cref="https://www.learncpp.com/cpp-tutorial/overloading-the-io-operators/"/>
    /// <seealso cref="https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170"/>
    friend ostream& operator<<(ostream& os, const cListaDonantes& out);
};

inline cListaDonantes::cListaDonantes() : cListaT() {  }

inline cListaDonantes::cListaDonantes(u_int tam, bool flag) : cListaT(tam, flag) {  }

inline ostream& operator<<(ostream& os, const cListaDonantes& out) {
    os << "Listado de Donantes" << endl
        << "=====================" << endl;

    if (out.ca > 0) {
        for (u_int i = 0; i < out.ca; i++) {
            if (out.List[i] != NULL)
                os << out.List[i]->tostring() << endl;
        }
    } else
		os << "No hay donantes en la lista" << endl;
	
    return os;
}

#endif //LISTADONANTES_H