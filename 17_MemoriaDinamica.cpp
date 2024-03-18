#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * el mamenjo de memoria dinamica resuelve el problema de crear arreglos o matrices
 * con dimensiones predeterminadas, es decir, evita que sea necesario establecer el tamaño
 * de la estructura al momento de su creacion
 * */

int main() {
	// declaramos un puntero que funcionara como nuestro arreglo
	int *numeros;
	// una variable para almacenar la cantidad de espacio que reservaremos
	int n;

	cout << "Ingrese la cantidad de numeros que desea: ";
	cin >> n;
	cout << endl;

	// esto se realiza mediante la funcion malloc
	/*
	 * sizeof obtiene el tamaño en bytes de lo que le pasemos por parametro, 
	 * esto lo multiplica por la cantidad que le indiquemos, malloc 
	 * reserva un bloque de memoria de la cantidad especificada 
	 * y finalmente indica que tipo de dato se alacenara en los espacios reservados, 
	 * este bloque se asigna a nuestro puntero, que se convierte en un array
	 * */
	numeros = (int *) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		cout << "Ingrese un numero: ";
		cin >> numeros[i];
	}

	cout << "Numeros Ingresados: " << endl;

	for (int i = 0; i < n; i++) {
		cout << numeros[i] << endl;
	}

	// una vez que ya no se ocupe la memoria es necesario liberarla
	free(numeros);

	/*
	 * Algunas desventajas del uso de malloc es:
	 * - no inicializa la memoria asignada, por lo que puede contener basura
	 * - pueden existir fugas de memoria si no re realiza el manejo adecuado
	 * */

	return 0;
}
