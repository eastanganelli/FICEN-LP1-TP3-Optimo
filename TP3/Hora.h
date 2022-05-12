/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#ifndef HORA_H
#define HORA_H

#include <ctime>
#include "global.h"

class Hora {
public: 
	/**
	 * @param u_int
	 * @param u_int
	 */
	Hora(u_int, u_int);
	~Hora() { }
	string tostring() const;	
	void imprimir()   const;

private: 
	u_int hh;
	u_int mm;
};

#endif //HORA_H