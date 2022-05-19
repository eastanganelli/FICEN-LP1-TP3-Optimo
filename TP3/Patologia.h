/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef PATOLOGIA_H
#define PATOLOGIA_H

#include "global.h"

namespace ePato {
	enum class Patologia;
	
	string convertPatologiaString(Patologia i);
}

enum class ePato::Patologia { NON, FQ, IR, IC, HEP, NEC, INMO };

inline string ePato::convertPatologiaString(Patologia i) {
	switch (i) {
	case Patologia::FQ:
		return "Fibrosis Quistica";
	case Patologia::IR:
		return "Insuficiencia Renal";
	case Patologia::IC:
		return "Insuficiencia Cardiaca";
	case Patologia::HEP:
		return "Hepatitis";
	case Patologia::NEC:
		return "Necrosis";
	case Patologia::INMO:
		return "Inmunosuprimido";
	}

	return "No Patologia";
}
#endif //PATOLOGIA_H