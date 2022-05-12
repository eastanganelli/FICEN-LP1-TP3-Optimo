/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _EORGANOS_H
#define _EORGANOS_H
#include "global.h"

namespace eOrg {
	enum class Organos { CORAZON, HIGADO, PANCREAS, HUESOS, RINYON, PULMONES, INTESTINO, PIEL, ORNEAS };

	string tostring(Organos i) {
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
			o = "RIÑON";
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
}
#endif //_EORGANOS_H