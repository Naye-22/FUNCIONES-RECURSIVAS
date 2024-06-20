/*
Fecha:20/6/2024
Autor: Nayeli Cruz
Orden: 
*/

#include <iostream>
using namespace std;

// Función recursiva para imprimir la tabla de multiplicar
void imprimirTabla(int tabla, int limite) {
    // Caso base: si el límite es 1, imprime la última multiplicación y retorna
    if (limite == 1) {
        cout << tabla << " x " << limite << " = " << tabla * limite << endl;
        return;
    }

    // Imprimir la multiplicación actual
    cout << tabla << " x " << limite << " = " << tabla * limite << endl;

    // Llamar a la función recursivamente con el límite decrementado
    imprimirTabla(tabla, limite - 1);
}

int main() {
    int tabla, limite;
    cout << "Ingrese el número de la tabla de multiplicar: ";
    cin >> tabla;
    cout << "Ingrese el límite superior de la tabla: ";
    cin >> limite;

    // Llamar a la función recursiva para imprimir la tabla
    imprimirTabla(tabla, limite);

    return 0;
}