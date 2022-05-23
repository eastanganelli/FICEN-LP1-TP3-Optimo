#ifndef SEXO_H
#define SEXO_H

#include "global.h"

/*
*  ¿Qué es un Namespace?
* Un namespace es una agrupación de variables y funciones que se pueden
* utilizar en cualquier parte del programa.
*
* @see https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-170
* ---------------------------------------------------------------------
*
* Namespace Sexo
*/

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
/// <see cref="https://www.delftstack.com/howto/cpp/how-to-convert-enum-to-string-cpp/#:~:text=)%3A%20Banana%20Pie-,Use%20Custom%20Defined%20Function%20to%20Convert%20an%20Enum%20to%20a,enum_str%20array%20inside%20the%20function"/>
inline string eSexo::getSexoString(u_int i) {
	string tmp(eSexo::sexo_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
/// <see cref="https://www.delftstack.com/howto/cpp/how-to-convert-enum-to-string-cpp/#:~:text=)%3A%20Banana%20Pie-,Use%20Custom%20Defined%20Function%20to%20Convert%20an%20Enum%20to%20a,enum_str%20array%20inside%20the%20function"/>
inline eSexo::Sexo eSexo::getSexoEnum(u_int i) {
	return static_cast<eSexo::Sexo>(i);
}

#endif //SEXO_H