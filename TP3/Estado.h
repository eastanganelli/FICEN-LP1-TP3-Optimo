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

enum class eEst::Estado { Estable, Inestable, Alta };

inline string eEst::convertEstadoString(Estado i) {
	switch (i) {
	case Estado::Estable:
		return "Estable";
	case Estado::Inestable:
		return "Inestable";
	}

	return "Alta";
}

#endif //ESTADO_H