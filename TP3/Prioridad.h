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

	Prioridad UIntToProiridad(u_int i);
}

enum class ePrio::Prioridad { NON, ALTA, MEDIA, BAJA };

inline string ePrio::convertPrioridadString(Prioridad i) {
	switch (i) {
	case Prioridad::ALTA:
		return "ALTA";
	case Prioridad::MEDIA:
		return "MEDIA";
	case Prioridad::BAJA:
		return "BAJA";
	}

	return "No Prioridad";
}

inline ePrio::Prioridad ePrio::UIntToProiridad(u_int i) {
	switch (i) {
	case 0:
		return Prioridad::ALTA;
	case 1:
		return Prioridad::MEDIA;
	case 2:
		return Prioridad::BAJA;
	}

	return Prioridad::NON;
}

#endif //EPRIORIDAD_H