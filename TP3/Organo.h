#ifndef ORGANO_H
#define ORGANO_H

#define CANT_ORGANOS 9

#include "Organos.h"
#include "Fecha.h"

class cOrgano {
	eOrg::Organos tipo;
	cFecha* ablacion;
	
public:
	friend class cListaOrganos;

	/// <summary>
	/// Constructor de la clase Organo.
	/// </summary>
	/// <param name="t">Enum del �rgano</param>
	cOrgano(eOrg::Organos t);
	/// <summary>
	/// Constructor de la clase Organo.
	/// </summary>
	/// <param name="t">Enum del �rgano</param>
	/// <param name="f">Fecha de ablaci�n</param>
	cOrgano(eOrg::Organos t, cFecha* f);
	~cOrgano();

	/// <summary>
	/// Seteo de la fecha en la que el �rgano fue ablado.
	/// </summary>
	/// <param name="f">Fecha de la ablaci�n</param>
	void    setAblacion(cFecha* f);
	/// <summary>
	/// Se obtiene la fecha en la que el �rgano fue ablado.
	/// </summary>
	/// <returns>Devuelve fecha de la ablaci�n</returns>
	cFecha* getAblacion() const;
	/// <summary>
	/// Se obtiene el tipo de �rgano.
	/// </summary>
	/// <returns>Devuelve el tipo de �rgano</returns>
	eOrg::Organos getTipoOrg() const;
	
	string tostring() const;
	void   imprimir() const;
};
#endif //ORGANO_H