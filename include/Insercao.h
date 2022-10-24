#ifndef INSERCAO_H
#define INSERCAO_H

class Insercao {
    private:
        Insercao() {}
        
    public:
        virtual ~Insercao() {}

        template<typename T>
        static void ordenarCrescente(T* vetor, const unsigned int tamanho) {
            for(unsigned int i = 1; i < tamanho; i++) {
                int j = i-1;

                while(j >= 0 && vetor[j] > vetor[j+1]) {
                    T conteudo = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = conteudo;
                    j--;
                }
            }

            return;
        }

        template<typename T>
        static void ordenarDecrescente(T* vetor, const unsigned int tamanho) {
            for(unsigned int i = 1; i < tamanho; i++) {
                int j = i-1;
                
                while(j >= 0 && vetor[j] < vetor[j+1]) {
                    T conteudo = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = conteudo;
                    j--;
                }
            }

            return;
        }
};

#endif
