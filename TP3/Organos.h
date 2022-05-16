/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef ORGANOS_H
#define ORGANOS_H

#include "global.h"

namespace eOrg {
	enum class Organos;

	string convertOrganoString(Organos i);
}

enum class eOrg::Organos { CORAZON, HIGADO, PANCREAS, HUESOS, RINYON, PULMONES, INTESTINO, PIEL, ORNEAS };

inline string eOrg::convertOrganoString(Organos i) {
	string o = "";
	switch (i) {
	case Organos::CORAZON:
		o = "CORAZON";
		break;
	case Organos::HIGADO:
		o = "HIGADO";
		break;
	case Organos::PANCREAS:
		o = "PANCREAS";
		break;
	case Organos::HUESOS:
		o = "HUESOS";
		break;
	case Organos::RINYON:
		o = "RI�ON";
		break;
	case Organos::PULMONES:
		o = "PULMONES";
		break;
	case Organos::INTESTINO:
		o = "INTESTINO";
		break;
	case Organos::PIEL:
		o = "PIEL";
		break;
	case Organos::ORNEAS:
		o = "ORNEAS";
		break;
	} return o;
}

#endif //ORGANOS_H