#ifndef CENTRODESALUD_H
#define CENTRODESALUD_H

#include "Provincia.h"
#include "customEx.h"
#include "ListaVehiculos.h"
#include "ListaOrganos.h"

class cCentroDeSalud {
	const string nombre;
	const string direccion;
	const string partido;
	const string telefono;
	const eProv::Provincias provincia;

	cListaVehiculos* MisVehiculos;

	bool TrasplateEquiprobable();

public:
	/// <summary>
	/// Constructor de la clase Centro De Salud
	/// </summary>
	/// <param name="n">Nombre</param>
	/// <param name="d">Direcci�n</param>
	/// <param name="p">Partido</param>
	/// <param name="pr">Provincia</param>
	/// <param name="t">Tel�fono</param>
	cCentroDeSalud(string n, string d, string p, eProv::Provincias pr, string t);
	/// <summary>
	/// Constructor por copia
	/// </summary>	
	cCentroDeSalud(const cCentroDeSalud& a);
	~cCentroDeSalud();
	
	/// <summary>
	/// Recibe una lista de organos del donante, y el organo de interes para ser Ablado.
	/// Si la ablaci�n no tiene problemas, se setea la fecha de ablaci�n.
	/// Sino, se devuelve NULL.
	/// </summary>
	/// <param name="d">Organos del Donante</param>
	/// <param name="q">Organo de inter�s</param>
	/// <returns>�rgano ablado</returns>
	cOrgano* Ablar(cListaOrganos* d, eOrg::Organos q);
	/// <summary>
	/// Recibe el �rgano que se desea trasplantar y abla el organo del receptor,
	/// reemplazandolo por el nuevo �rgano del donante.
	/// </summary>
	/// <param name="r">�rgano del Receptor</param>
	/// <param name="o">�rgano del Donante</param>
	void Trasplantar(cOrgano*& r, cOrgano* o);

	/// <summary>
	/// Se agrega listado de vehiculos al Centro de Salud.
	/// </summary>
	/// <param name="v">Lista de vehiculos</param>
	void setMisVehiculos(cListaVehiculos* v);
	/// <summary>
	/// Se obtiene el listado de vehiculos del Centro de Salud.
	/// </summary>
	/// <returns>Listado de Vehiculos*</returns>
	cListaVehiculos*  getMisVehiculos() const;
	/// <summary>
	/// Se obtiene la provincia en la que esta el Centro de Salud.
	/// </summary>
	/// <returns>Provincia del Centro</returns>
	eProv::Provincias getProvincia()    const;

	string tostring() const;
	void   imprimir() const;

	/// <summary>
	/// Calcula la distancia entre los Centros de Salud.
	/// </summary>
	/// <param name="csd">Centro del Donante</param>
	/// <param name="csr">Centro del Receptor</param>
	/// <returns>
	/// 1: Si los Centros de Salud est�n en la misma provincia.
	/// 0: Si los Centros de Salud est�n en la misma provincia y partido.
	/// -1: Si los Centros de Salud est�n en provincias distinas.
	/// </returns>
	static char CalculadoraDeDistancia(cCentroDeSalud* csd, cCentroDeSalud* csr);
};

#endif //CENTRODESALUD_H