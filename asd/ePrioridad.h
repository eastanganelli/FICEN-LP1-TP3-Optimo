/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _EPRIORIDAD_H
#define _EPRIORIDAD_H
#include "global.h"

namespace Prioridad {
	enum class ePrio { ALTA, MEDIA, BAJA };

	string tostring(ePrio i) {
		string o = "";
		switch (i) {
		case ePrio::ALTA:
			o = "ALTA";
			break;
		case ePrio::MEDIA:
			o = "MEDIA";
			break;
		case ePrio::BAJA:
			o = "BAJA";
			break;
		} return o;
	}
}
#endif //_EPRIORIDAD_H