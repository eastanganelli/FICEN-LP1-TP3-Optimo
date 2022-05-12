/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CINUCAI_H
#define CINUCAI_H

#include "Paciente.h"

class cINCUCAI {
public: 
	cINCUCAI();
	cINCUCAI(string d, string t);
	~cINCUCAI() { }
	void RecibirPaciente(cPaciente* p);
	void Buscar();
	void InicioProtocolo();
	void AsignarVehiculo();
	string tostring() const;
	void   imprimir() const;
private: 
	const string direccion;
	const string telefono;
};
#endif //INUCAI_H