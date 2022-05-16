#ifndef CLISTAPACIENTES_H
#define CLISTAPACIENTES_H

#include "ListaReceptores.h"

class cListaPacientes : public cListaT<cPaciente> {
public:
	cListaPacientes();
	cListaPacientes(u_int tam, bool flag);
};

inline cListaPacientes::cListaPacientes() : cListaT() { }

inline cListaPacientes::cListaPacientes(u_int tam, bool flag) : cListaT(tam, flag) { }

#endif //CLISTAPACIENTES_H