//
// Created by agus_ on 3/9/2022.
//
#include "Alumno.h"

void Alumno::set_nota(int nota) {_nota = nota;}
int Alumno::get_nota() {return _nota;}
void Alumno::cargar() {
    int nota;
    Persona::cargar();
    cout << "Nota:";
    cin >> nota;
    this->set_nota(nota);
}