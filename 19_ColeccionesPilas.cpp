#include <iostream>

using namespace std;

/*
    Las pilas son una colección de datos ordenada que almacena datos relacionados entre sí de forma dinámica, es decir,
    crece o disminuye sus dimensiones dependiendo de las condiciones del programa.
    La forma de acceder a su contenido es mediante el principio
    LIFO (Last In, First Out) <El último en entrar es el primero en salir>

    En una pila, las operaciones más comunes son (push) insertar y (pop) eliminar.

    Un ejemplo sería si tenemos una estructura que almacena caracteres de la siguiente forma P, E, R, R, O.
    Al acceder a su contenido, en cada iteración se obtendrá el último valor de la estructura y al final obtendríamos
    O, R, R, E, P.

    Su funcionamiento es mediante el uso de nodos, donde cada nodo contiene una variable que almacena el dato en esa
    posición y un puntero de tipo Nodo que apunta a la dirección de memoria del nodo siguiente, de manera
    que el primer nodo que ingresamos siempre apuntara a nulo
*/

// Estructura del nodo de la pila
struct Nodo {
    int dato;
    Nodo *siguiente;
};

// Prototipo de la función para insertar un nuevo elemento en la pila
void push(Nodo *&ultimo, int valor);
// Prototipo de la función para eliminar el último elemento de la pila
void pop(Nodo *&ultimo);
// Prototipo de la función para eliminar todos los elementos de la pila
void popAll(Nodo *&ultimo);



int main() {
    Nodo *ultimo = nullptr; // Inicialmente la pila está vacía, por lo que el puntero al último nodo apunta a nulo

    // Insertar elementos en la pila
    push(ultimo, 10);
    push(ultimo, 20);
    push(ultimo, 30);

    // Mostrar la pila antes de eliminar el último elemento
    cout << "Pila antes de pop:" << endl;
    Nodo *temp = ultimo;
    while (temp != nullptr) {
        cout << temp->dato << " ";
        temp = temp->siguiente;
    }
    cout << endl;

    // Eliminar el último elemento de la pila
    pop(ultimo);

    // Mostrar la pila después de eliminar el último elemento
    cout << "Pila después de pop:" << endl;
    temp = ultimo;
    while (temp != nullptr) {
        cout << temp->dato << " ";
        temp = temp->siguiente;
    }
    cout << endl;

    // Eliminar todos los elementos de la pila
    popAll(ultimo);

    // Mostrar la pila después de eliminar todos los elementos
    cout << "Pila después de popAll:" << endl;
    temp = ultimo;
    while (temp != nullptr) {
        cout << temp->dato << " ";
        temp = temp->siguiente;
    }
    cout << endl;

    return 0;
}

// Función para insertar un nuevo elemento en la pila
// Recibe como parámetro un puntero al último nodo de la pila y el valor a insertar
void push(Nodo *&ultimo, int valor) {
    // Reservamos memoria para un nuevo nodo y asignamos al nuevo nodo
    Nodo *nuevoNodo = new Nodo;

    // Llenando las variables de la estructura del nuevo nodo
    nuevoNodo->dato = valor; // Asignamos el valor pasado como parámetro al nuevo nodo
    nuevoNodo->siguiente = ultimo; // cada puntero apuntara al nodo actual que despues pasara a ser el penultimo

    // igualamos el el ultimo nodo al nuevo, por lo que pasara a estar en la cima
    ultimo = nuevoNodo;
}

void pop(Nodo *&ultimo) {
    // Verificamos si la pila está vacía
    if (ultimo == nullptr) {
        cout << "La pila está vacía, no se puede eliminar ningún elemento." << endl;
        return;
    } else {

        // nos apoyamos de un nodo auxiliar que guarda el una copia del ultimo nodo
        Nodo *actual = ultimo;
        // asignamos como ultimo nodo al nodo al que apuntaba el nodo que eliminamos
        ultimo = actual->siguiente;
        // eliminamos nuestro auxiliar
        delete actual;

    }
}

// Función para eliminar todos los elementos de la pila
// Recibe como parámetro un puntero al tope de la pila
void popAll(Nodo *&ultimo) {
    // Eliminamos cada nodo de la pila uno por uno hasta que la pila esté vacía
    while (ultimo != nullptr) {
        pop(ultimo);
    }
}

// Prueba de git
