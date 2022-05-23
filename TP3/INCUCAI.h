#ifndef INCUCAI_H
#define INCUCAI_H

#include "ListaReceptores.h"
#include "ListaCentroSalud.h"
#include "ListaDonantes.h"

class cINCUCAI {
private:
	const string direccion;
	const string telefono;

	cListaT<cPaciente>* Trasplantados;
	cListaReceptores*   ListaEspera;
	cListaDonantes*	    Donantes;
	cListaCentroSalud*  CentrosHabilitados;

	/// <summary>
	/// Recibe un puntero paciente y lo clasifica según el tipo de puntero.
	/// De ser Receptor, lo agrega a la lista de espera.
	/// De ser Donante, lo agrega a la lista de donantes.
	/// </summary>
	/// <param name="p">Puntero del tipo de paciente</param>
	void IngresarPaciente(cPaciente* p);
	/// <summary>
	/// Verifica si el Centro de salud en el que se encuentra el Receptor,
	/// está habilitado para realizar trasplantes.
	/// </summary>
	/// <param name="csr">Puntero del tipo Centro de Salud</param>
	/// <returns></returns>
	bool CentroEstaHabilitado(cCentroDeSalud* csr);
	/// <summary>
	/// Se asgina un vehiculo para realizar el transporte del organo,
	/// basandose en la distancia calculada.
	/// </summary>
	/// <param name="cs_">Puntero del tipo Centro de Salud</param>
	/// <param name="distancia">Distancia que hay entre centros</param>
	/// <returns>Puntero del tipo Vehiculos</returns>
	cVehiculos* AsignarVehiculo(cCentroDeSalud* cs_, char distancia);
	/// <summary>
	/// Cambie el estado del receptor a Trasplantado si:
	/// - El trasplante fue exitoso.
	/// - El trasplante fue fallido.
	/// </summary>
	/// <param name="r">Puntero del tipo Receptor</param>
	/// <param name="exito">Exito del trasplante</param>
	void cambiarEstadoPaciente(cReceptor* r, bool exito = false);

public:
	/// <summary>
	/// Constructor por defecto de la clase INCUCAI.
	/// </summary>
	cINCUCAI();
	/// <summary>
	/// Constructor de la clase INCUCAI.
	/// </summary>
	/// <param name="d">Dirección</param>
	/// <param name="t">Teléfono de contacto</param>
	cINCUCAI(string d, string t);
	~cINCUCAI();

	/// <summary>
	/// Recibe Paciente que deberá ser agregado al sistema.
	/// </summary>
	/// <param name="p">Puntero del tipo paciente</param>
	void RecibirPaciente(cPaciente* p);
	/// <summary>
	/// Busca los posible Receptores que sean compatibles y
	/// requieran el órgano recibido para trasplantar.
	/// </summary>
	/// <param name="c">Punero del organo del donante</param>
	/// <param name="d">Puntero del paciente</param>
	/// <returns>Listado de pacientes compatibles</returns>
	cListaReceptores* BuscarPosiblesReceptores(cOrgano* c, cDonante* d);
	/// <summary>
	/// Inicia el protocolo de transporte de organo.
	/// Este protocolo inicia cuando se encuentra un receptor y donante compatibles.
	/// </summary>
	/// <param name="p">Puntero del Receptor</param>
	/// <param name="d">Puntero del Donante</param>
	/// <returns>
	/// True: Trasplante exitoso.
	/// False: Trasplante fallido.
	/// </returns>
	bool InicioProtocolo(cReceptor* p, cDonante* d);
	/// <summary>
	/// Busca la posición del paciente en la lista de espera.
	/// </summary>
	/// <param name="p">Puntero del tipo Paciente</param>
	/// <returns>Posición en la lista</returns>
	u_int PosicionEspera(cPaciente* p);
	/// <summary>
	/// Setea el listado de Centro de salud habilitados.
	/// </summary>
	/// <param name="lcs">Lista de Centros de Salud habilitados</param>
	void setCentrosHabilitados(cListaCentroSalud* lcs);
	/// <summary>
	/// Verifica si hay Donantes en la lista.
	/// </summary>
	/// <returns>
	/// True: Hay Donantes disponibles.
	/// False: No hay Donantes disponibles.
	/// </returns>
	bool hayDonantes()   const;
	/// <summary>
	/// Verifica si hay Receptores en la lista de espera.
	/// </summary>
	/// <returns>
	/// True: Hay Receptores disponibles.
	/// False: No hay Receptores disponibles.
	/// </returns>
	bool hayReceptores() const;
	/// <summary>
	/// Devuelve el primer Donante que se encuetra en la lista.
	/// </summary>
	/// <returns>Puntero del tipo Donante</returns>
	cDonante* ObtenerDonante() const;
	
	/// <summary>
	/// Filtra que Pacientes receptores tienen el centro de salud
	/// asociado indicado por el valor de busqueada.
	/// </summary>
	/// <param name="o">Puntero del tipo Centro de salud</param>
	/// <returns>Devuelve lista de receptores</returns>
	cListaReceptores* Buscar(cCentroDeSalud* cs);
	/// <summary>
	/// Filtra que Pacientes receptores tienen el órgano
	/// indicado por el valor de busqueada.
	/// </summary>
	/// <param name="o">Puntero del tipo Organo</param>
	/// <returns>Devuelve lista de receptores</returns>
	cListaReceptores* Buscar(cOrgano* o);

	/// <summary>
	/// Imprime informe sobre los trasplantes exitosos
	/// realizados cada mes en cada provincia.
	/// </summary>
	void informeTrasplantados();

	string tostring() const;
	void   imprimir() const;
};

#endif //INCUCAI_H