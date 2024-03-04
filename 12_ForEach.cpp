#include <iostream>

using namespace std;

/*
    El bucle for each se introduce a partir del estandar c++11, y cumple la funcion de facilitar el acceso
    a los elementos de un vector, una matriz o una estructura de datos dinamica. Este bucle se encarga de recorrer 
    los elementos de la estructura por cada iteracion, asignando a una variable temporal el valor del elemento
    en la posicion actual. De esta manera, se puede acceder a los elementos de la estructura sin necesidad de
    indicar el indice del elemento al que se quiere acceder.
*/

int main() {
    int vector[5] = {10, 20, 30, 40, 50};

    // Acceso a los elementos del vector mediante un bucle
    // int i es la variable temporal que almacena el valor del elemento en la posicion actual (Debe ser del mismo tipo que el vector)
    // vector es el nombre del vector al que se le van a recorrer los elementos
    for (int i : vector) {
        cout << "El valor del elemento del vector es: " << i << endl;
    }
    
    int promedios[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    // Acceso a los elementos de la matriz mediante un bucle
    // en las matrices el bucle for each recorre las filas, creando un vector temporal que almacena los valores de la fila
    // para despues recorrer los elementos de ese vector temporal
    for (int (&fila)[5] : promedios) {
        for (int i : fila) {
            cout << "El valor del elemento de la matriz es: " << i << endl;
        }
    }

    return 0;
}