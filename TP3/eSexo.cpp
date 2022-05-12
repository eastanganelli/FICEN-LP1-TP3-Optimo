#include "eSexo.h"

enum class eSexo::Sexo { F, M, ND, O };

string eSexo::convertSexoString(Sexo i) {
	string o = "";
	switch (i) {
	case Sexo::F:
		o = "F";
		break;
	case Sexo::M:
		o = "M";
		break;
	case Sexo::ND:
		o = "ND";
		break;
	case Sexo::O:
		o = "O";
		break;
	} return o;
}