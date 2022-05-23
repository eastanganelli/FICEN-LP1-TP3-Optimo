#ifndef FECHA_H
#define FECHA_H

#define MESES 12

#include "global.h"
#include "Meses.h"
#include <cstring>

class cFecha {
	time_t Fecha;

	/// <summary>
	/// Conversión de una Fecha en formato string al tipo time_t
	/// </summary>
	/// <see href="https://www.geeksforgeeks.org/convert-string-char-array-cpp/"/>
	/// <seealso href="https://stackoverflow.com/questions/11213326/how-to-convert-a-string-variable-containing-time-to-time-t-type-in-c"/>
	/// <param name="strTime"></param>
	/// <returns>time_t</returns>
	time_t StringToTime(string strTime);	
	
public:
	/// <summary>
	/// Constructor que recibe string de fecha.
	/// ie: 31/05/1995 12:12
	/// </summary>
	/// <param name="d">Día</param>
	/// <param name="m">Mes</param>
	/// <param name="y">Año</param>
	cFecha(string strtime);
	/// <summary>
	/// Constructor que recibe time_t
	/// </summary>
	/// <param name="t"></param>
	cFecha(time_t t);

	/// <summary>
	/// Devolución de la fecha.
	/// </summary>
	/// <returns>Devuelve un time_t</returns>
	time_t getFecha() const;
	
	string tostring() const;
	void   imprimir() const;

	/// <summary>
	/// Obtención de la fecha del día en hora local.
	/// </summary>
	/// <returns>Devuelve un time_t</returns>
	static time_t Hoy();

	/// <summary>
	/// Verifica si pasó el tiempo limite del organo antes de poder ser trasplantado.
	/// </summary>
	/// <param name="recibido">Fecha que se recibidío</param>
	/// <param name="ablado">fecha de la ablación</param>
	/// <returns>
	/// True: Si está dentro del tiempo limite.
	/// False:Si no está dentro del tiempo limite.
	/// </returns>
	static bool OrganoTrasplantable(time_t recibido, time_t ablado);
};
#endif //FECHA_H