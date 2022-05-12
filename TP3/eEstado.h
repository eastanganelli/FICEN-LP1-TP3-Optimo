/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _EESTADO_H
#define _EESTADO_H
#include "global.h"

namespace eEst {
	enum class Estado { Estable, Inestable };

	string tostring(Estado i) {
		string o = "";
		switch (i) {
		case Estado::Estable:
			o = "Estable";
			break;
		case Estado::Inestable:
			o = "Inestable";
			break;
		} return o;
	}
}
#endif //_EESTADO_H