#ifndef ORGANOS_H 
#define ORGANOS_H

#include "global.h"

/*
*  ¿Qué es un Namespace?
* Un namespace es una agrupación de variables y funciones que se pueden
* utilizar en cualquier parte del programa.
*
* @see https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-170
* ---------------------------------------------------------------------
*
* Namespace Organos
*/

namespace eOrg {
	enum class Organos;

	static const string organos_str[] = {
		"CORAZON",
		"HIGADO",
		"PANCREAS",
		"HUESOS",
		"RINYON",
		"PULMONES",
		"INTESTINO",
		"PIEL",
		"CORNEAS"
	};

	string  getOrganoString(u_int i);
	Organos getOrganoEnum(u_int i);
}

enum class eOrg::Organos { CORAZON, HIGADO, PANCREAS, HUESOS, RINYON, PULMONES, INTESTINO, PIEL, CORNEAS };

/// <summary>
/// Convierte Enum a string
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve string</returns>
/// <see cref="https://www.delftstack.com/howto/cpp/how-to-convert-enum-to-string-cpp/#:~:text=)%3A%20Banana%20Pie-,Use%20Custom%20Defined%20Function%20to%20Convert%20an%20Enum%20to%20a,enum_str%20array%20inside%20the%20function"/>
inline string eOrg::getOrganoString(u_int i) {
	string tmp(eOrg::organos_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
/// <see cref="https://www.delftstack.com/howto/cpp/how-to-convert-enum-to-string-cpp/#:~:text=)%3A%20Banana%20Pie-,Use%20Custom%20Defined%20Function%20to%20Convert%20an%20Enum%20to%20a,enum_str%20array%20inside%20the%20function"/>
inline eOrg::Organos eOrg::getOrganoEnum(u_int i) {
	return static_cast<eOrg::Organos>(i);
}

#endif //ORGANOS_H