#include "ePrioridad.h"

enum class ePrio::Prioridad { ALTA, MEDIA, BAJA };

string ePrio::convertPrioridadString(Prioridad i) {
	string o = "";
	switch (i) {
	case Prioridad::ALTA:
		o = "ALTA";
		break;
	case Prioridad::MEDIA:
		o = "MEDIA";
		break;
	case Prioridad::BAJA:
		o = "BAJA";
		break;
	} return o;
}