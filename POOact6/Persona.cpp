//
// Created by agus_ on 2/9/2022.
//
#include "Persona.h"

void Persona::set_nombre(string nombre) {_nombre = nombre;}
void Persona::set_apellido(string apellido) {_apellido = apellido;}
void Persona::set_legajo(int legajo) {_legajo = legajo;}
string Persona::get_nombre() {return _nombre;}
string Persona::get_apellido() {return _apellido;}
int Persona::get_legajo() {return _legajo;}
void Persona::cargar() {
    cout << "Nombre:";
    cin >> this->_nombre;
    cout << "Apellido:";
    cin >> this->_apellido;
    cout << "Legajo:";
    cin >> this->_legajo;
}