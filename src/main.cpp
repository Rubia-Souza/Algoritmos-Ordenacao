#include <iostream>

#include "Bolha.h"

int main() {
    unsigned int vetor[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    const unsigned int TAMANHO_VETOR = 11;

    Bolha::ordenarCrescente<unsigned int>(vetor, TAMANHO_VETOR);

    for(unsigned int i = 0; i < TAMANHO_VETOR; i++) {
        std::cout << vetor[i];

        if(i < TAMANHO_VETOR - 1) {
            std::cout << " ";
        }
        else {
            std::cout << "\n";
        }
    }

    return 0;
}
