#pragma once
#include "global.h"

#define MAX 10

template <class T>
class listaT {
	unsigned int ct, ca;
	bool deletion;
	T** List;

public:
	listaT(u_int tam = MAX, bool flag = false);
	~listaT();

	void operator+(T* newNode);
	void operator-(T* rmNode);
	T* operator[](u_int findNode);

	T* eliminar(u_int findNode);

	//string tostring() const;
	//friend void ostream << () const;
};