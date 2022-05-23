#ifndef GRUPOSANGUINEO_H
#define GRUPOSANGUINEO_H

#include "global.h"

namespace eGrupoSanguineo {
	enum class Grupo;

	static const string grupoSanguineo_str[] = {
		"A-",
		"A+",
		"B-",
		"B+",
		"AB-",
		"AB+",
		"0-",
		"0+"
	};

	string getGrupoString(u_int i);
	Grupo getGrupoEnum(u_int i);

	bool compatibilidad(Grupo d, Grupo r);
}

enum class eGrupoSanguineo::Grupo { A_MENOS, A_MAS, B_MENOS, B_MAS, AB_MENOS, AB_MAS, O_MENOS, O_MAS };

/// <summary>
/// Convierte Enum a string
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve string</returns>
inline string eGrupoSanguineo::getGrupoString(u_int i) {
	string tmp(eGrupoSanguineo::grupoSanguineo_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
inline eGrupoSanguineo::Grupo eGrupoSanguineo::getGrupoEnum(u_int i){
	return static_cast<eGrupoSanguineo::Grupo>(i);
}

/// <summary>
/// Verifica la compatibilidad Sanguinea.
/// </summary>
/// <param name="d">Grupo del Donante</param>
/// <param name="r">Grupo del Receptor</param>
/// <returns>
/// True: Compatibles
/// False: No Compatibles
/// </returns>
inline bool eGrupoSanguineo::compatibilidad(Grupo d, Grupo r) {
	if (d == r) return true;
	return false;
}

#endif //GRUPOSANGUINEO_H