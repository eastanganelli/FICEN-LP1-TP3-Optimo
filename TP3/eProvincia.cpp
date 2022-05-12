#include "eProvincia.h"

enum class eProv::Provincias { CABA, BA, CA, CH, CT, CB, CR, ER, FO, JY, LP, LR, MZ, MI, NQN, RN, SA, SJ, SL, SC, SF, SE, TF, TU };

string eProv::convertProvinciasString(Provincias i) {
	string o = "";
	switch (i) {
	case Provincias::CABA:
		o = "Ciudad Autónoma de Buenos Aires";
		break;
	case Provincias::BA:
		o = "Buenos Aires";
		break;
	case Provincias::CA:
		o = "Catamarca";
		break;
	case Provincias::CH:
		o = "Chaco";
		break;
	case Provincias::CT:
		o = "Chubut";
		break;
	case Provincias::CB:
		o = "Cordoba";
		break;
	case Provincias::CR:
		o = "Corrientes";
		break;
	case Provincias::ER:
		o = "Entre Rios";
		break;
	case Provincias::FO:
		o = "Formosa";
		break;
	case Provincias::JY:
		o = "Jujuy";
		break;
	case Provincias::LP:
		o = "La Pampa";
		break;
	case Provincias::LR:
		o = "La Rioja";
		break;
	case Provincias::MZ:
		o = "Mendoza";
		break;
	case Provincias::MI:
		o = "Misiones";
		break;
	case Provincias::NQN:
		o = "Neuquen";
		break;
	case Provincias::RN:
		o = "Rio Negro";
		break;
	case Provincias::SA:
		o = "Salta";
		break;
	case Provincias::SJ:
		o = "San Juan";
		break;
	case Provincias::SL:
		o = "San Luis";
		break;
	case Provincias::SC:
		o = "Santa Cruz";
		break;
	case Provincias::SF:
		o = "Santa Fe";
		break;
	case Provincias::SE:
		o = "Santiago del Estero";
		break;
	case Provincias::TF:
		o = "Tierra del Fuego";
		break;
	case Provincias::TU:
		o = "Tucumán";
		break;
	} return o;
}