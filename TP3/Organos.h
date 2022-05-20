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

	static const string organos_str[] = {
		"CORAZON",
		"HIGADO",
		"PANCREAS",
		"HUESOS",
		"RINYON",
		"PULMONES",
		"INTESTINO",
		"PIEL",
		"CORNEAS"
	};

	string  getOrganoString(u_int i);
	Organos getOrganoEnum(u_int i);
}

enum class eOrg::Organos { CORAZON, HIGADO, PANCREAS, HUESOS, RINYON, PULMONES, INTESTINO, PIEL, CORNEAS };

inline string eOrg::getOrganoString(u_int i) {
	string tmp(eOrg::organos_str[i]);
	return tmp;
}

inline eOrg::Organos eOrg::getOrganoEnum(u_int i) {
	return static_cast<eOrg::Organos>(i);
}

#endif //ORGANOS_H