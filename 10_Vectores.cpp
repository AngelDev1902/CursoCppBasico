#include <iostream>

using namespace std;

/*
    Cuando queremos almacenar multiples valores del mismo tipo, pero que se encuentran relacionados entre si,
    podemos hacer uso de los vectores. Estos son estructuras de datos que nos permiten almacenar multiples
    valores del mismo tipo, y acceder a ellos a traves de un indice. De esta manera, podemos almacenar
    multiples valores en una sola variable, y acceder a ellos de manera individual.

    Estos datos se almacenan es espacios de memoria contiguos, de manera que se puede acceder a ellos
    de manera secuencial. Permitiendo que se puedan recorrer los elementos del vector a traves de un
    bucle.

    Para declarar un vector, se debe indicar el tipo de dato que va a almacenar, el nombre del vector y
    el tamaño que va a tener. De esta manera, se le esta diciendo al compilador que reserve un espacio
    de memoria para almacenar los valores que se le van a asignar.

    int vector[5];

    Para acceder a los elementos del vector, se debe indicar el nombre del vector y el indice del elemento
    al que se quiere acceder. El indice del vector se encuentra entre corchetes, y va desde 0 hasta el tamaño
    del vector - 1. De esta manera, se le esta diciendo al compilador que acceda al espacio de memoria que
    se encuentra en esa posicion.
*/

int main() {

    // Declaracion de un vector
    int vector[5];

    // Asignacion de valores al vector
    vector[0] = 10;
    vector[1] = 20;
    vector[2] = 30;
    vector[3] = 40;
    vector[4] = 50;


    // Acceso a los elementos del vector
    cout << "El valor del primer elemento del vector es: " << vector[0] << endl;
    cout << "El valor del segundo elemento del vector es: " << vector[1] << endl;
    cout << "El valor del tercer elemento del vector es: " << vector[2] << endl;
    cout << "El valor del cuarto elemento del vector es: " << vector[3] << endl;
    cout << "El valor del quinto elemento del vector es: " << vector[4] << endl;
    
    // Declaracion e inicializacion de un vector
    int vector2[5] = {10, 20, 30, 40, 50};

    // Acceso a los elementos del vector mediante un bucle
    for (int i = 0; i < 5; i++) {
        cout << "El valor del elemento " << i << " del vector es: " << vector2[i] << endl;
    }

    return 0;
}