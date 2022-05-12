/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _eProv_H
#define _eProv_H
#include "global.h"

namespace Provincias {
	enum class eProv { CABA, BA, CA, CH, CT, CB, CR, ER, FO, JY, LP, LR, MZ, MI, NQN, RN, SA, SJ, SL, SC, SF, SE, TF, TU };

	string tostring(eProv i) {
		string o = "";
		switch (i) {
		case eProv::CABA:
			o = "Ciudad Autónoma de Buenos Aires";
			break;
		case eProv::BA:
			o = "Buenos Aires";
			break;
		case eProv::CA:
			o = "Catamarca";
			break;
		case eProv::CH:
			o = "Chaco";
			break;
		case eProv::CT:
			o = "Chubut";
			break;
		case eProv::CB:
			o = "Cordoba";
			break;
		case eProv::CR:
			o = "Corrientes";
			break;
		case eProv::ER:
			o = "Entre Rios";
			break;
		case eProv::FO:
			o = "Formosa";
			break;
		case eProv::JY:
			o = "Jujuy";
			break;
		case eProv::LP:
			o = "La Pampa";
			break;
		case eProv::LR:
			o = "La Rioja";
			break;
		case eProv::MZ:
			o = "Mendoza";
			break;
		case eProv::MI:
			o = "Misiones";
			break;
		case eProv::NQN:
			o = "Neuquen";
			break;
		case eProv::RN:
			o = "Rio Negro";
			break;
		case eProv::SA:
			o = "Salta";
			break;
		case eProv::SJ:
			o = "San Juan";
			break;
		case eProv::SL:
			o = "San Luis";
			break;
		case eProv::SC:
			o = "Santa Cruz";
			break;
		case eProv::SF:
			o = "Santa Fe";
			break;
		case eProv::SE:
			o = "Santiago del Estero";
			break;
		case eProv::TF:
			o = "Tierra del Fuego";
			break;
		case eProv::TU:
			o = "Tucumán";
			break;
		} return o;
	}	
}
#endif //_eProv_H