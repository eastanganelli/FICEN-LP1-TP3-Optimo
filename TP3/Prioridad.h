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

	Prioridad UintToEnum(u_int i);
}

enum class ePrio::Prioridad { ALTA, MEDIA, BAJA };

inline string ePrio::convertPrioridadString(Prioridad i) {
	switch (i) {
	case Prioridad::ALTA:
		return "ALTA";
	case Prioridad::MEDIA:
		return "MEDIA";
	}

	return "BAJA";
}

inline ePrio::Prioridad ePrio::UintToEnum(u_int i) {
	switch (i) {
	case 0:
		return Prioridad::ALTA;
	case 1:
		return Prioridad::MEDIA;
	}

	return Prioridad::BAJA;
}

#endif //EPRIORIDAD_H