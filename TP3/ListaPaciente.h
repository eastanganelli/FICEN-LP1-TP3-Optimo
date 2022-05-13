#ifndef CLISTAPACIENTES_H
#define CLISTAPACIENTES_H

#include "ListaReceptores.h"

class cListaPacientes : public cListaT<cPaciente> {
public:
	cListaPacientes();
	cListaPacientes(u_int tam, bool flag);
};
#endif //CLISTAPACIENTES_H