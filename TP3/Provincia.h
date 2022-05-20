/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef PROVINCIA_H
#define PROVINCIA_H

#define CantProvincias 23

#include "global.h"

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

inline string eProv::getProvinciaString(u_int i) {
	string tmp(eProv::provincias_str[i]);
	return tmp;
}

inline eProv::Provincias eProv::getProvinciasEnum(u_int i) {
	return static_cast<eProv::Provincias>(i);
}

#endif //PROVINCIA_H