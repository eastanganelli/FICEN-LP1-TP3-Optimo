/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _VEHICULOS_H
#define _VEHICULOS_H

class Vehiculos {
public: 
	
virtual string to_string() const;
virtual void imprimir() const;
private: 
	const string registro;
	const float tara;
};

#endif //_VEHICULOS_H