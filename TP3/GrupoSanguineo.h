/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef GRUPOSANGUINEO_H
#define GRUPOSANGUINEO_H

#include "global.h"

namespace eGrupoSanguineo {
	enum class Grupo;

	string convertGrupoString(Grupo i);

	bool compatibilidad(Grupo d, Grupo r);
}

enum class eGrupoSanguineo::Grupo { A_MENOS, A_MAS, B_MENOS, B_MAS, AB_MENOS, AB_MAS, O_MENOS, O_MAS };

inline string eGrupoSanguineo::convertGrupoString(Grupo i) {
	switch (i) {
	case Grupo::A_MENOS:
		return "A-";
	case Grupo::A_MAS:
		return "A+";
	case Grupo::B_MENOS:
		return "B-";
	case Grupo::B_MAS:
		return "B+";
	case Grupo::AB_MENOS:
		return "AB-";
	case Grupo::AB_MAS:
		return "AB+";
	case Grupo::O_MENOS:
		return "O-";
	}

	return "O+";
}

inline bool eGrupoSanguineo::compatibilidad(Grupo d, Grupo r) {
	if (d == r) return true;
	return false;
}

#endif //GRUPOSANGUINEO_H