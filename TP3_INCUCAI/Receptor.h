/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _RECEPTOR_H
#define _RECEPTOR_H

#include "Paciente.h"


class Receptor: public Paciente {
private: 
	ePrioridad prioridad;
	ePatologia patologia;
	void estado;
};

#endif //_RECEPTOR_H