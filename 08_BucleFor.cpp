#include <iostream>

using namespace std;

/*
 * La estructura de control for es una estructura de control de flujo que permite repetir un bloque de código un número
 * determinado de veces. La estructura de control for es muy útil cuando se conoce el número de veces que se desea repetir
 * un bloque de código.
 *
 * su sintaxis es la siguiente:
 * for (inicialización; condición; actualización) {
 *    // bloque de código
 * }
 * */

int main() {
    // mostrar la tabla del 5
    for (int i = 1; i <= 10; i++) {
        cout << "5 x " << i << " = " << 5 * i << endl;
    }

    // mostrar todas las tablas
    for (int i = 1; i <= 10; i++) {
        cout << "\nTabla del " << i << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }

    return 0;
}