#include <iostream>

using namespace std;

/*
 * Las variables son espacios de memoria que se utilizan para almacenar valores de diferentes tipos.
 * la forma de declarar una variable es:
 * tipo_de_dato nombre_de_la_variable {valor (opcional)};
 *
 * Dentro de c++ se maneja el sensibility case, es decir, diferencia entre mayusculas y minusculas
 * por lo que la variable "nombre" es diferente a "Nombre"
 * */

int main() {
    // Declaración de variables
    int a{0}, b{0};
    int result{0};

    // Proceso
    a = 5;
    b = 2;
    a = a + 1;
    result = a + b;

    // Salida
    cout << result;

    a = 8;
    b = a;
    result = a + b;

    return 0;
}