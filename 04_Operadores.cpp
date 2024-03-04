#include <iostream>

using namespace std;

/*
 * Los operadores son simbolos que se utilizan para realizar operaciones entre variables y valores.
 * Se dividen en:
 *
 * - Operadores aritmeticos
 * - Operadores de asignacion
 * - Operadores de comparacion
 * - Operadores logicos
 * - Operadores de incremento y decremento
 * */

int main() {

    /* OPERADORES ARITMETICOS */

    // Suma
    int a{5}, b{2};
    int suma = a + b;
    cout << "Suma: " << suma << endl;

    // Resta
    int resta{a - b};
    cout << "Resta: " << resta << endl;

    // Multiplicacion
    int multiplicacion{a * b};
    cout << "Multiplicacion: " << multiplicacion << endl;

    // Division
    int division{a / b};
    cout << "Division: " << division << endl;

    // Modulo
    int modulo{a % b};
    cout << "Modulo: " << modulo << endl;

    /* OPERADORES DE ASIGNACION */

    // Asignacion
    int c{5};
    cout << "Asignacion: " << c << endl;

    // Asignacion con suma
    c += 5; // c = c + 5
    cout << "Asignacion con suma: " << c << endl;

    // Asignacion con resta
    c -= 5; // c = c - 5
    cout << "Asignacion con resta: " << c << endl;

    // Asignacion con multiplicacion
    c *= 5; // c = c * 5
    cout << "Asignacion con multiplicacion: " << c << endl;

    // Asignacion con division
    c /= 5; // c = c / 5
    cout << "Asignacion con division: " << c << endl;

    // Asignacion con modulo
    c %= 5; // c = c % 5
    cout << "Asignacion con modulo: " << c << endl;

    /* OPERADORES DE COMPARACION */

    // Igualdad
    bool igualdad{a == b};
    cout << "Igualdad: " << igualdad << endl;

    // Desigualdad
    bool desigualdad{a != b};
    cout << "Desigualdad: " << desigualdad << endl;

    // Mayor que
    bool mayor_que{a > b};
    cout << "Mayor que: " << mayor_que << endl;

    // Menor que
    bool menor_que{a < b};
    cout << "Menor que: " << menor_que << endl;

    // Mayor o igual que
    bool mayor_o_igual_que{a >= b};
    cout << "Mayor o igual que: " << mayor_o_igual_que << endl;

    // Menor o igual que
    bool menor_o_igual_que{a <= b};
    cout << "Menor o igual que: " << menor_o_igual_que << endl;

    /* OPERADORES LOGICOS */

    // AND
    bool and_logico{a > 0 && b > 0};
    cout << "AND: " << and_logico << endl;

    // OR
    bool or_logico{a > 0 || b > 0};
    cout << "OR: " << or_logico << endl;

    // NOT
    bool not_logico{!(a > 0)};
    cout << "NOT: " << not_logico << endl;

    /* OPERADORES DE INCREMENTO Y DECREMENTO */

    // Postincremento
    int incremento{a++};
    cout << "Incremento: " << incremento << endl;

    // Postdecremento
    int decremento{a--};
    cout << "Decremento: " << decremento << endl;

    // Preincremento
    incremento = ++a;
    cout << "Incremento: " << incremento << endl;

    // Predecremento
    decremento = --a;
    cout << "Decremento: " << decremento << endl;

    return 0;
}