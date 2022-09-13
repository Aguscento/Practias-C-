//
// Created by agus_ on 3/9/2022.
//
#pragma once
#ifndef POOACT6_ALUMNO_H
#define POOACT6_ALUMNO_H
#include "Persona.h"

class Alumno: public Persona {
private:
    int _nota;
public:
    void set_nota(int nota);
    int get_nota();
    void cargar();
};


#endif //POOACT6_ALUMNO_H
