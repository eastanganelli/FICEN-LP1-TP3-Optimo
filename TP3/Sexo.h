/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef SEXO_H
#define SEXO_H

#include "global.h"

namespace eSexo {
	enum class Sexo;

	static const string sexo_str[] = {
		"Femenino",
		"Masculino",
		"No definido",
		"0"
	};

	string getSexoString(u_int i);
	Sexo   getSexoEnum(u_int i);
}

enum class eSexo::Sexo { F, M, ND, O };

inline string eSexo::getSexoString(u_int i) {
	string tmp(eSexo::sexo_str[i]);
	return tmp;
}

inline eSexo::Sexo eSexo::getSexoEnum(u_int i) {
	return static_cast<eSexo::Sexo>(i);
}


#endif //ESEXO_H