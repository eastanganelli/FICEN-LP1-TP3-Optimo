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
	switch (i) {
	case Organos::CORAZON:
		return "CORAZON";
	case Organos::HIGADO:
		return "HIGADO";
	case Organos::PANCREAS:
		return "PANCREAS";
	case Organos::HUESOS:
		return "HUESOS";
	case Organos::RINYON:
		return "RIÑON";
	case Organos::PULMONES:
		return "PULMONES";
	case Organos::INTESTINO:
		return "INTESTINO";
	case Organos::PIEL:
		return "PIEL";
	}

	return "ORNEAS";
}

#endif //ORGANOS_H