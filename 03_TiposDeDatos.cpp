#include <iostream>

using namespace std;

/*
 * Los tipos de datos son un conjunto de valores que se pueden almacenar en una variable.
 * Cada tipo de dato tiene un rango de valores que puede almacenar y un tamaño en memoria.
 * Y cada tipo de dato tiene un conjunto de operaciones que se pueden realizar con el.
 *
 * Los tipos de datos se dividen en dos categorias:
 * - Tipos de datos primitivos
 * - Tipos de datos compuestos
 *
 * Los tipos de datos primitivos son aquellos que no se pueden descomponer en otros tipos de datos.
 * Los tipos de datos compuestos son aquellos que se pueden descomponer en otros tipos de datos.
 * */

int main() {
    /* TIPOS NUMERICOS */

    // int (entero) - 4 bytes - rango de -2,147,483,648 a 2,147,483,647
    int entero{10};

    // short (entero corto) - 2 bytes - rango de -32,768 a 32,767
    short corto{10};

    // long (entero largo) - 4 bytes - rango de -2,147,483,648 a 2,147,483,647
    long largo{10};

    // long long (entero largo largo) - 8 bytes - rango de -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
    long long largo_largo{10};

    // float (flotante) - 4 bytes - rango de 1.2E-38 a 3.4E+38
    float flotante{10.5};

    // double (doble) - 8 bytes - rango de 2.3E-308 a 1.7E+308
    double doble{10.5};

    // long double (doble largo) - 12 bytes - rango de 3.4E-4932 a 1.1E+4932
    long double doble_largo{10.5};

    /* TIPOS DE DATOS CARACTER */

    // char (caracter) - 1 byte - rango de -128 a 127
    char caracter{'a'};

    // string (cadena de caracteres) - 1 byte por cada caracter
    string cadena{"Hola mundo"};

    /* TIPOS DE DATOS BOOLEANOS */

    // bool (booleano) - 1 byte - rango de true o false
    bool booleano{true};

    return 0;
}