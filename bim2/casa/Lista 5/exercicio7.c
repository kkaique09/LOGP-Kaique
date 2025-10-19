// 7) Ler 2 elementos em uma matriz A tipo vetor e criar uma matriz B de mesma dimensão, 
// com os mesmos elementos de A acrescidos de 2. 
// Colocar os elementos da matriz B em ordem crescente. 
// Montar uma rotina de pesquisa para os elementos da matriz B.

#include <stdio.h>
int main() {
    int A[2], B[2], i, j, temp, num, encontrado = 0;
    printf("Digite 2 números para a matriz A:\n");
    for(i = 0; i < 2; i++) {
        scanf("%d", &A[i]);
        B[i] = A[i] + 2;
    }
    for(i = 0; i < 1; i++) {
        for(j = 0; j < 2 - i - 1; j++) {
            if(B[j] > B[j + 1]) {
                temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
    printf("Matriz B ordenada:\n");
    for(i = 0; i < 2; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    printf("Digite um número para pesquisar na matriz B:\n");
    scanf("%d", &num);
    for(i = 0; i < 2; i++) {
        if(B[i] == num) {
            encontrado = 1;
            break;
        }
    }
    if(encontrado) {
        printf("O número %d está presente na matriz B.\n", num);
    } else {
        printf("O número %d não foi encontrado na matriz B.\n", num);
    }
    return 0;
}

