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

enum class ePato::Patologia { FQ, IR, IC, HEP, NEC };

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
	}

	return "Necrosis";
}
#endif //PATOLOGIA_H