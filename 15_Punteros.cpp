#include <iostream>

using namespace std;

/*
 * Los punteros funcionan como una variable comun, pero a diferencia de las variables que ya hemos visto
 * los punteros almacenan la direccion de memoria de otra variable, de manera que accede directamente
 * a su ubicacion dentro de la ram y puede acceder a su valor.
 *
 * - los punteros se declaran con un * antes del nombre de la variable
 *
 * - su valor debe ser una direccion de memoria, para acceder a una direccion de memoria
 *   se debe colocar el simbolo & seguido del nombre de la variable de la cual queremos
 *   obtener la direccion de memoria
 *
 * - para acceder al valor de la variable a la que apunta nuestro puntero se hace
 *   anteponiendo el signo * seguido del puntero
 * */

int main() {
	int n = 10;

	int *puntero = &n;

	cout << &n << endl; // direccion de memoria de la variable que queremos 
	cout << puntero << endl; // direccion de memoria que almacena
	cout << *puntero << endl; // valor de la variable a la que apunta
	cout << &puntero << endl; // direccion de memoria del mismo puntero

	return 0;
}
