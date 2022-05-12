#ifndef CLISTAT_H
#define CLISTAT_H

#include "global.h"

#define MAX 10

template <class T>
class cListaT {
protected:
	T** List;
	u_int ct, ca;
	bool deletion;

public:
	cListaT(u_int tam = MAX, bool flag = false);
	~cListaT();

	void operator+(T* newNode);
	void operator-(T* rmNode);
	T* operator[](u_int findNode);

	T* eliminar(u_int findNode);

	u_int getCA() const;
	u_int getCT() const;

	//string tostring() const;
};
#endif //CLISTAT_H