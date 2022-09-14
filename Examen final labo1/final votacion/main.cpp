#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
    int const socios = 1455;
    int vector[socios] ={};
    for (int i = 0; i < socios; ++i) {
        cout << "Ingrese su voto:";
        cin >> vector[i];
    }
    votacion(vector, socios);
    return 0;
}
