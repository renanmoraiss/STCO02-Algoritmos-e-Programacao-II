#include <stdio.h>

void insertionSort(int A[], int n);

int main() {
    int vet[] = {10, -3, 7, 0, -1, 5, 2, -3};
    int tam = 8;
    insertionSort(vet, tam);
    for (int k = 0; k < tam; k++) {
        printf("%d ", vet[k]);
    }
    return 0;
}

void insertionSort(int A[], int n) {
    int i;
    for (i = 1; i < n; i++) {
        int pivo = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > pivo) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = pivo;
    }
}