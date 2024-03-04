#include <iostream>
#include <string.h>

using namespace std;

/*
 * Las estructuras son en si un tipo de dato, que tiene como finalidad almacenar otros datos aun si son de diferentes tipos
 * con las palabras adecuadas, las estructuras de datos son colecciones de uno o mas datos del mismo o diferente tipo que llamaremos campos
 *
 * - tienen por defecto una visibilidad publica
 * - generalmente los campos se almacenan en direcciones de memoria contigua 
 * - la suma de el espacio que necesita cada campo es el resultado del tamaño de la estructura
 * 
 * Su sintaxis es la siguiente: 
 *
 * struct nombre_de_la_estructura {
 * 	campos 
 * }
 *
 * Para crear una variable de nuestro nuevo tipo la declaramos como cualquier otra
 *
 * nombre_de_la_estructura nombre_de_la_variable;
 *
 * para acceder a los valores que guarda cada campo lo hacemos con el operador .
 *
 * nombre_de_la_variable.nomnre_del_campo;
 * */

struct Peliculas {
	string nombre;
	string genero;
	int duracion;
};

struct Persona {
	string nombre;
	int edad;
	float altura;
	Peliculas peliculas[2];
};

int main() {

	Persona persona;
	persona.nombre= "Luis";
	persona.edad = 20;
	persona.altura = 1.75;

	persona.peliculas[0].nombre = "Titanic";
	persona.peliculas[0].genero = "Romance";
	persona.peliculas[0].duracion = 135;

	persona.peliculas[1].nombre = "Interestelar";
	persona.peliculas[1].genero = "Cienci ficcion";
	persona.peliculas[1].duracion = 140;

	cout << "\n\tPersona 1\t\n";

	cout << persona.nombre << endl;
	cout << persona.edad << endl;
	cout << persona.altura << endl;
	
	for (int i{0}; i < 2; i++) {
		cout << persona.peliculas[i].nombre << endl;
		cout << persona.peliculas[i].genero << endl;
		cout << persona.peliculas[i].duracion << endl;
	}

	Persona persona2{
		"Angel",
		19, 
		1.70,
		{"Avatar", "ciencia ficcion", 180}
	};

	cout << "\n\tPersona 2\t\n";
	
	cout << persona2.nombre << endl;
	cout << persona2.edad << endl;
	cout << persona2.altura << endl;

	for (int i{0}; i < 2; i++) {
		cout << persona2.peliculas[i].nombre << endl;
		cout << persona2.peliculas[i].genero << endl;
		cout << persona2.peliculas[i].duracion << endl;
	}

	return 0;
}
