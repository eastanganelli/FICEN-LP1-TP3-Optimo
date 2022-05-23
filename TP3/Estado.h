#ifndef ESTADO_H
#define ESTADO_H

#include "global.h"

/*
* Espacio del Estado del Paciente
*/

namespace eEst {
	enum class Estado;

	static const string estados_str[] = {
		"Estable",
		"Inestable",
		"Alta"
	};

	string getEstadoString(u_int i);
	Estado getEstadoEnum(u_int i);
}

enum class eEst::Estado { Estable, Inestable, Alta };

/// <summary>
/// Convierte Enum a string
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve string</returns>
inline string eEst::getEstadoString(u_int i) {
	string tmp(eEst::estados_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
inline eEst::Estado eEst::getEstadoEnum(u_int i) {
	return static_cast<eEst::Estado>(i);
}

#endif //ESTADO_H