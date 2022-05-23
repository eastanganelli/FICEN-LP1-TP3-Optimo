#ifndef PROVINCIA_H
#define PROVINCIA_H

#define CantProvincias 23

#include "global.h"

/*
*  ¿Qué es un Namespace?
* Un namespace es una agrupación de variables y funciones que se pueden
* utilizar en cualquier parte del programa.
*
* @see https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-170
* ---------------------------------------------------------------------
*
* Namespace Provincia
*/

namespace eProv {
	enum class Provincias;

	static const string provincias_str[] = {
		"Ciudad Autónoma de Buenos Aires",
		"Buenos Aires",
		"Catamarca",
		"Chaco",
		"Chubut",
		"Cordoba",
		"Corrientes",
		"Entre Rios",
		"Formosa",
		"Jujuy",
		"La Pampa",
		"La Rioja",
		"Mendoza",
		"Misiones",
		"Neuquen",
		"Rio Negro",
		"Salta",
		"San Juan",
		"San Luis",
		"Santa Cruz",
		"Santa Fe",
		"Santiago del Estero",
		"Tierra del Fuego",
		"Tucumán"
	};

	string     getProvinciaString(u_int i);

	Provincias getProvinciasEnum(u_int i);
}

enum class eProv::Provincias { CABA, BA, CA, CH, CT, CB, CR, ER, FO, JY, LP, LR, MZ, MI, NQN, RN, SA, SJ, SL, SC, SF, SE, TF, TU };

/// <summary>
/// Convierte Enum a string
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve string</returns>
/// <see cref="https://www.delftstack.com/howto/cpp/how-to-convert-enum-to-string-cpp/#:~:text=)%3A%20Banana%20Pie-,Use%20Custom%20Defined%20Function%20to%20Convert%20an%20Enum%20to%20a,enum_str%20array%20inside%20the%20function"/>
inline string eProv::getProvinciaString(u_int i) {
	string tmp(eProv::provincias_str[i]);
	return tmp;
}

/// <summary>
/// Convierte un ID a Enum
/// </summary>
/// <param name="i">ID del Enum</param>
/// <returns>Devuelve el Enum</returns>
/// <see cref="https://www.delftstack.com/howto/cpp/how-to-convert-enum-to-string-cpp/#:~:text=)%3A%20Banana%20Pie-,Use%20Custom%20Defined%20Function%20to%20Convert%20an%20Enum%20to%20a,enum_str%20array%20inside%20the%20function"/>
inline eProv::Provincias eProv::getProvinciasEnum(u_int i) {
	return static_cast<eProv::Provincias>(i);
}

#endif //PROVINCIA_H