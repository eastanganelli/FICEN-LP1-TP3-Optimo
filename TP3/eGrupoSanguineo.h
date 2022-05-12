/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */

#include "global.h"
#include "Paciente.h"

#ifndef EGRUPOSANGUINEO_H
#define EGRUPOSANGUINEO_H

namespace eGrupoSanguineo {
	enum class Grupo;

	string convertGrupoString(Grupo i);

	bool compatibilidad(Grupo d, Grupo r);
}
#endif //EGRUPOSANGUINEO_H