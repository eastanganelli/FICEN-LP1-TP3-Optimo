#ifndef CLISTACENTROSALUD_H
#define CLISTACENTROSALUD_H

#include "ListaT.h"
#include "CentroDeSalud.h"

class cListaCentroSalud : public cListaT<cCentroDeSalud> {
public:
	cListaCentroSalud();
	cListaCentroSalud(u_int tam = MAX, bool flag = false);
	~cListaCentroSalud();

};

inline cListaCentroSalud::cListaCentroSalud() : cListaT() { }

inline cListaCentroSalud::cListaCentroSalud(u_int tam, bool flag) : cListaT(tam, flag) { }

inline cListaCentroSalud::~cListaCentroSalud() { }

#endif // !CLISTACENTROSALUD_H