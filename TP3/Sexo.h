#ifndef SEXO_H
#define SEXO_H

#include "global.h"

namespace eSexo {
	enum class Sexo;

	static const string sexo_str[] = {
		"Femenino",
		"Masculino",
		"No definido",
		"0"
	};

	string getSexoString(u_int i);
	Sexo   getSexoEnum(u_int i);
}

enum class eSexo::Sexo { F, M, ND, O };

/// <summary>
/// Convierte Enum a string
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve string</returns>
inline string eSexo::getSexoString(u_int i) {
	string tmp(eSexo::sexo_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
inline eSexo::Sexo eSexo::getSexoEnum(u_int i) {
	return static_cast<eSexo::Sexo>(i);
}

#endif //SEXO_H