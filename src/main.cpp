#include <iostream>

#include "Bolha.h"

int main() {
    const unsigned int TAMANHO_VETOR = 11;

    unsigned int crescente[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Bolha::ordenarDecrescente<unsigned int>(crescente, TAMANHO_VETOR);

    std::cout << "Oredenacao Decrescente:\n";
    for(unsigned int i = 0; i < TAMANHO_VETOR; i++) {
        std::cout << crescente[i];

        if(i < TAMANHO_VETOR - 1) {
            std::cout << " ";
        }
        else {
            std::cout << "\n";
        }
    }

    unsigned int decrescente[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    Bolha::ordenarCrescente<unsigned int>(decrescente, TAMANHO_VETOR);

    std::cout << "\nOredenacao Crescente\n";
    for(unsigned int i = 0; i < TAMANHO_VETOR; i++) {
        std::cout << decrescente[i];

        if(i < TAMANHO_VETOR - 1) {
            std::cout << " ";
        }
        else {
            std::cout << "\n";
        }
    }

    return 0;
}
