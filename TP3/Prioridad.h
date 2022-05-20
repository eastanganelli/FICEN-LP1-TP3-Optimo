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

	static const string prioridad_str[] = {
		"NON"
		"ALTA",
		"MEDIA",
		"BAJA"
	};

	string getPrioridadString(u_int i);

	Prioridad getPrioridadEnum(u_int i);
}

enum class ePrio::Prioridad { NON, ALTA, MEDIA, BAJA };

inline string ePrio::getPrioridadString(u_int i) {
	string tmp(ePrio::prioridad_str[i]);
	return tmp;
}

inline ePrio::Prioridad ePrio::getPrioridadEnum(u_int i) {
	return static_cast<ePrio::Prioridad>(i);
}

#endif //EPRIORIDAD_H