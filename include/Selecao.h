#ifndef SELECAO_H
#define SELECAO_H

class Selecao {
    private:
        Selecao() {}
        
    public:
        virtual ~Selecao() {}

        template<typename T>
        static void ordenarCrescente(T* vetor, const unsigned int tamanho) {
            for(unsigned int i = 0; i < tamanho; i++) {
                unsigned int indexMaior = 0;
                for(unsigned int j = 1; j < tamanho-i; j++) {
                    if(vetor[indexMaior] < vetor[j]) {
                        indexMaior = j;
                    }
                }

                T conteudo = vetor[tamanho-i-1];
                vetor[tamanho-i-1] = vetor[indexMaior];
                vetor[indexMaior] = conteudo;
            }

            return;
        }

        template<typename T>
        static void ordenarDecrescente(T* vetor, const unsigned int tamanho) {
            for(unsigned int i = 0; i < tamanho; i++) {
                unsigned int indexMenor = 0;
                for(unsigned int j = 1; j < tamanho-i; j++) {
                    if(vetor[indexMenor] > vetor[j]) {
                        indexMenor = j;
                    }
                }
                
                T conteudo = vetor[tamanho-i-1];
                vetor[tamanho-i-1] = vetor[indexMenor];
                vetor[indexMenor] = conteudo;
            }

            return;
        }
};

#endif
