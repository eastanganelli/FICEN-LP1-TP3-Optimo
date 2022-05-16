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
	string o = "";

	switch (i) {
		case Patologia::FQ:
			o = "Fibrosis Quistica";
			break;
		case Patologia::IR:
			o = "Insuficiencia Renal";
			break;
		case Patologia::IC:
			o = "Insuficiencia Cardiaca";
			break;
		case Patologia::HEP:
			o = "Hepatitis";
			break;
		case Patologia::NEC:
			o = "Necrosis";
			break;
	}

	return o;
}
#endif //PATOLOGIA_H