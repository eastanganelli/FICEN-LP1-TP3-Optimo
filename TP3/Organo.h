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
	friend class listaOrganos;
	Organo(eOrg::Organos t);
	Organo(eOrg::Organos t, Fecha* f);
	~Organo();

	void   setAblacion(Fecha* f);
	Fecha* getAblacion() const;
	
	string tostring() const;
	void   imprimir() const;

private: 
	eOrg::Organos tipo;
	Fecha* ablacion;
};
#endif //_ORGANO_H