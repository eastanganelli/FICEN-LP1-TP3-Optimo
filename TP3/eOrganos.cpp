#include "eOrganos.h"

enum class eOrg::Organos { CORAZON, HIGADO, PANCREAS, HUESOS, RINYON, PULMONES, INTESTINO, PIEL, ORNEAS };

string eOrg::convertOrganoString(Organos i) {
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