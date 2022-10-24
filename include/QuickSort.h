#ifndef QUICK_SORT_H
#define QUICK_SORT_H

class QuickSort {
    private:
        QuickSort() {}
        
    public:
        virtual ~QuickSort() {}

        template<typename T>
        static void ordenarCrescente(T vetor[], const unsigned int tamanho) {
            quickSortCrescente(vetor, 0, tamanho - 1);
            return;
        }

        template<typename T>
        static void ordenarDecrescente(T vetor[], const unsigned int tamanho) {
            quickSortDecrescente(vetor, 0, tamanho - 1);
            return;
        }
    
    private:
        template<typename T>
        static void quickSortCrescente(T vetor[], const int posicaoInicial, const int posicaoFinal) {
            T pivo = vetor[(posicaoInicial + posicaoFinal) / 2];

            int indexElementosEsquerda = posicaoInicial;
            int indexElementosDireita = posicaoFinal;

            while(indexElementosEsquerda <= indexElementosDireita) {
                while(vetor[indexElementosEsquerda] < pivo && indexElementosEsquerda < posicaoFinal) {
                    indexElementosEsquerda++;
                }

                while(vetor[indexElementosDireita] > pivo && indexElementosDireita > posicaoInicial) {
                    indexElementosDireita--;
                }

                if(indexElementosEsquerda <= indexElementosDireita) {
                    T conteudo = vetor[indexElementosEsquerda];
                    vetor[indexElementosEsquerda] = vetor[indexElementosDireita];
                    vetor[indexElementosDireita] = conteudo;

                    indexElementosEsquerda++;
                    indexElementosDireita--;
                }
            }

            if(indexElementosDireita > posicaoInicial) {
                quickSortCrescente(vetor, posicaoInicial, indexElementosDireita + 1);
            }

            if(indexElementosEsquerda < posicaoFinal) {
                quickSortCrescente(vetor, indexElementosEsquerda, posicaoFinal);
            }

            return;
        }

        template<typename T>
        static void quickSortDecrescente(T vetor[], const int posicaoInicial, const int posicaoFinal) {
            T pivo = vetor[(posicaoInicial + posicaoFinal) / 2];

            int indexElementosEsquerda = posicaoInicial;
            int indexElementosDireita = posicaoFinal;

            while(indexElementosEsquerda <= indexElementosDireita) {
                while(vetor[indexElementosEsquerda] > pivo && indexElementosEsquerda < posicaoFinal) {
                    indexElementosEsquerda++;
                }

                while(vetor[indexElementosDireita] < pivo && indexElementosDireita > posicaoInicial) {
                    indexElementosDireita--;
                }

                if(indexElementosEsquerda <= indexElementosDireita) {
                    T conteudo = vetor[indexElementosEsquerda];
                    vetor[indexElementosEsquerda] = vetor[indexElementosDireita];
                    vetor[indexElementosDireita] = conteudo;

                    indexElementosEsquerda++;
                    indexElementosDireita--;
                }
            }

            if(indexElementosDireita > posicaoInicial) {
                quickSortDecrescente(vetor, posicaoInicial, indexElementosDireita + 1);
            }

            if(indexElementosEsquerda < posicaoFinal) {
                quickSortDecrescente(vetor, indexElementosEsquerda, posicaoFinal);
            }

            return;
        }
};

#endif
