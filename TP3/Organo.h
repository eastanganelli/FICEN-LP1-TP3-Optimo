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
	/// <param name="t">Enum del órgano</param>
	cOrgano(eOrg::Organos t);
	/// <summary>
	/// Constructor de la clase Organo.
	/// </summary>
	/// <param name="t">Enum del órgano</param>
	/// <param name="f">Fecha de ablación</param>
	cOrgano(eOrg::Organos t, cFecha* f);
	~cOrgano();

	/// <summary>
	/// Seteo de la fecha en la que el órgano fue ablado.
	/// </summary>
	/// <param name="f">Fecha de la ablación</param>
	void    setAblacion(cFecha* f);
	/// <summary>
	/// Se obtiene la fecha en la que el órgano fue ablado.
	/// </summary>
	/// <returns>Devuelve fecha de la ablación</returns>
	cFecha* getAblacion() const;
	/// <summary>
	/// Se obtiene el tipo de órgano.
	/// </summary>
	/// <returns>Devuelve el tipo de órgano</returns>
	eOrg::Organos getTipoOrg() const;
	
	string tostring() const;
	void   imprimir() const;
};
#endif //ORGANO_H