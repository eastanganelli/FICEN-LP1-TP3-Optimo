/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _ESEXO_H
#define _ESEXO_H
#include "global.h"

namespace eSexo {
	enum class Sexo { F, M, ND, O };

	string tostring(Sexo i) {
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
}
#endif //_ESEXO_H