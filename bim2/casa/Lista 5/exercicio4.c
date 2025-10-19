// 4) Ler 12 elementos em uma matriz A tipo vetor. 
// Colocar os elementos em ordem crescente. 
// Depois ler uma matriz B também com 12 elementos e colocar em ordem crescente. 
// Criar uma matriz C, onde cada elemento é a soma dos correspondentes de A e B. 
// Colocar em ordem crescente a matriz C e apresentar seus valores.

#include <stdio.h>
int main() {
    int A[12], B[12], C[12], i, j, temp;
    printf("Digite 12 números para a matriz A:\n");
    for(i = 0; i < 12; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 11; i++) {
        for(j = 0; j < 12 - i - 1; j++) {
            if(A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("Digite 12 números para a matriz B:\n");
    for(i = 0; i < 12; i++) {
        scanf("%d", &B[i]);
    }
    for(i = 0; i < 11; i++) {
        for(j = 0; j < 12 - i - 1; j++) {
            if(B[j] > B[j + 1]) {
                temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < 12; i++) {
        C[i] = A[i] + B[i];
    }
    for(i = 0; i < 11; i++) {
        for(j = 0; j < 12 - i - 1; j++) {
            if(C[j] > C[j + 1]) {
                temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }
    printf("Matriz C (soma de A e B) ordenada:\n");
    for(i = 0; i < 12; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}

