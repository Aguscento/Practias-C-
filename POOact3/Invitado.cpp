//
// Created by agus_ on 24/8/2022.
//
#include <iostream>
#include "Invitado.h"

Invitado::Invitado() {
    _nombre = "";
    _dni = 0;
    _ingreso = -1;
    _egreso = -1;
}

void Invitado::setNombre(string nombre) {
    _nombre = nombre;
}

void Invitado::setDni(int dni) {
    _dni = dni;
}

void Invitado::setIngreso(float ingreso) {
    _ingreso = ingreso;
}

void Invitado::setEgreso(float egreso) {
    _egreso = egreso;
}

int Invitado::getDni() {
    return _dni;
}

bool Invitado::getAsistencia() {
    return _ingreso != -1;
}

bool Invitado::estaPresente() {
    return _ingreso != -1 && _egreso == -1;
}

float Invitado::getIngreso() {
    return _ingreso;
}

float Invitado::getEgreso() {
    return _egreso;
}

string Invitado::getNombre() {
    return _nombre;
}