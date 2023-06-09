#include<iostream>
#include<string>
#include "funciones.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;
    float monto;
    string operadora;
    bool seguir = true;

    while (seguir){
        cout << "MENU" << endl;
        cout << "1, Registrar ventas de recarga" << endl;
        cout << "2, Mostrar total de ventas de recarga" << endl;
        cout << "3, Mostrar venta de recarga por operadora" << endl;
        cout << "4, salir" << endl;
        cout << "Ingresar opcion:  ";
        cin >> opcion;

        switch (opcion){
        case 1:
            cout << "Ingrese el monto de recarga: ";
            cin >> monto;
            cout << "Ingrese la operadora(Tigo o Claro)";
            cin >> operadora;
            registrarVenta(monto, operadora);
            break;
        case 2:
                mostrarTotalVenta();
                break;
        case 3:
                mostrarTotalVentaPorOperadora();
                break;
        case 4:
                seguir = false;
                break;
        
        default:
         cout << "Opcion invalida" << endl;
            break;
        }
        cout << endl;


    }
    
    return 0;
}

