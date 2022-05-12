#include "eGrupoSanguineo.h"

enum class eGrupoSanguineo::Grupo { A_MENOS, A_MAS, B_MENOS, B_MAS, AB_MENOS, AB_MAS, O_MENOS, O_MAS };

string eGrupoSanguineo::convertGrupoString(Grupo i) {
	string o = "";
	switch (i) {
	case Grupo::A_MENOS:
		o = "A-";
		break;
	case Grupo::A_MAS:
		o = "A+";
		break;
	case Grupo::B_MENOS:
		o = "B-";
		break;
	case Grupo::B_MAS:
		o = "B+";
		break;
	case Grupo::AB_MENOS:
		o = "AB-";
		break;
	case Grupo::AB_MAS:
		o = "AB+";
		break;
	case Grupo::O_MENOS:
		o = "O-";
		break;
	case Grupo::O_MAS:
		o = "O+";
		break;
	} return o;
}

bool eGrupoSanguineo::compatibilidad(Grupo d, Grupo r) {
	if (d == r) return true;
	return false;
}