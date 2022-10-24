#ifndef BOLHA_H
#define BOLHA_H

class Bolha {
    private:
        Bolha() {}
        
    public:
        virtual ~Bolha() {}

        template<typename T>
        static void ordenarCrescente(T* vetor, const unsigned int tamanho) {
            for(unsigned int i = 0; i < tamanho; i++) {
                for(unsigned int j = i+1; j < tamanho; j++) {
                    if(vetor[i] > vetor[j]) {
                        T conteudo = vetor[j];
                        vetor[j] = vetor[i];
                        vetor[i] = conteudo;
                    }
                }
            }

            return;
        }

        template<typename T>
        static void ordenarDecrescente(T* vetor, const unsigned int tamanho) {
            for(unsigned int i = 0; i < tamanho; i++) {
                for(unsigned int j = i+1; j < tamanho; j++) {
                    if(vetor[i] < vetor[j]) {
                        T conteudo = vetor[j];
                        vetor[j] = vetor[i];
                        vetor[i] = conteudo;
                    }
                }
            }

            return;
        }
};

#endif
