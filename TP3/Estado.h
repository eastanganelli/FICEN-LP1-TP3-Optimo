/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#include "global.h"

#ifndef ESTADO_H
#define ESTADO_H

namespace eEst {
	enum class Estado;

	string convertEstadoString(Estado i);
}

enum class eEst::Estado { Estable, Inestable };

inline string eEst::convertEstadoString(Estado i) {
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

#endif //ESTADO_H