#ifndef MESES_H
#define MESES_H

#include "global.h"

namespace eMes {
	enum class Meses;

	static const string meses_str[] = {
		"ENERO",
		"FEBRERO",
		"MARZO",
		"ABRIL",
		"MAYO",
		"JUNIO",
		"JULIO",
		"AGOSTO",
		"SEPTIEMBRE",
		"OCTUBRE",
		"NOVIEMBRE",
		"DICIEMBRE"
	};

	string getMesString(u_int i);
	
	eMes::Meses getMesEnum(u_int i);
}

enum class eMes::Meses { EN, FE, MA, AB, MY, JN, JL, AG, SE, OC, NO, DI };

inline string eMes::getMesString(u_int i) {
	string tmp(eMes::meses_str[i]);
	return tmp;
}

inline eMes::Meses eMes::getMesEnum(u_int i) {
	return static_cast<eMes::Meses>(i);
}

#endif // !MESES_H