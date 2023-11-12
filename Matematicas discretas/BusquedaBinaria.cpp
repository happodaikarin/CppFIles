//
// Created by happodaikarin on 11/11/23.
//
#include <iostream>
#include <vector>

int busquedaBinaria(const std::vector<int>& lista, int target) {
    int bajo = 0;
    int alto = lista.size() - 1;

    while (bajo <= alto) {
        int medio = bajo + (alto - bajo) / 2;
        int valorMedio = lista[medio];

        if (valorMedio == target) {
            return medio;
        } else if (valorMedio < target) {
            bajo = medio + 1;
        } else {
            alto = medio - 1;
        }
    }

    return -1;  // El target no se encontró
}

int main() {
    std::vector<int> lista = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;

    int resultado = busquedaBinaria(lista, target);

    if (resultado != -1) {
        std::cout << "Elemento encontrado en el índice: " << resultado << std::endl;
    } else {
        std::cout << "Elemento no encontrado en la lista." << std::endl;
    }

    return 0;
}
