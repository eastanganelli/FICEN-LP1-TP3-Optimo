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

/// <summary>
/// Convierte Enum a string
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve string</returns>
inline string ePrio::getPrioridadString(u_int i) {
	string tmp(ePrio::prioridad_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
inline ePrio::Prioridad ePrio::getPrioridadEnum(u_int i) {
	return static_cast<ePrio::Prioridad>(i);
}

#endif //PRIORIDAD_H