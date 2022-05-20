/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef FECHA_H
#define FECHA_H

#define MESES 12

#include "global.h"
#include "Meses.h"
#include <cstring>

class cFecha {
public:
	/// <summary>
	/// Constructor que recibe string de fecha
	/// ie: 31/05/1995 12:12
	/// </summary>
	/// <param name="d"></param>
	/// <param name="m"></param>
	/// <param name="y"></param>
	cFecha(string strtime);
	/// <summary>
	/// Constructor que recibe time_t
	/// </summary>
	/// <param name="d"></param>
	/// <param name="m"></param>
	/// <param name="y"></param>
	cFecha(time_t t);

	time_t getFecha() const;
	
	string tostring() const;
	void   imprimir() const;

	/// <summary>
	/// Obtención de la fecha del día en hora local
	/// </summary>
	/// <returns>string</returns>
	static time_t Hoy();

	/// <summary>
	/// Verifica si pasó el tiempo limite del organo antes de poder ser trasplantado
	/// </summary>
	/// <param name="recibido"></param>
	/// <param name="ablado"></param>
	/// <returns></returns>
	static bool OrganoTrasplantable(time_t recibido, time_t ablado);

private: 
	time_t Fecha;

	/// <summary>
	/// Conversión de una Fecha en formato string al tipo time_t
	/// </summary>
	/// <see href="https://www.geeksforgeeks.org/convert-string-char-array-cpp/">String to char</see>
	/// <seealso href="https://stackoverflow.com/questions/11213326/how-to-convert-a-string-variable-containing-time-to-time-t-type-in-c">Char array to time_t</seealso>
	/// <param name="strTime"></param>
	/// <returns>time_t</returns>
	time_t StringToTime(string strTime);
};
#endif //FECHA_H