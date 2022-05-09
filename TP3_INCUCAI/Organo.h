/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _ORGANO_H
#define _ORGANO_H

#include "eOrganos.h"
#include "Fecha.h"

class Organo {
public:
	Organo(eOrganos);
	Organo(eOrganos, Fecha);
	~Organo();
	
private: 
	eOrganos tipo;
	Fecha ablacion;
};
#endif //_ORGANO_H