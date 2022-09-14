#include <iostream>

using namespace std;

int main() {
    int pedido, pizza, localidad, cliente, cliente_local = 0;
    int const tam = 151, n =2, cant_pizzas = 10;
    int cliente_no_efectivo[tam] = {}, cliente_por_local[tam] = {};
    string pago;
    float importe, recaudado_pizza[cant_pizzas][n] = {};
    cout << "Numero de pedido:";
    cin >> pedido;
    while (pedido != 0){
        cout << "Numero de pizza:";
        cin >> pizza;
        cout << "Numero de localidad de envio:";
        cin >> localidad;
        cout << "Numero de cliente:";
        cin >> cliente;
        cout << "Forma de pago:";
        cin >> pago;
        cin.ignore();
        cout << "Importe:";
        cin >> importe;
        // punto A
        if (pago == "E"){
            cliente_no_efectivo[cliente-100] ++;
        }
        // punto B
        // 0 = E ;;; 1 = T
        if (pago == "E"){
            recaudado_pizza[pizza-1][0] += importe;
        } else{
            recaudado_pizza[pizza-1][1] += importe;
        }
        // punto C
        if (localidad == 0){
            cliente_por_local[cliente-100] = 1;
        }
        cout << "Numero de pedido:";
        cin >> pedido;
    }

    //punto A
    cout << "Los numeros de clientes que nunca hayan abonado con efectivo:" << endl;
    for (int i = 0; i < tam; ++i) {
        if (cliente_no_efectivo[i] == 0){
            cout << 100 + i << endl;
        }
    }
    //punto B
    cout << "Por cada tipo de pizza, el total recaudado en efectivo y el total recaudado en tarjeta:" << endl;
    for (int i = 0; i < cant_pizzas ; ++i) {
        cout << "Pizza " << i+1;
        for (int j = 0; j < n; ++j) {
            cout << " $" << recaudado_pizza[i][j];
        }
        cout << endl;
    }
    //punto c
    cout << "La cantidad de clientes distintos que hayan retirado al menos un pedido por el local:" << endl;
    for (int i = 0; i < tam; ++i) {
        if (cliente_por_local[i] == 1){
            cliente_local++;
        }
    }
    cout << cliente_local << endl;
    return 0;
}
