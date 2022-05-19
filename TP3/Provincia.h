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

	string convertProvinciasString(Provincias i);

	Provincias UIntToProvincia(u_int i);
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

inline eProv::Provincias eProv::UIntToProvincia(u_int i) {
	switch (i) {
	case 0:
		return Provincias::CABA;
	case 1:
		return Provincias::BA;
	case 2:
		return Provincias::CA;
	case 3:
		return Provincias::CH;
	case 4:
		return Provincias::CT;
	case 5:
		return Provincias::CB;
	case 6:
		return Provincias::CR;
	case 7:
		return Provincias::ER;
	case 8:
		return Provincias::FO;
	case 9:
		return Provincias::JY;
	case 10:
		return Provincias::LP;
	case 11:
		return Provincias::LR;
	case 12:
		return Provincias::MZ;
	case 13:
		return Provincias::MI;
	case 14:
		return Provincias::NQN;
	case 15:
		return Provincias::RN;
	case 16:
		return Provincias::SA;
	case 17:
		return Provincias::SJ;
	case 18:
		return Provincias::SL;
	case 19:
		return Provincias::SC;
	case 20:
		return Provincias::SF;
	case 21:
		return Provincias::SE;
	case 22:
		return Provincias::TF;
	}

	return Provincias::TU;
}

#endif //PROVINCIA_H