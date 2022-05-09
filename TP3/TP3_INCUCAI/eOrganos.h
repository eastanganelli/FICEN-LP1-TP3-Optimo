/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _EORGANOS_H
#define _EORGANOS_H
#include "global.h"

namespace Organos {
	enum class eOrg { CORAZON, HIGADO, PANCREAS, HUESOS, RINYON, PULMONES, INTESTINO, PIEL, ORNEAS };

	string tostring(eOrg i) {
		string o = "";
		switch (i) {
		case eOrg::CORAZON:
			o = "CORAZON";
			break;
		case eOrg::HIGADO:
			o = "HIGADO";
			break;
		case eOrg::PANCREAS:
			o = "PANCREAS";
			break;
		case eOrg::HUESOS:
			o = "HUESOS";
			break;
		case eOrg::RINYON:
			o = "RIÑON";
			break;
		case eOrg::PULMONES:
			o = "PULMONES";
			break;
		case eOrg::INTESTINO:
			o = "INTESTINO";
			break;
		case eOrg::PIEL:
			o = "PIEL";
			break;
		case eOrg::ORNEAS:
			o = "ORNEAS";
			break;
		} return o;
	}
}
#endif //_EORGANOS_H