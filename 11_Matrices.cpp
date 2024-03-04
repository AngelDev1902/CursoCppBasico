#include <iostream>

using namespace std;

/*
    LAs matrices al igual que los vectores son estructuras de datos que nos permiten almacenar multiples
    valores del mismo tipo, pero a diferencia de los vectores, dentro de las matrices podemos almacenar
    valores en dos dimensiones, es decir, en filas y columnas. De esta manera podemos almacenar multiples
    valores en una sola variable, y acceder a ellos de manera individual.

    Para declarar una matriz, se debe indicar el tipo de dato que va a almacenar, el nombre de la matriz,
    el numero de filas y el numero de columnas que va a tener. 

    int matriz[3][5];

    donde 3 es el numero de filas y 5 es el numero de columnas.

    de manera grafica, una matriz se veria de la siguiente manera:

        1 2 3 4 5
    1 | 0 0 0 0 0 |
    2 | 0 0 0 0 0 |
    3 | 0 0 0 0 0 |

    Donde para acceder a los elementos se hace una combinacion de indices, el primero para la fila y el segundo
    para la columna.

*/

int main() {

    // Declaracion de una matriz
    int matriz[3][5];

    // Asignacion de valores a la matriz con dos bucles
    // El primer bucle recorre las filas
    for (int i = 0; i < 3; i++) {
        // El segundo bucle recorre las columnas
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = i + j;
        }
    }

    // Acceso a los elementos de la matriz

    // El primer bucle recorre las filas
    for (int i = 0; i < 3; i++) {
        // El segundo bucle recorre las columnas
        for (int j = 0; j < 5; j++) {
            cout << "El valor del elemento [" << i << "][" << j << "] de la matriz es: " << matriz[i][j] << endl;
        }
    }

    // Declaracion e inicializacion de una matriz
    int matriz2[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    cout << endl;
    // Acceso a los elementos de la matriz mediante dos bucles
    // El primer bucle recorre las filas
    for (int i = 0; i < 3; i++) {
        // El segundo bucle recorre las columnas
        for (int j = 0; j < 5; j++) {
            cout << "El valor del elemento [" << i << "][" << j << "] de la matriz es: " << matriz2[i][j] << endl;
        }
    }


    return 0;
}