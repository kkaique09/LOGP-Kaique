// 1) Ler 12 elementos de uma matriz tipo vetor,
// colocá-los em ordem decrescente
// e apresentar os elementos ordenados.

#include <stdio.h>
int main() {
    int A[12], i, j, x;
    for(i = 0; i < 12; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 11; i++) {
        for(j = i + 1; j < 12; j++) {
            if(A[i] < A[j]) {
                x = A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }
    printf("Em ordem decrescente:\n");
    for(i = 0; i < 12; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
}
