/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _EPRIORIDAD_H
#define _EPRIORIDAD_H
#include "global.h"

namespace ePrio {
	enum class Prioridad { ALTA, MEDIA, BAJA };

	string tostring(Prioridad i) {
		string o = "";
		switch (i) {
		case Prioridad::ALTA:
			o = "ALTA";
			break;
		case Prioridad::MEDIA:
			o = "MEDIA";
			break;
		case Prioridad::BAJA:
			o = "BAJA";
			break;
		} return o;
	}
}
#endif //_EPRIORIDAD_H