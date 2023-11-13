//
// Created by happodaikarin on 11/12/23.
//
#include <iostream>

using namespace std;

int busquedaBinariaRecursiva(int lista[], int target, int inferior, int superior) {
    if (inferior > superior) {
        return -1;
    }

    int mitad = inferior + (superior - inferior) / 2;

    if (target == lista[mitad]) {
        return mitad;
    } else if (target < lista[mitad]) {
        return busquedaBinariaRecursiva(lista, target, inferior, mitad - 1);
    } else {
        return busquedaBinariaRecursiva(lista, target, mitad + 1, superior);
    }
}

int main() {
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16};
    int dato = 13;
    int inferior = 0;
    int superior = sizeof(A)/sizeof(A[0]) - 1;
    int result = busquedaBinariaRecursiva(A, dato, inferior, superior);

    if (result == -1) {
        cout << "No se encontro el dato";
    } else {
        cout << "Encontro el dato en la posicion: " << result;
    }

    return 0;
}
