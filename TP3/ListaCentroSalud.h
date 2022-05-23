#ifndef LISTACENTROSALUD_H
#define LISTACENTROSALUD_H

#include "ListaT.h"
#include "CentroDeSalud.h"

class cListaCentroSalud : public cListaT<cCentroDeSalud> {
public:
	cListaCentroSalud();
	cListaCentroSalud(u_int tam = MAX, bool flag = false);

	/// <summary>
	/// Verifica si el Centro de Salud se encuentra en la Lista.
	/// </summary>
	/// <param name="cs_">Centro Salud a verificar</param>
	/// <returns>
	/// True: Se encuentra
	/// False: No se encuentra
	/// </returns>
	bool EstaListado(cCentroDeSalud* cs_);

	friend ostream& operator<<(ostream& os, const cListaCentroSalud& out);
};

inline cListaCentroSalud::cListaCentroSalud() : cListaT() { }

inline cListaCentroSalud::cListaCentroSalud(u_int tam, bool flag) : cListaT(tam, flag) { }

inline bool cListaCentroSalud::EstaListado(cCentroDeSalud* cs_) {
	return NoRepetido(cs_);
}

inline ostream& operator<<(ostream& os, const cListaCentroSalud& out) {
	for (u_int i = 0; i < out.ca; i++) {
		if (out.List[i] != NULL)
			os << out.List[i]->tostring() << endl;
	}

	return os;
}

#endif //LISTACENTROSALUD_H