#include <iostream>
using namespace std;
#include <string>

int main (){
    string pais, medallista_oro;
    const int tipo_medallas = 3; // oro plata bronce
    int v[tipo_medallas] = {}, mayor = 0,cont = 0, uru;
    cout << "Nombre de pais: ";
    getline(cin, pais);
    while(pais != "fin"){
        cout << "Medallas de oro: ";
        cin >> v[0];
        cout << "Medallas de plata: ";
        cin >> v[1];
        cout << "Medallas de bronce: ";
        cin >> v[2];
        cin.ignore();
        cout << "==============================" << endl;
        // punto a
        if(v[0] != 0){
            if(mayor < v[0]){
                mayor = v[0];
                medallista_oro = pais;
            }
        }
        // punto b
        for(int i=0; i<tipo_medallas; i++){
            if(v[i] > 0){
                cont++;
            }
        }
        // punto c
        if(pais == "uruguay"){
            uru = v[0] + v[1] + v[2];
        }
        cout << "Nombre de pais: ";
        getline(cin, pais);
    }
    cout << endl << "Pais con mas oro: " << medallista_oro << " con " << mayor << " medallas de oro." << endl;
	cout << endl << "Cantidad de paises con medallas: " << cont << endl;
	cout << endl << "Medallas de uruguay: " << uru;
	return 0;
}
