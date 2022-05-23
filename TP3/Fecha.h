#ifndef FECHA_H
#define FECHA_H

#define MESES 12

#include "global.h"
#include "Meses.h"
#include <cstring>

class cFecha {
	time_t Fecha;

	/// <summary>
	/// Conversi�n de una Fecha en formato string al tipo time_t
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
	/// <param name="d">D�a</param>
	/// <param name="m">Mes</param>
	/// <param name="y">A�o</param>
	cFecha(string strtime);
	/// <summary>
	/// Constructor que recibe time_t
	/// </summary>
	/// <param name="t"></param>
	cFecha(time_t t);

	/// <summary>
	/// Devoluci�n de la fecha.
	/// </summary>
	/// <returns>Devuelve un time_t</returns>
	time_t getFecha() const;
	
	string tostring() const;
	void   imprimir() const;

	/// <summary>
	/// Obtenci�n de la fecha del d�a en hora local.
	/// </summary>
	/// <returns>Devuelve un time_t</returns>
	static time_t Hoy();

	/// <summary>
	/// Verifica si pas� el tiempo limite del organo antes de poder ser trasplantado.
	/// </summary>
	/// <param name="recibido">Fecha que se recibid�o</param>
	/// <param name="ablado">fecha de la ablaci�n</param>
	/// <returns>
	/// True: Si est� dentro del tiempo limite.
	/// False:Si no est� dentro del tiempo limite.
	/// </returns>
	static bool OrganoTrasplantable(time_t recibido, time_t ablado);
};
#endif //FECHA_H