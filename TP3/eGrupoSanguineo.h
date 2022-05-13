/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#ifndef EGRUPOSANGUINEO_H
#define EGRUPOSANGUINEO_H

#include "global.h"

namespace eGrupoSanguineo {
	enum class Grupo;

	string convertGrupoString(Grupo i);

	bool compatibilidad(Grupo d, Grupo r);
}
#endif //EGRUPOSANGUINEO_H