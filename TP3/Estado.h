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

	static const string estados_str[] = {
		"Estable",
		"Inestable",
		"Alta"
	};

	string getEstadoString(u_int i);
	Estado getEstadoEnum(u_int i);
}

enum class eEst::Estado { Estable, Inestable, Alta };

inline string eEst::getEstadoString(u_int i) {
	string tmp(eEst::estados_str[i]);
	return tmp;
}

inline eEst::Estado eEst::getEstadoEnum(u_int i) {
	return static_cast<eEst::Estado>(i);
}

#endif //ESTADO_H