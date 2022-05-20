/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef INCUCAI_H
#define INCUCAI_H

#include "ListaPaciente.h"
#include "ListaReceptores.h"
#include "ListaCentroSalud.h"
#include "ListaDonantes.h"

class cINCUCAI {
private:
	const string direccion;
	const string telefono;

	cListaReceptores*  Trasplantados;
	cListaReceptores*  ListaEspera;
	cListaDonantes*	   Donantes;
	cListaCentroSalud* CentrosHabilitados;

	void IngresarPaciente(cPaciente* p);
	bool CentroEstaHabilitado(cCentroDeSalud* csr);
	cVehiculos* AsignarVehiculo(cCentroDeSalud* cs_, char distancia);
	void cambiarEstadoPaciente(cReceptor* r, bool exito = false);

public: 
	cINCUCAI();
	cINCUCAI(string d, string t);
	~cINCUCAI();

	void RecibirPaciente(cPaciente* p);
	cListaReceptores* PosiblesReceptores(cOrgano* c, cDonante* d);
	bool InicioProtocolo(cReceptor* p, cDonante* d);
	u_int PosicionEspera(cPaciente* p);
	void setCentrosHabilitados(cListaCentroSalud* lcs);
	u_int hayDonantes() const;
	cDonante* ObtenerDonante() const;
	
	/// <summary>
	/// 
	/// </summary>
	/// <param name="o"></param>
	/// <returns></returns>
	cListaReceptores* Buscar(cCentroDeSalud* cs);
	cListaReceptores* Buscar(cOrgano* o);

	/// <summary>
	/// 
	/// </summary>
	void informeTrasplantados();

	string tostring() const;
	void   imprimir() const;
};

#endif //INUCAI_H