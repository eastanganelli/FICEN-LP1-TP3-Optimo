#ifndef LISTAORGANOS_H
#define LISTAORGANOS_H

#include "listaT.h"
#include "Organo.h"

class cListaOrganos : public cListaT<cOrgano> {
public:
	cListaOrganos();
	cListaOrganos(u_int tam, bool flag);

	/// <summary>
	/// Busca el órgano de interés usando el enum.
	/// </summary>
	/// <param name="o">Enum del tipo órgano</param>
	/// <returns>Puntero del tipo Organo</returns>
	cOrgano* operator[](eOrg::Organos o);

	/// <summary>
	/// Sobrecarga de Impresión
	/// </summary>
	/// <see cref="https://www.learncpp.com/cpp-tutorial/overloading-the-io-operators/"/>
	/// <seealso cref="https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170"/>
	friend ostream& operator<<(ostream& os, const cListaOrganos& out);
};

inline cListaOrganos::cListaOrganos() : cListaT() { }

inline cListaOrganos::cListaOrganos(u_int tam, bool flag) : cListaT(tam, flag) { }

inline cOrgano* cListaOrganos::operator[](eOrg::Organos o) {
	for (u_int i = 0; i < this->ct; i++)
		if (this->List[i]->tipo == o)
			return this->List[i];

	return NULL;
}

inline ostream& operator<<(ostream& os, const cListaOrganos& out) {
	os << "Listado de Organos" << endl
		<< "=====================" << endl;

	for (u_int i = 0; i < out.ca; i++) {
		if (out.List[i] != NULL)
			os << out.List[i]->tostring() << endl;
	}

	return os;
}

#endif //LISTAORGANOS_H