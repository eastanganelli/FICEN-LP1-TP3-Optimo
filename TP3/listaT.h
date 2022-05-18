#define MAX 10
#define BLK MAX

#ifndef CLISTAT_H
#define CLISTAT_H

#include "global.h"
#include "customEx.h"

template <class T>
class cListaT {
protected:
	T** List;
	u_int ct, ca;
	bool deletion;

	bool NoRepetido(T* Node);
	void resize();

public:
	cListaT(u_int tam = MAX, bool flag = false);
	~cListaT();

	void operator+(T* newNode);
	void operator-(T* rmNode);
	T* operator[](u_int findNode);

	void queue(T* d_);
	T* dequeue();
	T* eliminar(u_int findNode);

	u_int getCA() const;
	u_int getCT() const;

	//string tostring() const;
};

template<class T>
inline cListaT<T>::cListaT(u_int tam, bool flag) {
	try {
		this->List = new T * [tam];
	}
	catch (bad_alloc& ex) {
		cerr << "Error al crear la lista" << ex.what() << endl;
	}
	this->deletion = flag;
	this->ct = tam;
	this->ca = 0;

	for (u_int i = 0; i < this->ct; i++)
		List[i] = NULL;
}

template<class T>
inline cListaT<T>::~cListaT() {
	if (this->deletion)
		for (u_int i = 0; i < this->ct; i++)
			if (this->List[i] != NULL) delete this->List[i];

	delete[] this->List;
}

template<class T>
inline bool cListaT<T>::NoRepetido(T* Node) {
	for (u_int i = 0; i < this->ct; i++) {
		if (this->List[i] == Node) {
			throw new rep_node();
			return true;
		}
	} return false;
}

template<class T>
inline void cListaT<T>::resize() {
	try {
		u_int newSize = this->ct + BLK;
		T** newList = new T * [newSize];

		for (u_int i = 0; i < this->ct; i++)
			newList[i] = List[i];

		delete[] this->List;

		this->List = newList;
	}
	catch (bad_alloc& e) {
		cerr << e.what() << endl;
	}
}

template<class T>
inline void cListaT<T>::operator+(T* newNode) {
	try {
		if (newNode == NULL) throw new null_node();

		if (!NoRepetido(newNode))
			this->queue(newNode);
	}
	catch (null_node& e) {
		cerr << e.what() << endl;
	}
	catch (rep_node& e) {
		cerr << e.what() << endl;
	}
}

template<class T>
inline void cListaT<T>::operator-(T* rmNode) {
	try {
		if (rmNode == NULL) throw new null_node();
	}
	catch (null_node& e) {
		cerr << e.what() << endl;
	}
	for (u_int i = 0; i < this->ct; i++)
		if (this->List[i] == rmNode) {
			this->List[i] = NULL;
			this->ca--;
		}
}

template<class T>
inline T* cListaT<T>::operator[](u_int findNode) {
	T* retNode = NULL;
	try {
		retNode = findNode == NULL ? throw new null_node() : this->List[findNode];
	}
	catch (null_node& e) {
		cerr << e.what() << endl;
	}

	return retNode;
}

template<class T>
inline void cListaT<T>::queue(T* newNode) {
	if (newNode == NULL) throw new null_node();

	if (this->ca == this->ct)
		this->resize();

	if (this->ca < this->ct)
		this->List[this->ca++] = newNode;
}

template<class T>
inline T* cListaT<T>::dequeue() {
	try {
		if (this->ca == 0) throw new empty_list();

		T* ret = this->List[0];
		this->ca--;

		for (u_int i = 0; this->List[i + 1] != NULL; i++)
			this->List[i] = this->List[i + 1];

		return ret;
	}
	catch (empty_list& e) {
		cerr << e.what() << endl;
	}
	
	return NULL;
}

template<class T>
inline T* cListaT<T>::eliminar(u_int findNode) {
	try {
		if (this->List[findNode] == NULL) throw new null_node();
	}
	catch (null_node& e) {
		cerr << e.what() << endl;
	}

	delete this->List[findNode];
}

template<class T>
inline u_int cListaT<T>::getCA() const { return this->ca; }

template<class T>
inline u_int cListaT<T>::getCT() const { return this->ct; }

#endif //CLISTAT_H