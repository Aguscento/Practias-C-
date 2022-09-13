//
// Created by agus_ on 2/9/2022.
//
#pragma once
#ifndef POOACT6_PROFESOR_H
#define POOACT6_PROFESOR_H
#include <iostream>
#include "Persona.h"

class Profesor: public Persona{
private:
    string _titulo;
public:
    void set_titulo(string titulo);
    string get_titulo();
    void cargar();
};


#endif //POOACT6_PROFESOR_H
