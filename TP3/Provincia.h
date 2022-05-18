/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef PROVINCIA_H
#define PROVINCIA_H

#include "global.h"

namespace eProv {
	enum class Provincias;

	string convertProvinciasString(Provincias i);
}

enum class eProv::Provincias { CABA, BA, CA, CH, CT, CB, CR, ER, FO, JY, LP, LR, MZ, MI, NQN, RN, SA, SJ, SL, SC, SF, SE, TF, TU };

inline string eProv::convertProvinciasString(Provincias i) {
	switch (i) {
	case Provincias::CABA:
		return "Ciudad Autónoma de Buenos Aires";
	case Provincias::BA:
		return "Buenos Aires";
	case Provincias::CA:
		return "Catamarca";
	case Provincias::CH:
		return "Chaco";
	case Provincias::CT:
		return "Chubut";
	case Provincias::CB:
		return "Cordoba";
	case Provincias::CR:
		return "Corrientes";
	case Provincias::ER:
		return "Entre Rios";
	case Provincias::FO:
		return "Formosa";
	case Provincias::JY:
		return "Jujuy";
	case Provincias::LP:
		return "La Pampa";
	case Provincias::LR:
		return "La Rioja";
	case Provincias::MZ:
		return "Mendoza";
	case Provincias::MI:
		return "Misiones";
	case Provincias::NQN:
		return "Neuquen";
	case Provincias::RN:
		return "Rio Negro";
	case Provincias::SA:
		return "Salta";
	case Provincias::SJ:
		return "San Juan";
	case Provincias::SL:
		return "San Luis";
	case Provincias::SC:
		return "Santa Cruz";
	case Provincias::SF:
		return "Santa Fe";
	case Provincias::SE:
		return "Santiago del Estero";
	case Provincias::TF:
		return "Tierra del Fuego";
	}

	return "Tucumán";
}

#endif //PROVINCIA_H