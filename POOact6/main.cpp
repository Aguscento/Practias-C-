#include <iostream>
#include "Curso.h"
int main() {
    int opc;
    Curso curso[3];
    Profesor profe;
    Alumno estudiante;
    while (true){
        cout << "1 - CARGAR PROFESOR" << endl;
        cout << "2 - CARGAR ALUMNO" << endl;
        cout << "3 - ESTADISTICA" << endl;
        cout << "---------------------" << endl;
        cout << "0 - SALIR" << endl;
        cin >> opc;
        system("cls");
        switch (opc) {
            case 1:
                for (int i = 0; i < 3; ++i) {
                    cout << "Profesor curso #" << i << ":" << endl;
                    profe.cargar();
                    curso[i].set_profesor(profe);
                }
                system("cls");
                break;
            case 2:
                for (int i = 0; i < 3; ++i) {
                    cout << "Alumnos curso #" << i << ":" << endl;
                    estudiante.cargar();
                    curso[i].cargar_vector_alumnos(estudiante);
                }
                system("cls");
                break;
            case 3:
                for (int i = 0; i < 3; ++i) {
                    cout << "Profesor:" << curso[i].get_profesor().get_nombre() << " " << curso[i].get_profesor().get_apellido() << endl;
                    cout << "Mejor alumno:" << curso[i].mejor_alumno().get_nombre() << " " << curso[i].mejor_alumno().get_apellido() << " con nota:" << curso[i].mejor_alumno().get_nota();
                }
                system("pause");
                break;
            case 0:
                return 0;
        }
    }
}
