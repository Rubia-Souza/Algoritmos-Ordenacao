#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Bolha.h"
#include "Insercao.h"
#include "Selecao.h"

#define TAMANHO_VETOR 11

int main() {
    srand((unsigned int) time(0));

    unsigned int crescente[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Selecao::ordenarDecrescente<unsigned int>(crescente, TAMANHO_VETOR);

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
    Selecao::ordenarCrescente<unsigned int>(decrescente, TAMANHO_VETOR);

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

    unsigned int aleatorio[TAMANHO_VETOR];
    for(unsigned int i = 0; i < TAMANHO_VETOR; i++) {
        aleatorio[i] = (rand() % 999999) + 1;
    }

    Selecao::ordenarCrescente<unsigned int>(aleatorio, TAMANHO_VETOR);
    std::cout << "\nOredenacao Crescente Aleatorio\n";
    for(unsigned int i = 0; i < TAMANHO_VETOR; i++) {
        std::cout << aleatorio[i];

        if(i < TAMANHO_VETOR - 1) {
            std::cout << " ";
        }
        else {
            std::cout << "\n";
        }
    }

    for(unsigned int i = 0; i < TAMANHO_VETOR; i++) {
        aleatorio[i] = (rand() % 999999) + 1;
    }

    Selecao::ordenarDecrescente<unsigned int>(aleatorio, TAMANHO_VETOR);
    std::cout << "\nOredenacao Decrescente Aleatorio\n";
    for(unsigned int i = 0; i < TAMANHO_VETOR; i++) {
        std::cout << aleatorio[i];

        if(i < TAMANHO_VETOR - 1) {
            std::cout << " ";
        }
        else {
            std::cout << "\n";
        }
    }

    return 0;
}
