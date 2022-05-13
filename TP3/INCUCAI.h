/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef CINCUCAI_H
#define CINCUCAI_H

#include "ListaTrasplantado.h"
#include "ListaReceptores.h"
#include "queueDonantes.h"

class cINCUCAI {
	const string direccion;
	const string telefono;

	cListaTransplantado* trasplantados;
	cListaReceptores*	 Receptores;
	cColaDonantes*		 Donantes;

	void IngresarPaciente(cPaciente* p);

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
};
#endif //INUCAI_H