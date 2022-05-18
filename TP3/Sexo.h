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

	string convertSexoString(Sexo i);
}

enum class eSexo::Sexo { F, M, ND, O };

inline string eSexo::convertSexoString(Sexo i) {
	switch (i) {
	case Sexo::F:
		return "F";
	case Sexo::M:
		return "M";
	case Sexo::ND:
		return "ND";
	}

	return "O";
}

#endif //ESEXO_H