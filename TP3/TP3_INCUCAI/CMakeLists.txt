# CMakeList.txt : CMake project for TP3_INCUCAI, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("TP3_INCUCAI")

# Add source to this project's executable.
add_executable (
	TP3_INCUCAI "main.cpp" "global.h" "Fecha.h" "Hora.h" "INCUCAI.h" "Organo.h"
	"eEstado.h" "eGrupoSanguineo.h" "eSexo.h" "ePatologia.h" "ePrioridad.h" "eProvincia.h" "eOrganos.h"
	"CentroDeSalud.h" "Paciente.h" "Receptor.h" "Donante.h" "Vehiculos.h" "Ambulancia.h" "Helicoptero.h" "Avion.h"	
)
# TODO: Add tests and install targets if needed.
