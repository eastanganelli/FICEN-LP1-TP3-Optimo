/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _HORA_H
#define _HORA_H

class Hora {
public: 
	
/**
 * @param u_int
 * @param u_int
 */
void Hora(void u_int, void u_int);
	
const string to_string();
	
const void imprimir();
private: 
	u_int hh;
	u_int mm;
};

#endif //_HORA_H