#ifndef CLISTACENTROSALUD_H
#define CLISTACENTROSALUD_H

#include "ListaT.h"
#include "CentroDeSalud.h"

class cListaCentroSalud : public cListaT<cCentroDeSalud> {
public:
	cListaCentroSalud();
	cListaCentroSalud(u_int tam = MAX, bool flag = false);
	~cListaCentroSalud();

	bool EstaListado(cCentroDeSalud* cs_);
};

inline cListaCentroSalud::cListaCentroSalud() : cListaT() { }

inline cListaCentroSalud::cListaCentroSalud(u_int tam, bool flag) : cListaT(tam, flag) { }

inline cListaCentroSalud::~cListaCentroSalud() { }

inline bool cListaCentroSalud::EstaListado(cCentroDeSalud* cs_) {
	return NoRepetido(cs_);
}

#endif // !CLISTACENTROSALUD_H