#include <iostream>

using namespace std;

/*
 * El operador ternario es un operador condicional que se utiliza para tomar decisiones en una sola linea.
 * returnando o ejecutando un bloque de codigo u otro dependiendo de una condicion.
 * */

int main() {
    int edad = 18;

    // Operador ternario
    bool esMayorDeEdad = (edad >= 18) ? true : false;
    cout << "Es mayor de edad: " << esMayorDeEdad << endl;

    int a = 5, b = 2;

    // Operador ternario
    string mensaje = (a == b) ? "a es igual a b" : (a > b) ? "a es mayor que b" : "a es menor que b";
    cout << mensaje << endl;

    return 0;
}