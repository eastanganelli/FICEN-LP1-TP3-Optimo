#include "eEstado.h"

enum class eEst::Estado{ Estable, Inestable };

string eEst::convertEstadoString(Estado i) {
	string o = "";
	switch (i) {
	case Estado::Estable:
		o = "Estable";
		break;
	case Estado::Inestable:
		o = "Inestable";
		break;
	} return o;
}