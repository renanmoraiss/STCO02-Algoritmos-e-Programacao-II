#include <stdio.h>

void selectionSort(int A[], int n);

int main() {
    int v[] = {10, -3, 7, 0, -1, 5, 2};
    int tamanho = 7;
    selectionSort(v, tamanho);
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", v[k]);
    }
    return 0;
}

void selectionSort(int A[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int indMenorElem = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[indMenorElem]) {
                indMenorElem = j;
            }
        }
        if (indMenorElem != i) {
            int aux = A[i];
            A[i] = A[indMenorElem];
            A[indMenorElem] = aux;
        }
    }
}