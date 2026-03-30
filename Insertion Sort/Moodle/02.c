#include <stdio.h>

int insertionSort(int A[], int n);

int main() {
    int vet[] = {-5, -1, 0, 3, 2, -2, 4};
    int tamanho = 7;
    int contador = insertionSort(vet, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    } printf("\n");
    printf("movimentacoes: %d", contador);
    return 0;
}

int insertionSort(int A[], int n) {
    int i;
    int totalMovimentacoes = 0;
    for (i = 1; i < n; i++) {
        int pivo = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > pivo) {
            A[j+1] = A[j];
            totalMovimentacoes++;
            j--;
        }
        A[j+1] = pivo;
    }
    return totalMovimentacoes;
}