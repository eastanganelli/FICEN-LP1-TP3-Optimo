#ifndef QUEUEDONANTES_H
#define QUEUEDONANTES_H

#include "ListaT.h"
#include "Donante.h"

class cColaDonantes : public cListaT<cDonante> {
public:
	cColaDonantes();
	cColaDonantes(u_int tam, bool flag);

	void queue()   { }
	void dequeue() { };
};

#endif //QUEUEDONANTES_H