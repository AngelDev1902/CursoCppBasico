#include <iostream>

using namespace std;

/*
 * La estructura de control switch es una estructura de control de flujo que permite ejecutar un bloque de código
 * dependiendo del valor de una variable. La variable debe ser de tipo entero, caracter o enumerado.
 *
 * su sintaxis es la siguiente:
 * switch (variable) {
 *     case valor1:
 *         // bloque de código
 *         break;
 *     case valor2:
 *         // bloque de código
 *         break;
 *     case valor3:
 *         // bloque de código
 *         break;
 *     default:
 *         // bloque de código
 * }
 * */

int main() {
    int a{5};

    switch (a) {
        case 0:
            cout << "a es igual a 0" << endl;
            break;
        case 1:
            cout << "a es igual a 1" << endl;
            break;
        case 2:
            cout << "a es igual a 2" << endl;
            break;
        case 3:
            cout << "a es igual a 3" << endl;
            break;
        case 4:
            cout << "a es igual a 4" << endl;
            break;
        case 5:
            cout << "a es igual a 5" << endl;
            break;
        default:
            cout << "a es mayor que 5" << endl;
    }

    // A partir de C++17 se pueden declarar variables en la condicion del switch para limitar su alcance
    switch (int b{10}; b) {
        case 0:
            cout << "b es igual a 0" << endl;
            break;
        case 1:
            cout << "b es igual a 1" << endl;
            break;
        case 2:
            cout << "b es igual a 2" << endl;
            break;
        case 3:
            cout << "b es igual a 3" << endl;
            break;
        case 4:
            cout << "b es igual a 4" << endl;
            break;
        case 5:
            cout << "b es igual a 5" << endl;
            break;
        default:
            cout << "b es mayor que 5" << endl;
    }

    switch (char c{'a'}; c) {
        case 'a':
            cout << "c es igual a 'a'" << endl;
            break;
        case 'b':
            cout << "c es igual a 'b'" << endl;
            break;
        case 'c':
            cout << "c es igual a 'c'" << endl;
            break;
        default:
            cout << "c no es igual a 'a', 'b' o 'c'" << endl;
    }

    return 0;
}