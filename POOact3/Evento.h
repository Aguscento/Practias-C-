//
// Created by agus_ on 26/8/2022.
//
#ifndef POOACT3_EVENTO_H
#define POOACT3_EVENTO_H
#include "Invitado.h"
#include "string"

using namespace std;

class Evento {
private:
    Invitado _invitados[5];
public:
    Evento();
    void CargarInvitados (int n);
    void Ingreso(int dni, float hora);
    void Egreso(int dni, float hora);
    void mostrar_lista (int n);
    Invitado* BuscarInvitado (int dni);
};

#endif //POOACT3_EVENTO_H
