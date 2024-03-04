#include <iostream>

using namespace std;

/*
 * Las estructuras de control condicionales nos permiten tomar decisiones en nuestro programa. De forma
 * que dependiendo de distintas condiciones se ejecutara un bloque de codigo u otro. manipulando el flujo
 * de ejecucion del programa.
 * */

int main() {
    int a = 5, b = 2;

    if (a == 0 && b == 0) {
        cout << "a y b son iguales a 0" << endl;
    } else if (a == 0 || b == 0) {
        cout << "a o b son iguales a 0" << endl;
    } else {
        if (a == b) {
            cout << "a es igual a b" << endl;
        } else if (a > b) {
            cout << "a es mayor que b" << endl;
        } else {
            cout << "a es menor que b" << endl;
        }
    }

    // A partir de C++17 se pueden declarar variables en la condicion del if para limitar su alcance
    if (int c{10}; c > 5) {
        cout << "c es mayor que 5" << endl;
    }

    return 0;
}