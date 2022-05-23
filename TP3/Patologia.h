#ifndef PATOLOGIA_H
#define PATOLOGIA_H

#include "global.h"  

namespace ePato {
	enum class Patologia;

	static const string patologia_str[] = {
		"Sin patologia",
		"Fibrosis Quistica",
		"Insuficiencia Renal",
		"Insuficiencia Cardiaca",
		"Hepatitis",
		"Necrosis",
		"Inmunosuprimido"
	};
			
	string getPatologiaString(u_int i);
	Patologia getPatologiaEnum(u_int i);
}

enum class ePato::Patologia { NON, FQ, IR, IC, HEP, NEC, INMO };

/// <summary>
/// Convierte Enum a string
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve string</returns>
inline string ePato::getPatologiaString(u_int i) {
	string tmp(ePato::patologia_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
inline ePato::Patologia ePato::getPatologiaEnum(u_int i){
	return static_cast<ePato::Patologia>(i);
}

#endif //PATOLOGIA_H