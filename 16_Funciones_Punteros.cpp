#include <iostream>

using namespace std;

// declaramos nuestra funcion prototipo donde pasamos como parametro  nuestro puntero

void suma(int *resultado, int *n1, int *n2);


int main() {

	int resultado{0}, n1{15}, n2{20};

	// mandamos la direccion de memoria de cada variable en el orden correspondiente
	suma(&resultado, &n1, &n2);

	cout << "Resultado de la suma: " << resultado << endl;

	return 0;
}

/* las variables que estamos recibiendo parametro son variables distintas a las del programa principal
 * ya que son variables de tipo puntero que contienen las direcciones de memoria del programa principal
*/
   void suma(int *resultado, int *n1, int *n2) {
	// para acceder al valor contenido en la direccion de memoria se antepone un * al nombre del puntero 
	*resultado = *n1 + *n2; 
}
