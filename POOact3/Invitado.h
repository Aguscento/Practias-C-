//
// Created by agus_ on 24/8/2022.
//

#ifndef POOACT3_INVITADO_H
#define POOACT3_INVITADO_H
#include <string>

using namespace std;

class Invitado {
private:
    int _dni;
    string _nombre;
    float _ingreso;
    float _egreso;
public:
    Invitado();
    string getNombre();
    bool estaPresente();
    float getIngreso();
    float getEgreso();
    int getDni();
    bool getAsistencia();
    void setNombre(string);
    void setDni(int );
    void setIngreso(float );
    void setEgreso(float );
    void setEstado(bool );

};


#endif //POOACT3_INVITADO_H
