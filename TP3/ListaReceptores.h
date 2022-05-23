#ifndef LISTARECEPTORES_H
#define LISTARECEPTORES_H

#include "listaT.h"
#include "Receptor.h"
#include "Donante.h"

class cListaReceptores : public cListaT<cReceptor> {
public:
	cListaReceptores();
	cListaReceptores(u_int tam, bool flag);

	/// <summary>
	/// Busca los posible receptores compatibles con el Donante.
	/// </summary>
	/// <param name="d_org">Organo a filtrar</param>
	/// <param name="d">Donante</param>
	/// <returns>Lista de Receptores compatibles</returns>
	cListaReceptores* obtenerReceptoresCompatibles(cOrgano* d_org, cDonante* d);
    /// <summary>
    /// Busca la posición del receptor en la lista.
    /// </summary>
    /// <param name="r">Puntero del paciente de interés</param>
    /// <returns>Devuelve posición en lista</returns>
    u_int posicionPaciente(cReceptor* r);

    /// <summary>
    /// Sobrecarga de Impresión
    /// </summary>
    /// <see cref="https://www.learncpp.com/cpp-tutorial/overloading-the-io-operators/"/>
    /// <seealso cref="https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170"/>
    friend ostream& operator<<(ostream& os, const cListaReceptores& out);
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
        for (u_int i = 0; i < this->ca; i++) {
            cReceptor* r = dynamic_cast<cReceptor*>(this->List[i]);
            if (r != NULL && r->getMiOrgano()->getTipoOrg() == d_org->getTipoOrg() && r->prioridad == ePrio::getPrioridadEnum(pp) && r == dynamic_cast<cPaciente*>(d))
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

inline ostream& operator<<(ostream& os, const cListaReceptores& out) {
	os << "Listado de Receptores" << endl
        << "=====================" << endl;
	
    for (u_int i = 0; i < out.ca; i++) {
        if(out.List[i] != NULL)
            os << out.List[i]->tostring() << endl;
    }

    return os;
}

#endif //LISTARECEPTORES_H