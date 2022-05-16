#ifndef QUEUEDONANTES_H
#define QUEUEDONANTES_H

#include "ListaT.h"
#include "Donante.h"

class cColaDonantes : public cListaT<cDonante> {
public:
	cColaDonantes();
	cColaDonantes(u_int tam, bool flag);

	void queue(cDonante* d_);
	cDonante* dequeue();
};

inline cColaDonantes::cColaDonantes() : cListaT<cDonante>() { }

inline cColaDonantes::cColaDonantes(u_int tam, bool flag) : cListaT<cDonante>(tam, flag) { }

inline void cColaDonantes::queue(cDonante* newNode) {
	try {
		if (newNode == NULL) throw new null_node();

		if (this->ca == this->ct)
			this->resize();

		if (this->ca < this->ct) 
			this->List[ca] = newNode;
	}
	catch (null_node& e) {
		cerr << e.what() << endl;
	}
}

inline cDonante* cColaDonantes::dequeue() {
	cDonante* retDonante = NULL;

	try {
		if (this->ca == 0) throw new empty_list();

		retDonante = this->List[0];

		for (u_int i = 0; this->List[i + 1] != NULL; i++)
			this->List[i] = this->List[i + 1];
	}
	catch (empty_list& e) {
		cerr << e.what() << endl;
	}

	return retDonante;
}

#endif //QUEUEDONANTES_H