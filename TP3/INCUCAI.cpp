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

cINCUCAI::~cINCUCAI() {
    if (this->Trasplantados != NULL) {
        delete this->Trasplantados;
        this->Trasplantados = NULL;
    }
    if (this->Receptores != NULL) {
        delete this->Receptores;
        this->Receptores = NULL;
    }
    if (this->Donantes != NULL) {
        delete this->Donantes;
        this->Donantes = NULL;
    }
    if (this->CentrosHabilitados != NULL) {
        delete this->CentrosHabilitados;
        this->CentrosHabilitados = NULL;
    }
}

void cINCUCAI::RecibirPaciente(cPaciente* p) {
    try {
        if (p == NULL) throw new null_node();
    }
    catch (null_node& e) {
        cerr << e.what() << endl;
    } IngresarPaciente(p);
}

cListaReceptores* cINCUCAI::PosiblesReceptores(cOrgano* c, cDonante* d) {
    if (this->Donantes->getCA() > 0)
        return this->Receptores->obtenerReceptoresCompatibles(c, d);

    return NULL;
}

void cINCUCAI::IngresarPaciente(cPaciente* p) {
    if (dynamic_cast<cReceptor*>(p) != NULL) {
        cReceptor* r_ = dynamic_cast<cReceptor*>(p);
        (*Receptores) + r_;
    } else {
        cDonante* d_ = dynamic_cast<cDonante*>(p);
        (*Donantes).queue(d_);
    }
}

void cINCUCAI::InicioProtocolo(cReceptor* p, cDonante* d) {

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