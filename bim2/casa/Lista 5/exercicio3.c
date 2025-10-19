// 3) Ler 15 elementos em uma matriz A tipo vetor. 
// Criar uma matriz B de mesma dimensão, sendo que cada elemento da matriz B seja 
// o fatorial do elemento correspondente da matriz A. 
// Exibir os elementos da matriz B ordenados de forma crescente.

#include <stdio.h>
int main() {
    int A[5], B[5], i, j, temp;
    printf("Digite 5 números:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 5; i++) {
        B[i] = 1;
        for(j = 1; j <= A[i]; j++) {
            B[i] *= j;
        }
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(B[j] > B[j + 1]) {
                temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
    printf("Vetor B com fatoriais em ordem crescente:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", B[i]);
    }
    printf("\n");
    return 0;
}

