#include <iostream>

using namespace std;

// declaramos nuestra funcion prototipo donde pasamos como parametro  nuestro puntero

void suma(int *resultado, int *n1, int *n2);


int main() {

	int resultado{0}, n1{15}, n2{20};

	suma(&resultado, &n1, &n2);

	cout << "Resultado de la suma: " << resultado << endl;

	return 0;
}

void suma(int *resultado, int *n1, int *n2) {
	*resultado = *n1 + *n2; 
}
