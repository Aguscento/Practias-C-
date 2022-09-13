//
// Created by agus_ on 2/9/2022.
//
#pragma once
#ifndef POOACT6_CURSO_H
#define POOACT6_CURSO_H
#include <string>
#include "Profesor.h"
#include "Alumno.h"
using namespace std;

class Curso {
private:
    int _codigo;
    string _nombre;
    Profesor _profesor;
    Alumno _alumnos[3];
    int _cantidad_alumnos;
public:
    Curso();
    void set_codigo(int codigo);
    void set_nombre(string nombre);
    void set_profesor(Profesor &profe);
    Profesor get_profesor();
    int get_codigo();
    string get_nombre();
    void cargar_vector_alumnos(Alumno &alumno);
    Alumno mejor_alumno();
};


#endif //POOACT6_CURSO_H
