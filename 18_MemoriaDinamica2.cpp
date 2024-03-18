#include <iostream>

using namespace std;

/*
 * A pesar de que el uso de malloc aun es vigente, es mucho mas recomendable el manejo de memoria dinamica actual, 
 * con los ultimos estandares, esto es mediante el uso de new y delete
 * */

int main() {
	
	int n;
	int *numeros;

	cout << "Ingrese una cantidad: ";
	cin >> n;

	// asignamos memoria dinamicamente
	numeros = new int[n];

	cout << endl;
	for (size_t i{0}; i < n; i++) {
		cout << "Ingrese un numero: ";
		cin >> numeros[i];
	}

	cout << "\nNumeros Ingresados: " << endl;
	for (size_t i{0}; i < n; i++) {
		cout << numeros[i] << endl;
	}

	// liberamos la memoria
	delete [] numeros;

	/*
	 * El uso de new y delete ofrece: 
	 * - garantiza que la memoria asignada esta inicializada correctamente, por lo que evita contenido basura
	 * - soporta la asignacion de memoria para objetos
	 * Sin embargo es necesario conciderar que:
	 * - siempre se debe liberar la memoria asignada con new mediante el uso de delete o delete [] para arreglos
	 * - no se debe utilizar delete en punteros que no hayan sido asignados dinamicamente con new
	 * */

	return 0;
}
