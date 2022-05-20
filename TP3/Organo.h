/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef ORGANO_H
#define ORGANO_H

#define CANT_ORGANOS 9

#include "Organos.h"
#include "Fecha.h"

class cOrgano {
public:
	friend class cListaOrganos;

	cOrgano(eOrg::Organos t);
	cOrgano(eOrg::Organos t, cFecha* f);
	~cOrgano();

	void    setAblacion(cFecha* f);
	cFecha* getAblacion() const;
	eOrg::Organos getTipoOrg() const;
	
	string tostring() const;
	void   imprimir() const;

private: 
	eOrg::Organos tipo;
	cFecha* ablacion;
};
#endif //ORGANO_H