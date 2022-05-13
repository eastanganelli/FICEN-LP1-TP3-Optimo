/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "INCUCAI.h"

cINCUCAI::cINCUCAI() : direccion("Ramsay 2250, CABA"), telefono("11-2154-8518") {
    this->trasplantados = NULL;
    this->Receptores    = NULL;
    this->Donantes      = NULL;
}

cINCUCAI::cINCUCAI(string d = "Ramsay 2250, CABA", string t = "11-2154-8518") : direccion(d), telefono(t) {
    this->trasplantados = NULL;
    this->Receptores    = NULL;
    this->Donantes      = NULL;
}

void cINCUCAI::RecibirPaciente(cPaciente* p) {
    try {
        if (p == NULL) throw new exception;
    }
    catch (...) {
        cerr << "El paciente recibido no existe" << endl;
    }

    IngresarPaciente(p);

}

void cINCUCAI::IngresarPaciente(cPaciente* p) {
    if (dynamic_cast<cReceptor*>(p) != NULL) {

    }
    else {

    }
}

void cINCUCAI::Buscar() {

}

void cINCUCAI::InicioProtocolo() {

}

void cINCUCAI::AsignarVehiculo() {

}

string cINCUCAI::tostring() const {
    string o = "ccINCUCAI\nDireccion: " + this->direccion + "\nTelefono: " + this->telefono;
    return o;
}

void cINCUCAI::imprimir() const {
    cout << tostring() << endl;
}