//
// Created by happodaikarin on 11/12/23.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> algoritmoBurbuja(vector<int>& listaDesordenada) {
    int n = listaDesordenada.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (listaDesordenada[j] > listaDesordenada[j + 1]) {
                int aux = listaDesordenada[j];
                listaDesordenada[j] = listaDesordenada[j + 1];
                listaDesordenada[j + 1] = aux;
            }
        }
    }
    return listaDesordenada;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    vector<int> listaDesordenada(n);
    cout << "Ingrese la lista de números: ";
    for (int i = 0; i < n; ++i) {
        cin >> listaDesordenada[i];
    }

    vector<int> resultado = algoritmoBurbuja(listaDesordenada);

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; ++i) {
        cout << resultado[i] << " ";
    }

    return 0;
}
