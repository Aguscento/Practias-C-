//
// Created by agus_ on 2/9/2022.
//
#pragma once
#ifndef POOACT6_PERSONA_H
#define POOACT6_PERSONA_H
#include <string>
#include <iostream>
using namespace std;

class Persona {
private:
    string _nombre, _apellido;
    int _legajo;
public:
    void set_nombre(string nombre);
    void set_apellido(string apellido);
    void set_legajo(int legajo);
    string get_nombre();
    string get_apellido();
    int get_legajo();
    void cargar();
};


#endif //POOACT6_PERSONA_H
