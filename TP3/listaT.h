#ifndef LISTAT_H
#define LISTAT_H

#define MAX 10
#define BLK MAX

#include "customEx.h"

/*
* Documentación sobre template
* @see https://www.geeksforgeeks.org/templates-cpp/
* @see https://en.cppreference.com/w/cpp/language/templates
*/

template <class T>
class cListaT {
protected:
	T** List;
	u_int ct, ca;
	bool deletion;

	bool NoRepetido(T* Node);
	void resize();

public:
	/// <summary>
	/// Constructor de la clase Lista.
	/// </summary>
	/// <param name="tam">Tamaño de la Lista</param>
	/// <param name="flag">Flag de eliminación</param>
	cListaT(u_int tam = MAX, bool flag = false);
	~cListaT();

	/// <summary>
	/// Adición de nodos a la Lista.
	/// </summary>
	/// <param name="newNode">Nodo a añadir</param>
	/// <see cref="https://en.cppreference.com/w/cpp/language/operators"/>
	/// <seealso cref="https://www.programiz.com/cpp-programming/operator-overloading"/>
	void operator+(T* newNode);
	/// <summary>
	/// Busca el nodo que se desea quitar de la Lista.
	/// </summary>
	/// <param name="rmNode">Nodo que se desea quitar</param>
	/// <see cref="https://en.cppreference.com/w/cpp/language/operators"/>
	/// <seealso cref="https://www.programiz.com/cpp-programming/operator-overloading"/>
	void operator-(T* rmNode);
	/// <summary>
	/// Busca un nodo en la Lista.
	/// </summary>
	/// <param name="findNode">Posición del nodo</param>
	/// <returns>Puntero del nodo de interés</returns>
	/// <see cref="https://en.cppreference.com/w/cpp/language/operators"/>
	/// <seealso cref="https://www.programiz.com/cpp-programming/operator-overloading"/>
	T* operator[](u_int findNode);

	/// <summary>
	/// Adición de nodos al final de la Lista.
	/// </summary>
	/// <param name="d_">Nodo a añadir</param>
	void queue(T* d_);
	/// <summary>
	/// Quita el primer nodo de la Lista.
	/// </summary>
	/// <returns>Puntero del primer nodo</returns>
	T* dequeue();
	/// <summary>
	/// Elimina el nodo seleccionado de la Lista.
	/// </summary>
	/// <param name="findNode">Posición del nodo a eliminar</param>
	void eliminar(u_int findNode);
	/// <summary>
	/// Busca el nodo que se desea de la Lista.
	/// </summary>
	/// <param name="findNode">Posición del Nodo</param>
	/// <returns>Puntero del nodo de interés</returns>
	T* positionValue(u_int findNode);

	/// <summary>
	/// Cantidad actual de nodos en la Lista.
	/// </summary>
	/// <returns>Devuelve un unsigned int</returns>
	u_int getCA() const;
	/// <summary>
	/// Cantidad total de nodos en la Lista.
	/// </summary>
	/// <returns>Devuelve un unsigned int</returns>
	u_int getCT() const;
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
	
	if (this->deletion && this->ct > 0) {
		for (u_int i = 0; i < this->ct; i++) {
			if (this->List[i] != NULL) {
				delete this->List[i];
				this->List[i] = NULL;
			}
		}
	}

	if (this->List != NULL) {
		delete this->List;
		this->List = NULL;
	}
}

template<class T>
inline bool cListaT<T>::NoRepetido(T* Node) {
	for (u_int i = 0; i < this->ct; i++) {
		if (this->List[i] == Node) {
			throw rep_node();
			return true;
		}
	} return false;
}

template<class T>
inline void cListaT<T>::resize() {
	try {
		u_int newSize = this->ct + BLK;
		T** newList = new T * [newSize];

		memcpy(newList, this->List, sizeof(T*) * this->ct);

		delete[] this->List;
		this->List = newList;
		this->ct = newSize;
	}
	catch (bad_alloc& e) {
		cerr << e.what() << endl;
	}
}

template<class T>
inline void cListaT<T>::operator+(T* newNode) {
	try {
		if (newNode == NULL) throw null_node();

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
	T* Aux = NULL;
	u_int pos = 0;
	
	try {
		if (rmNode == NULL) throw null_node();
	}
	catch (null_node& e) {
		cerr << e.what() << endl;
	}

	for (u_int i = 0; i < this->ct - 1; i++)
		if (this->List[i] == rmNode) {
			pos = i;
			break;
		}
	
	for (u_int i = pos; this->List[i + 1] != NULL; i++)
		this->List[i] = this->List[i + 1];
		
	this->ca--;
}

template<class T>
inline T* cListaT<T>::operator[](u_int findNode) {
	T* retNode = NULL;
	try {
		retNode = this->List[findNode] == NULL ? throw null_node() : this->List[findNode];
	}
	catch (null_node& e) {
		cerr << e.what() << endl;
	}

	return retNode;
}

template<class T>
inline void cListaT<T>::queue(T* newNode) {
	if (newNode == NULL) throw null_node();

	if (this->ca >= this->ct)
		this->resize();

	if (this->ca < this->ct)
		this->List[this->ca++] = newNode;
}

template<class T>
inline T* cListaT<T>::dequeue() {
	try {
		if (this->ca == 0) throw empty_list();

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
inline void cListaT<T>::eliminar(u_int findNode) {
	try {
		if (this->List[findNode] == NULL) throw null_node();
	}
	catch (null_node& e) {
		cerr << e.what() << endl;
	}

	delete this->List[findNode];
	
	for(u_int i = findNode; i < this->ct - 1; i++)
		this->List[i] = this->List[i + 1];
}

template<class T>
inline T* cListaT<T>::positionValue(u_int findNode) {
	T* retNode = NULL;
	try {
		retNode = this->List[findNode] == NULL ? throw null_node() : this->List[findNode];
	}
	catch (null_node& e) {
		cerr << e.what() << endl;
	}

	return retNode;
}

template<class T>
inline u_int cListaT<T>::getCA() const { return this->ca; }

template<class T>
inline u_int cListaT<T>::getCT() const { return this->ct; }

#endif //LISTAT_H