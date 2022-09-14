#include <iostream>
#include "Invitado.h"
#include "Evento.h"
using namespace std;

void Menu();

int main() {
    int const n = 5;
    Evento fiesta;
    string nombre;
    int opc, dni = -1;
    float ingreso, egreso;
    while (true) {
        Menu();
        cin >> opc;
        system("cls");
        switch (opc) {
            case 1:
                cout << "--------INVITADOS--------" << endl;
                fiesta.CargarInvitados(n);
                system("pause");
                break;
            case 2:
                cout << "---------INGRESO---------" << endl;
                cout << "DNI:";
                cin >> dni;
                while ( dni != 0) {
                    cout << "Ingreso:";
                    cin >> ingreso;
                    fiesta.Ingreso(dni, ingreso);
                    cout << "DNI:";
                    cin >> dni;
                }
                break;
            case 3:
                cout << "---------EGRESO---------" << endl;
                cout << "DNI:";
                cin >> dni;
                while ( dni != 0) {
                    cout << "Egreso:";
                    cin >> egreso;
                    fiesta.Egreso(dni, egreso);
                    cout << "DNI:";
                    cin >> dni;
                }
                break;
            case 4:
                cout << "--------INVITADOS--------" << endl;
                fiesta.mostrar_lista(n);
                system("pause");
                break;
            case 5:
                return 0;
            }
        }
}

void Menu(){
    system("cls");
    cout << "----------MENU----------" << endl;
    cout << "1- Cargar invitados" << endl;
    cout << "2- Ingreso de invitados" << endl;
    cout << "3- Egreso de invitados" << endl;
    cout << "4- Lista de invitados" << endl;
    cout << "5- Salir" << endl;
    cout << "OPCION:";
}


