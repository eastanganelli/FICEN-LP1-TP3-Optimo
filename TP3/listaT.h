#ifndef CLISTAT_H
#define CLISTAT_H

#define MAX 10

#include "global.h"

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

template<class T>
inline cListaT<T>::cListaT(u_int tam, bool flag) {
	try {
		this->List = new T * [tam];
	}
	catch (bad_alloc& ex) {
		cerr << "Error al crear la lista" << ex.what() << endl;
	}

	this->ct = tam;
	this->ca = 0;

	for (int i = 0; i < this->ct; i++)
		List[i] = NULL;
}

template<class T>
inline cListaT<T>::~cListaT() {
	if (this->deletion)
		for (int i = 0; i < this->ct; i++)
			if (this->List[i] != NULL) delete this->List[i];

	delete[] this->List;
}

template<class T>
inline void cListaT<T>::operator+(T* newNode) {
	try {
		if (newNode == NULL) throw "Crear excepción";
	}
	catch (...) {
		cerr << "" << endl;
	}
	for (int i = 0; i < this->ct; i++)
		if (this->List[i] == NULL) {
			this->List[i] = newNode;
			this->ca++;
		}
}

template<class T>
inline void cListaT<T>::operator-(T* rmNode) {
	try {
		if (rmNode == NULL) throw "Crear excepción";
	}
	catch (...) {
		cerr << "" << endl;
	}
	for (int i = 0; i < this->ct; i++)
		if (this->List[i] == rmNode) {
			this->List[i] = NULL;
			this->ca--;
		}
}

template<class T>
inline T* cListaT<T>::operator[](u_int findNode) {
	T* retNode = NULL;
	try {
		retNode = findNode == NULL ? throw "Crear excepción" : this->List[findNode];
	}
	catch (...) {
		cerr << "" << endl;
	}

	return retNode;
}

template<class T>
inline T* cListaT<T>::eliminar(u_int findNode) {
	try {
		if (this->List[findNode] == NULL) throw "Crear excepción";
	}
	catch (...) {
		cerr << "" << endl;
	}

	delete this->List[findNode];
}

template<class T>
inline u_int cListaT<T>::getCA() const { return this->ca; }

template<class T>
inline u_int cListaT<T>::getCT() const { return this->ct; }