/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */


#ifndef CFECHA_H
#define CFECHA_H

#include "Hora.h"

class cFecha {
public:
	/// <summary>
	/// Constructor que recibe Dia/Mes/A�o
	/// </summary>
	/// <param name="d"></param>
	/// <param name="m"></param>
	/// <param name="y"></param>
	cFecha(u_int d, u_int m, u_int y);
	
	/// <summary>
	/// Constructor que recibe Dia/Mes/A�o Hora:Minuto
	/// </summary>
	/// <param name="d"></param>
	/// <param name="m"></param>
	/// <param name="y"></param>
	/// <param name="h"></param>
	/// <param name="mm"></param>
	cFecha(u_int d, u_int m, u_int y, u_int h, u_int mm);
	
	/// <summary>
	/// Constructor que recibe Dia/Mes/A�o y objeto tipo Hora
	/// </summary>
	/// <param name=""></param>
	/// <param name=""></param>
	/// <param name=""></param>
	/// <param name=""></param>
	cFecha(u_int, u_int, u_int, Hora*);
	
	string tostring() const;
	void imprimir()   const;

private: 
	u_int d;
	u_int m;
	u_int y;
	Hora* hm;
};
#endif //FECHA_H