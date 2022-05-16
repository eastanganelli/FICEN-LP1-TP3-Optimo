/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef CINCUCAI_H
#define CINCUCAI_H

#include "ListaTrasplantado.h"
#include "ListaReceptores.h"
#include "ListaCentroSalud.h"
#include "ListaDonantes.h"

class cINCUCAI {
	const string direccion;
	const string telefono;

	cListaTransplantado* Trasplantados;
	cListaReceptores*	 Receptores;
	cColaDonantes*		 Donantes;
	cListaCentroSalud*	 CentrosHabilitados;

	void IngresarPaciente(cPaciente* p);

public: 
	cINCUCAI();
	cINCUCAI(string d, string t);
	~cINCUCAI() { }

	void RecibirPaciente(cPaciente* p);
	void Buscar();
	void InicioProtocolo();
	void AsignarVehiculo();
	u_int PosicionEspera(cPaciente* p);

	string tostring() const;
	void   imprimir() const;
};
#endif //INUCAI_H