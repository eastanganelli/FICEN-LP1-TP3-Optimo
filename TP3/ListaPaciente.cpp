#include "ListaPaciente.h"

cListaPacientes::cListaPacientes() : cListaT<cPaciente>() {

}

cListaPacientes::cListaPacientes(u_int tam, bool flag) : cListaT<cPaciente>(tam, flag) {

}