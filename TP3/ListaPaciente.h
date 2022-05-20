#ifndef LISTAPACIENTES_H
#define LISTAPACIENTES_H

#include "ListaT.h"
#include "Paciente.h"

class cListaPacientes : public cListaT<cPaciente> {
public:
	cListaPacientes();
	cListaPacientes(u_int tam, bool flag);

};

inline cListaPacientes::cListaPacientes() : cListaT() { }

inline cListaPacientes::cListaPacientes(u_int tam, bool flag) : cListaT(tam, flag) { }

#endif //LISTAPACIENTES_H