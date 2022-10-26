#ifndef QUICK_SORT_H
#define QUICK_SORT_H

class QuickSort {
    private:
        QuickSort() {}

    public:
        virtual ~QuickSort() {}

        template<typename T>
        static void ordenarCrescente(T vetor[], const unsigned int tamanho) {
            quickSortCrescente(vetor, 0, tamanho-1);
            return;
        }

        template<typename T>
        static void ordenarDecrescente(T vetor[], const unsigned int tamanho) {
            quickSortDecrescente(vetor, 0, tamanho-1);
            return;
        }
    
    private:
        template<typename T>
        static void quickSortCrescente(T vetor[], int posicaoInicial, int poiscaoFinal) { 
            int indexEsquerda = 0;
            int indexDireita = 0;

            particionarCrescente(vetor, posicaoInicial, poiscaoFinal, &indexEsquerda, &indexDireita);

            if (posicaoInicial < indexDireita) {
                quickSortCrescente(vetor, posicaoInicial, indexDireita);
            }

            if (indexEsquerda < poiscaoFinal) {
                quickSortCrescente(vetor, indexEsquerda, poiscaoFinal);
            }

            return;
        }

        template<typename T>
        static void particionarCrescente(T vetor[], int posicaoInicial, int poiscaoFinal, int* indexEsquerda, int* indexDireita) {
            *indexEsquerda = posicaoInicial;
            *indexDireita = poiscaoFinal;

            T pivo = vetor[(*indexEsquerda + *indexDireita) / 2];

            do {
                while (pivo > vetor[*indexEsquerda]) {
                    (*indexEsquerda)++;
                }

                while (pivo < vetor[*indexDireita]) {
                    (*indexDireita)--;
                }

                if (*indexEsquerda <= *indexDireita) {
                    T trocaTemporaria = vetor[*indexEsquerda];
                    vetor[*indexEsquerda] = vetor[*indexDireita];
                    vetor[*indexDireita] = trocaTemporaria;

                    (*indexEsquerda)++;
                    (*indexDireita)--;
                }
            } while(*indexEsquerda <= *indexDireita);
            
            return;
        }

        template<typename T>
        static void quickSortDecrescente(T vetor[], int posicaoInicial, int poiscaoFinal) { 
            int indexEsquerda = 0;
            int indexDireita = 0;

            particionarDecrescente(vetor, posicaoInicial, poiscaoFinal, &indexEsquerda, &indexDireita);

            if (posicaoInicial < indexDireita) {
                quickSortDecrescente(vetor, posicaoInicial, indexDireita);
            }

            if (indexEsquerda < poiscaoFinal) {
                quickSortDecrescente(vetor, indexEsquerda, poiscaoFinal);
            }

            return;
        }

        template<typename T>
        static void particionarDecrescente(T vetor[], int posicaoInicial, int poiscaoFinal, int* indexEsquerda, int* indexDireita) {
            *indexEsquerda = posicaoInicial;
            *indexDireita = poiscaoFinal;

            T pivo = vetor[(*indexEsquerda + *indexDireita) / 2];

            do {
                while (pivo < vetor[*indexEsquerda]) {
                    (*indexEsquerda)++;
                }

                while (pivo > vetor[*indexDireita]) {
                    (*indexDireita)--;
                }

                if (*indexEsquerda <= *indexDireita) {
                    T trocaTemporaria = vetor[*indexEsquerda];
                    vetor[*indexEsquerda] = vetor[*indexDireita];
                    vetor[*indexDireita] = trocaTemporaria;

                    (*indexEsquerda)++;
                    (*indexDireita)--;
                }
            } while(*indexEsquerda <= *indexDireita);
            
            return;
        }
};

#endif
