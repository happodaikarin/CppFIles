//
// Created by happodaikarin on 11/13/23.
//
#include <iostream>
#include <string>
#include <vector>

int main() {
    const int maxIntentos = 6;  // Número máximo de intentos
    int intentos = 0;
    std::string palabraSecreta = "PROGRAMACION";  // Palabra que el jugador debe adivinar
    std::string palabraAdivinada(palabraSecreta.length(), '_');  // Representación de las letras adivinadas

    std::cout << "Bienvenido al juego del ahorcado. ¡Adivina la palabra!\n";

    while (intentos < maxIntentos) {
        std::cout << "Palabra actual: " << palabraAdivinada << "\n";
        std::cout << "Intentos restantes: " << maxIntentos - intentos << "\n";

        char letra;
        std::cout << "Ingresa una letra: ";
        std::cin >> letra;

        // Verificar si la letra ingresada está en la palabra secreta
        bool letraAdivinada = false;
        for (size_t i = 0; i < palabraSecreta.length(); ++i) {
            if (palabraSecreta[i] == letra) {
                letraAdivinada = true;
                palabraAdivinada[i] = letra;
            }
        }

        if (!letraAdivinada) {
            std::cout << "¡Incorrecto! La letra no está en la palabra.\n";
            intentos++;
        } else {
            std::cout << "¡Correcto! La letra está en la palabra.\n";
        }

        // Verificar si se ha adivinado la palabra completa
        if (palabraAdivinada == palabraSecreta) {
            std::cout << "¡Felicidades! Has adivinado la palabra: " << palabraSecreta << "\n";
            break;
        }
    }

    if (intentos == maxIntentos) {
        std::cout << "Agotaste tus intentos. La palabra era: " << palabraSecreta << "\n";
    }

    return 0;
}
