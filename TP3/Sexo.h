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
	string o = "";
	switch (i) {
	case Sexo::F:
		o = "F";
		break;
	case Sexo::M:
		o = "M";
		break;
	case Sexo::ND:
		o = "ND";
		break;
	case Sexo::O:
		o = "O";
		break;
	} return o;
}

#endif //ESEXO_H