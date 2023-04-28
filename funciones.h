#include<iostream>
#include<string>
#include<map>

using namespace std;

map<string, float> ventasPorOperadora;
float totalVenta = 0;

void registrarVenta(float monto, string operadora){
    if (monto > 500){
        monto = monto * 0.97;
    }
    ventasPorOperadora[operadora] += monto;
    totalVenta += monto;
    cout << "Venta registrada correctamente" << endl;
}

void mostrarTotalVenta(){
    cout << "Total de venta de recarga: C$ " << totalVenta << endl;
}

void mostrarTotalVentaPorOperadora(){
    cout << "Total de venta de recarga por operadora: " << endl;
    for (auto it = ventasPorOperadora.begin(); it != ventasPorOperadora.end(); it++){
        cout << it->first << ": C$ " << it->second << endl;
    }
}