#ifndef PATOLOGIA_H
#define PATOLOGIA_H

#include "global.h"  

/*
*  ¿Qué es un Namespace?
* Un namespace es una agrupación de variables y funciones que se pueden
* utilizar en cualquier parte del programa.
*
* @see https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-170
* ---------------------------------------------------------------------
*
* Namespace Patologia
*/

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
/// <see cref="https://www.delftstack.com/howto/cpp/how-to-convert-enum-to-string-cpp/#:~:text=)%3A%20Banana%20Pie-,Use%20Custom%20Defined%20Function%20to%20Convert%20an%20Enum%20to%20a,enum_str%20array%20inside%20the%20function"/>
inline string ePato::getPatologiaString(u_int i) {
	string tmp(ePato::patologia_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
/// <see cref="https://www.delftstack.com/howto/cpp/how-to-convert-enum-to-string-cpp/#:~:text=)%3A%20Banana%20Pie-,Use%20Custom%20Defined%20Function%20to%20Convert%20an%20Enum%20to%20a,enum_str%20array%20inside%20the%20function"/>
inline ePato::Patologia ePato::getPatologiaEnum(u_int i){
	return static_cast<ePato::Patologia>(i);
}

#endif //PATOLOGIA_H