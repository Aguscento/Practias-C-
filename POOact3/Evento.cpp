//
// Created by agus_ on 26/8/2022.
//
#include <iostream>
#include "Evento.h"

Evento::Evento() {}

void Evento::CargarInvitados(int n) {
    string nombre;
    int dni;
    for (int i = 0; i < n; ++i) {
        cin.ignore();
        cout << "Nombre:";
        getline(cin, nombre);
        cout << "DNI:";
        cin >> dni;
        _invitados[i].setNombre(nombre);
        _invitados[i].setDni(dni);
    }
}

Invitado* Evento::BuscarInvitado(int dni) {
    for (int i = 0; i < 5; ++i) {
        if (dni == _invitados[i].getDni()){
            return &_invitados[i];
        }
    }
}

void Evento::Ingreso(int dni, float hora) {
    BuscarInvitado(dni)->setIngreso(hora);
}

void Evento::Egreso(int dni, float hora) {
    Invitado* invitado = this -> BuscarInvitado(dni);
    invitado->setEgreso(hora);
}

void Evento::mostrar_lista(int n) {
    for (int i = 0; i < n; ++i) {
        cout << _invitados[i].getNombre() << ":" << endl;
        if (_invitados[i].getAsistencia()){
            cout << "Fue al evento." << endl;
        } else cout << "No fue al evento." << endl;
        if (_invitados[i].estaPresente()){
            cout << "Esta en el evento" << endl;
        } else cout << "Ya no esta en el evento" << endl;
        if (_invitados[i].getAsistencia() && !(_invitados[i].estaPresente())){
            cout << "Estuvo " << (_invitados[i].getEgreso() - _invitados[i].getIngreso()) << " horas." << endl;
        } else cout << "---" << endl;
    }
}