#include "listaT.h"

template<class T>
inline listaT<T>::listaT(u_int tam, bool flag) {
	try {
		this->List = new T*[tam];
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
inline listaT<T>::~listaT() {
	if (this->deletion)
		for (int i = 0; i < this->ct; i++)
			if (this->List[i] != NULL) delete this->List[i];

	delete[] this->List;
}

template<class T>
inline void listaT<T>::operator+(T* newNode) {
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
inline void listaT<T>::operator-(T* rmNode) {
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
inline T* listaT<T>::operator[](u_int findNode) {
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
inline T* listaT<T>::eliminar(u_int findNode) {
	try {
		if (this->List[findNode] == NULL) throw "Crear excepción";
	}
	catch (...) {
		cerr << "" << endl;
	}

	delete this->List[findNode];
}