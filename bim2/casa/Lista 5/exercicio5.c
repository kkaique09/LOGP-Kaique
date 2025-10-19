// 5) Ler 2 elementos em uma matriz A tipo vetor e 3 elementos em uma matriz B. 
// Criar uma matriz C, sendo a junção das duas, totalizando 5 elementos. 
// Exibir os elementos da matriz C em ordem decrescente.

#include <stdio.h>
int main() {
    int A[2], B[3], C[5], i, j, temp;
    printf("Digite 2 números para a matriz A:\n");
    for(i = 0; i < 2; i++) {
        scanf("%d", &A[i]);
        C[i] = A[i];
    }
    printf("Digite 3 números para a matriz B:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &B[i]);
        C[i + 2] = B[i];
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(C[j] < C[j + 1]) {
                temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }
    printf("Matriz C ordenada em ordem decrescente:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}

