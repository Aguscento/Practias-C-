//
// Created by agus_ on 15/7/2022.
//
#include <iostream>
#include "funciones.h"

using namespace std;

void votacion(int vector[], int tam){
    int uno=0, dos=0, tres=0, cuatro=0, cinco=0, mayor;
    for (int i = 0; i < tam; ++i) {
        if (vector[i] == 1){
            uno++;
        }
        if (vector[i] == 2){
            dos++;
        }
        if (vector[i] == 3){
            tres++;
        }
        if (vector[i] == 4){
            cuatro++;
        }
        if (vector[i] == 5){
            cinco++;
        }
    }
    mayor = uno;
    if (dos > mayor){
        mayor = dos;
    } else{
        if (tres > mayor){
            mayor = tres;
        } else{
            if (cuatro > mayor){
                mayor = cuatro;
            } else{
                if (cinco > mayor){
                    mayor = cinco;
                }
            }
        }
    }
    if (mayor == uno){
        if (mayor == dos || mayor == tres || mayor == cuatro || mayor == cinco){
            cout << "Segunda vuela";
        }else{
            cout << "Presidente electo";
        }
    } else{
        if (mayor == dos){
            if (mayor == uno || mayor == tres || mayor == cuatro || mayor == cinco){
                cout << "Segunda vuela";
            }else{
                cout << "Presidente electo";
            }
        } else{
            if (mayor == tres){
                if (mayor == dos || mayor == uno || mayor == cuatro || mayor == cinco){
                    cout << "Segunda vuela";
                }else{
                    cout << "Presidente electo";
                }
            } else{
                if (mayor == cuatro){
                    if (mayor == dos || mayor == tres || mayor == uno || mayor == cinco){
                        cout << "Segunda vuela";
                    }else{
                        cout << "Presidente electo";
                    }
                } else{
                    if (mayor == cinco){
                        if (mayor == dos || mayor == tres || mayor == cuatro || mayor == uno){
                            cout << "Segunda vuela";
                        }else{
                            cout << "Presidente electo";
                        }
                    }
                }
            }
        }
    }
}