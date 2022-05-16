/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "INCUCAI.h"

cINCUCAI::cINCUCAI() : direccion("Ramsay 2250, CABA"), telefono("11-2154-8518") {
    this->Trasplantados      = NULL;
    this->Receptores         = NULL;
    this->Donantes           = NULL;
    this->CentrosHabilitados = NULL;
}

cINCUCAI::cINCUCAI(string d = "Ramsay 2250, CABA", string t = "11-2154-8518") : direccion(d), telefono(t) {
    this->Trasplantados      = NULL;
    this->Receptores         = NULL;
    this->Donantes           = NULL;
    this->CentrosHabilitados = NULL;
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
        cReceptor* r_ = dynamic_cast<cReceptor*>(p);
        (*Receptores) + r_;
    } else {
        cDonante* d_ = dynamic_cast<cDonante*>(p);
        (*Donantes) + d_;
    }
}

void cINCUCAI::Buscar() {

}

void cINCUCAI::InicioProtocolo() {

}

void cINCUCAI::AsignarVehiculo() {

}

u_int cINCUCAI::PosicionEspera(cPaciente* p) {
    u_int pos = 0;
    try {
        if (dynamic_cast<cReceptor*>(p) == NULL) throw exception();

        pos = Receptores->posicionPaciente(dynamic_cast<cReceptor*>(p));
    }
    catch (out_list& e) {
        cerr << e.what() << endl;
        pos = 0;
    }
    catch (exception) {
        cerr << "No es un paciente receptor" << endl;
        pos = 0;
    }

    return pos;
}

string cINCUCAI::tostring() const {
    string o = "ccINCUCAI\nDireccion: " + this->direccion + "\nTelefono: " + this->telefono;
    return o;
}

void cINCUCAI::imprimir() const {
    cout << tostring() << endl;
}