#include <iostream>

using namespace std;

/*
    Las funciones son bloques de codigo que tienen como fin realizar una tarea especifica. Estas pueden
    recibir parametros y devolver un valor. de manera que el codigo dentro de la funcion se mantiene estatico
    permitiendo que arroje diferentes resultados dependiendo de los parametros que reciba. De ahi su
    reutilizacion. Estas poseen un ciclo de vida dividido en tres partes: declaracion, definicion y llamada.

    Dentro de c++ al querer crear una funcion, esta se debe declarar primero, antes del metodo main, indicando
    el tipo de dato que va a devolver, el nombre de la funcion y los parametros que va a recibir. Esto con el fin
    de que al momento de que el compilador lea el metodo main, ya sepa que existe una funcion con ese nombre y
    que recibe esos parametros. En otras palabras, se le esta diciendo al compilador que mas adelante va a encontrar
    una funcion con ese nombre y que recibe esos parametros, verificando asi que en su llamada se le pasen los
    parametros correctos.  

    La definicion de la funcion se realiza despues del metodo main, indicando el tipo de dato que va a devolver,
    el nombre de la funcion y los parametros que va a recibir. En esta parte se escribe el codigo que va a realizar
    la tarea que se espera de la funcion.

    La llamada de la funcion se realiza dentro del metodo main, indicando el nombre de la funcion y los parametros
    que va a recibir. En esta parte se le pasa a la funcion los parametros que va a recibir, y en caso de que la
    funcion devuelva un valor, este se puede almacenar en una variable.
*/

// Declaracion de la funcion
int suma(int a, int b);

int main() {
    int a{10}, b{20};

    // Llamada de la funcion
    cout << "La suma de " << a << " y " << b << " es: " << suma(a, b) << endl;

    return 0;
}

// Definicion de la funcion
int suma(int a, int b) {
    return a + b;
}