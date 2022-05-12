/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CORGANO_H
#define CORGANO_H

#include "eOrganos.h"
#include "Fecha.h"

class cOrgano {
public:
	friend class cListaOrganos;
	cOrgano(eOrg::Organos t);
	cOrgano(eOrg::Organos t, cFecha* f);
	~cOrgano();

	void    setAblacion(cFecha* f);
	cFecha* getAblacion() const;
	
	string tostring() const;
	void   imprimir() const;

private: 
	eOrg::Organos tipo;
	cFecha* ablacion;
};
#endif //ORGANO_H