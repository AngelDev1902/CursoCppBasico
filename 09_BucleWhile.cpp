#include <iostream>

using namespace std;

/*
    El bucle while es una estructura de control que permite repetir un bloque de codigo mientras se cumpla una
    condicion. Si la condicion no se cumple el bloque de codigo no se ejecuta.

    while (condicion) {
        // bloque de codigo
    }

    La condicion es una expresion que devuelve un valor booleano (true o false). Si la condicion es verdadera

    adicional existe la estructura do-while que es similar a while pero la condicion se evalua al final del bloque
    de codigo, por lo que el bloque de codigo se ejecuta al menos una vez.
*/

int main() {
    int a{10};

    while (a >= 10) {
        cout << "Ingrese un valor para a: ";
        cin >> a;
    }

    cout << "a: " << a << endl;

    do{
        cout << "Ingrese un valor para a: ";
        cin >> a;
    } while (a >= 15);

    cout << "a: " << a << endl;

    return 0;
}