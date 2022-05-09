/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _INUCAI_H
#define _INUCAI_H

class INUCAI {
public: 
	
void RecibirPaciente();
	
void Buscar();
	
void InicioProtocolo();
	
void AsignarVehiculo();
	
const string to_string();
	
const void imprimir();
private: 
	const string direccion;
	const string telefono;
};

#endif //_INUCAI_H