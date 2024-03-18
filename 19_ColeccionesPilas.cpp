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
    posición y un puntero de tipo Nodo que apunta a la dirección de memoria del nodo siguiente (el que está por encima del actual), de manera
    que el ultimo nodo (El que esta hasta arriba de la pila) apuntara a nulo
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

    // Insertar un elemento en la pila
    push(ultimo, 15);

    return 0;
}

// Función para insertar un nuevo elemento en la pila
// Recibe como parámetro un puntero al último nodo de la pila y el valor a insertar
void push(Nodo *&ultimo, int valor) {
    // Reservamos memoria para un nuevo nodo y asignamos al nuevo nodo
    Nodo *nuevoNodo = new Nodo;

    // Llenando las variables de la estructura del nuevo nodo
    nuevoNodo->dato = valor; // Asignamos el valor pasado como parámetro al nuevo nodo
    nuevoNodo->siguiente = nullptr; // Como este será el último nodo de la pila, el puntero al siguiente nodo es nulo

    // Si la pila está vacía, el nuevo nodo se convierte en el último nodo de la pila
    if (ultimo == nullptr) {
        ultimo = nuevoNodo;
    } else {
        // Si la pila ya contiene elementos, buscamos el último nodo y agregamos el nuevo nodo al final
        Nodo *actual = ultimo;

        // Avanzamos al último nodo
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }

        // Asignamos el nuevo nodo como el siguiente del último nodo
        // de esta manera, el nodo actual que teniamos deja de apuntar a nullo y apunta ahora al nuevo nodo, el cual ahora
        // de posiciona hasta arriba de la pila
        actual->siguiente = nuevoNodo;
    }
}

void pop(Nodo *&ultimo) {
    // Verificamos si la pila está vacía
    if (ultimo == nullptr) {
        cout << "La pila está vacía, no se puede eliminar ningún elemento." << endl;
        return;
    }

    // Si la pila contiene solo un elemento, eliminamos ese elemento
    if (ultimo->siguiente == nullptr) {
        delete ultimo;
        ultimo = nullptr;
        return;
    }

    // Buscamos el penúltimo nodo de la pila
    Nodo *actual = ultimo;
    while (actual->siguiente->siguiente != nullptr) {
        actual = actual->siguiente;
    }

    // Eliminamos el último nodo de la pila y actualizamos el puntero al tope
    delete actual->siguiente;
    actual->siguiente = nullptr;
}

// Función para eliminar todos los elementos de la pila
// Recibe como parámetro un puntero al tope de la pila
void popAll(Nodo *&ultimo) {
    // Eliminamos cada nodo de la pila uno por uno hasta que la pila esté vacía
    while (ultimo != nullptr) {
        pop(ultimo);
    }
}
