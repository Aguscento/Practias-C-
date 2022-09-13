//
// Created by agus_ on 2/9/2022.
//

#include "Curso.h"

Curso::Curso() {_cantidad_alumnos = 0;}
void Curso::set_nombre(string nombre) {_nombre = nombre;}
void Curso::set_codigo(int codigo) {_codigo = codigo;}
void Curso::set_profesor(Profesor &profe) {_profesor = profe;}
string Curso::get_nombre() { return _nombre;}
int Curso::get_codigo() {return _codigo;}
Profesor Curso::get_profesor() {return _profesor;}
void Curso::cargar_vector_alumnos(Alumno &alumno) {
    if (_cantidad_alumnos < 3){
        _alumnos[_cantidad_alumnos] = alumno;
        _cantidad_alumnos++;
    }
}
Alumno Curso::mejor_alumno() {
    Alumno mejor_nota = _alumnos[0];
    for (int i = 1; i < 3; ++i) {
        if (_alumnos[i].get_nota() > mejor_nota.get_nota()){
            mejor_nota = _alumnos[i];
        }
    }
    return mejor_nota;
}
