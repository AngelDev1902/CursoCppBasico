#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena{"Hola mundo"};
    cout << "cadena: " << cadena << endl;

    // METODOS DE LA CLASE STRING

    // length() - Devuelve la longitud de la cadena
    cout << "Longitud de la cadena: " << cadena.length() << endl;

    // size() - Devuelve la longitud de la cadena
    cout << "Longitud de la cadena: " << cadena.size() << endl;

    // empty() - Devuelve true si la cadena esta vacia
    cout << "La cadena esta vacia: " << cadena.empty() << endl; 

    // clear() - Borra el contenido de la cadena
    cadena.clear();
    cout << "cadena: " << cadena << endl;

    // append() - Añade una cadena al final de la cadena
    cadena.append("Hola");

    // insert() - Inserta una cadena en una posicion de la cadena
    cadena.insert(4, " mundo");

    // erase() - Borra una parte de la cadena
    cadena.erase(4, 5);

    // replace() - Reemplaza una parte de la cadena por otra
    cadena.replace(4, 5, "mundo");

    // find() - Busca una cadena dentro de otra
    cout << "Posicion de la palabra mundo: " << cadena.find("mundo") << endl;

    // substr() - Devuelve una subcadena de la cadena
    cout << "Subcadena: " << cadena.substr(5, 5) << endl;

    return 0;
}