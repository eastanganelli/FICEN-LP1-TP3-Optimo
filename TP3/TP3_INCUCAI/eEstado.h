/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _EESTADO_H
#define _EESTADO_H
#include "global.h"

namespace Estado {
	enum class eEst { Estable, Inestable };

	string tostring(eEst i) {
		string o = "";
		switch (i) {
		case eEst::Estable:
			o = "Estable";
			break;
		case eEst::Inestable:
			o = "Inestable";
			break;
		} return o;
	}
}
#endif //_EESTADO_H