/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _INUCAI_H
#define _INUCAI_H

#include "Paciente.h"

class INUCAI {
public: 
	INUCAI();
	INUCAI(string d, string t);
	~INUCAI() { }
	void RecibirPaciente(Paciente* p);
	void Buscar();
	void InicioProtocolo();
	void AsignarVehiculo();
	string tostring() const;
	void   imprimir() const;
private: 
	const string direccion;
	const string telefono;
};
#endif //_INUCAI_H