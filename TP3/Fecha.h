/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef CFECHA_H
#define CFECHA_H

#include "global.h"
#include <cstring>

class cFecha {
public:
	/// <summary>
	/// Constructor que recibe Dia/Mes/Año
	/// </summary>
	/// <param name="d"></param>
	/// <param name="m"></param>
	/// <param name="y"></param>
	cFecha(string strtime);
	
	string tostring() const;
	void imprimir()   const;

	/// <summary>
	/// Conversión de una Fecha en formato string al tipo time_t
	/// </summary>
	/// <see href="https://www.geeksforgeeks.org/convert-string-char-array-cpp/">String to char</see>
	/// <seealso href="https://stackoverflow.com/questions/11213326/how-to-convert-a-string-variable-containing-time-to-time-t-type-in-c">Char array to time_t</seealso>
	/// <param name="strTime"></param>
	/// <returns>time_t</returns>
	static time_t StringToTime(string strTime);

private: 
	string strTime;
};
#endif //FECHA_H