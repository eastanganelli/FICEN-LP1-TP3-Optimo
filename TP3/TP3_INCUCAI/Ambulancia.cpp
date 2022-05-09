/**
 * Project TP3
 * @author Ezequiel Augusto Stanganelli
 * @version 1.0.0
 */
#include "Ambulancia.h"

Ambulancia::Ambulancia(string r, float t, u_int c, string color) : Vehiculos(r, t, c) {
    this->color = color;
}

string Ambulancia::tostring() const {
    return "iuiuiuiuiu";
}

void Ambulancia::imprimir()   const {
    cout << tostring() << endl;
}