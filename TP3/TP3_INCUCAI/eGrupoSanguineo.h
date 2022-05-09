/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#include "global.h"

#ifndef _EGRUPOSANGUINEO_H
#define _EGRUPOSANGUINEO_H
namespace GrupoSanguineo {
	enum class eGrupoSanguineo { A_MENOS, A_MAS, B_MENOS, B_MAS, AB_MENOS, AB_MAS, O_MENOS, O_MAS };

	string tostring(eGrupoSanguineo i) {
		string o = "";
		switch (i) {
		case eGrupoSanguineo::A_MENOS:
			o = "A-";
			break;
		case eGrupoSanguineo::A_MAS:
			o = "A+";
			break;
		case eGrupoSanguineo::B_MENOS:
			o = "B-";
			break;
		case eGrupoSanguineo::B_MAS:
			o = "B+";
			break;
		case eGrupoSanguineo::AB_MENOS:
			o = "AB-";
			break;
		case eGrupoSanguineo::AB_MAS:
			o = "AB+";
			break;
		case eGrupoSanguineo::O_MENOS:
			o = "O-";
			break;
		case eGrupoSanguineo::O_MAS:
			o = "O+";
			break;
		} return o;
	}
}
#endif //_EGRUPOSANGUINEO_H