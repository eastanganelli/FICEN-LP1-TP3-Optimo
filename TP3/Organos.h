#ifndef ORGANOS_H 
#define ORGANOS_H

#include "global.h"

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
inline string eOrg::getOrganoString(u_int i) {
	string tmp(eOrg::organos_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
inline eOrg::Organos eOrg::getOrganoEnum(u_int i) {
	return static_cast<eOrg::Organos>(i);
}

#endif //ORGANOS_H