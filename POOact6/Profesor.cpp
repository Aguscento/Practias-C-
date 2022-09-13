//
// Created by agus_ on 2/9/2022.
//

#include "Profesor.h"

void Profesor::set_titulo(string titulo) {_titulo = titulo;}
string Profesor::get_titulo() {return _titulo;}
void Profesor::cargar() {
    Persona::cargar();
    cout << "Titulo:";
    cin >> this->_titulo;
}

