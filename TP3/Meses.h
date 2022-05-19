#ifndef MESES_H
#define MESES_H

#include "global.h"

namespace eMes {
	enum class Meses;

	string convertMesString(Meses i);
	
	string UIntToMes(u_int i);
}

enum class eMes::Meses { EN, FE, MA, AB, MY, JN, JL, AG, SE, OC, NO, DI };

inline string eMes::convertMesString(Meses i) {
	switch (i) {
	case Meses::EN:
		return "ENERO";
	case Meses::FE:
		return "FEBRERO";
	case Meses::MA:
		return "MARZO";
	case Meses::AB:
		return "ABRIL";
	case Meses::MY:
		return "MAYO";
	case Meses::JN:
		return "JUNIO";
	case Meses::JL:
		return "JULIO";
	case Meses::AG:
		return "AGOSTO";
	case Meses::SE:
		return "SEPTIEMBRE";
	case Meses::OC:
		return "OCTUBRE";
	case Meses::NO:
		return "NOVIEMBRE";
	}

	return "Diciembre";
}

inline string eMes::UIntToMes(u_int i) {
	switch (i) {
	case 0:
		return "ENERO";
	case 1:
		return "FEBRERO";
	case 2:
		return "MARZO";
	case 3:
		return "ABRIL";
	case 4:
		return "MAYO";
	case 5:
		return "JUNIO";
	case 6:
		return "JULIO";
	case 7:
		return "AGOSTO";
	case 8:
		return "SEPTIEMBRE";
	case 9:
		return "OCTUBRE";
	case 10:
		return "NOVIEMBRE";
	}

	return "Diciembre";
}

#endif // !MESES_H