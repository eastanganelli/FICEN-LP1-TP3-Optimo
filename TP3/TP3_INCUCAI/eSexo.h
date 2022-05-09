/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _ESEXO_H
#define _ESEXO_H
#include "global.h"

namespace Sexo {
	enum class eSexo { F, M, ND, O };

	string tostring(eSexo i) {
		string o = "";
		switch (i) {
		case eSexo::F:
			o = "F";
			break;
		case eSexo::M:
			o = "M";
			break;
		case eSexo::ND:
			o = "ND";
			break;
		case eSexo::O:
			o = "O";
			break;
		} return o;
	}
}
#endif //_ESEXO_H