/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _FECHA_H
#define _FECHA_H

class Fecha {
public: 
	
/**
 * @param u_int
 * @param u_int
 * @param u_int
 */
void Fecha(void u_int, void u_int, void u_int);
	
/**
 * @param u_int
 * @param u_int
 * @param u_int
 * @param u_int
 * @param u_int
 */
void Fecha(void u_int, void u_int, void u_int, void u_int, void u_int);
	
/**
 * @param u_int
 * @param u_int
 * @param u_int
 * @param Hora*
 */
void Fecha(void u_int, void u_int, void u_int, void Hora*);
	
const string to_string();
	
const void imprimir();
private: 
	u_int d;
	u_int m;
	u_int y;
};

#endif //_FECHA_H