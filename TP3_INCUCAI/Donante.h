/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _DONANTE_H
#define _DONANTE_H

#include "Paciente.h"


class Donante: public Paciente {
public:
	Donante();
	~Donante() { }
	string tostring() const;
	void   imprimir() const;

private:
	Fecha* fallecimiento;
	Fecha* initAblacion;
};

#endif //_DONANTE_H