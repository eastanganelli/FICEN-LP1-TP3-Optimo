/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "INCUCAI.h"

INUCAI::INUCAI() : direccion("Ramsay 2250, CABA"), telefono("11-2154-8518") {

}

INUCAI::INUCAI(string d = "Ramsay 2250, CABA", string t = "11-2154-8518") : direccion(d), telefono(t) {

}

void INUCAI::RecibirPaciente(Paciente* p) {
    return;
}

void INUCAI::Buscar() {

}

void INUCAI::InicioProtocolo() {

}

void INUCAI::AsignarVehiculo() {

}

string INUCAI::tostring() const {
    string o = "INCUCAI\nDireccion: " + this->direccion + "\nTelefono: " + this->telefono;
    return o;
}

void INUCAI::imprimir() const {
    cout << tostring() << endl;
}