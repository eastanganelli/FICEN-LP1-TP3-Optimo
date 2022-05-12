/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef _FECHA_H
#define _FECHA_H

#include "Hora.h"

class Fecha {
public:
	/// <summary>
	/// Constructor que recibe Dia/Mes/Año
	/// </summary>
	/// <param name="d"></param>
	/// <param name="m"></param>
	/// <param name="y"></param>
	Fecha(u_int d, u_int m, u_int y);
	
	/// <summary>
	/// Constructor que recibe Dia/Mes/Año Hora:Minuto
	/// </summary>
	/// <param name="d"></param>
	/// <param name="m"></param>
	/// <param name="y"></param>
	/// <param name="h"></param>
	/// <param name="mm"></param>
	Fecha(u_int d, u_int m, u_int y, u_int h, u_int mm);
	
	/// <summary>
	/// Constructor que recibe Dia/Mes/Año y objeto tipo Hora
	/// </summary>
	/// <param name=""></param>
	/// <param name=""></param>
	/// <param name=""></param>
	/// <param name=""></param>
	Fecha(u_int, u_int, u_int, Hora*);
	
	string tostring() const;
	void imprimir()   const;

private: 
	u_int d;
	u_int m;
	u_int y;
	Hora* hm;
};
#endif //_FECHA_H