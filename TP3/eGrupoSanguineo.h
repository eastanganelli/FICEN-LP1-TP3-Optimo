/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#include "global.h"
#include "Paciente.h"

#ifndef _EGRUPOSANGUINEO_H
#define _EGRUPOSANGUINEO_H
namespace eGrupoSanguineo {
	enum class Grupo { A_MENOS, A_MAS, B_MENOS, B_MAS, AB_MENOS, AB_MAS, O_MENOS, O_MAS };

	string tostring(Grupo i) {
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

	static bool compatibilidad(eGrupoSanguineo::Grupo d, eGrupoSanguineo::Grupo r) {
		if (d == r) return true;
		return false;
	}
}
#endif //_EGRUPOSANGUINEO_H