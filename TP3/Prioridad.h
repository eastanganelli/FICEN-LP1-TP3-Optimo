/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef PRIORIDAD_H
#define PRIORIDAD_H

#include "global.h"

namespace ePrio {
	enum class Prioridad;

	string convertPrioridadString(Prioridad i);
}

enum class ePrio::Prioridad { ALTA, MEDIA, BAJA };

inline string ePrio::convertPrioridadString(Prioridad i) {
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

#endif //EPRIORIDAD_H