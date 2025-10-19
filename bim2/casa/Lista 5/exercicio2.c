// 2) Ler 8 elementos em uma matriz A tipo vetor. 
// Criar uma matriz B de mesma dimensão com os elementos da matriz multiplicados por 5. 
// Exibir a matriz B na ordem crescente. 
// Criar uma rotina para pesquisar os elementos armazenados na matriz B.

#include <stdio.h>
int main() {
    int A[8], B[8], i, j, temp, num, encontrado = 0;
    printf("Digite 8 elementos para a matriz A:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &A[i]);
        B[i] = A[i] * 5;
    }
    for(i = 0; i < 7; i++) {
        for(j = i + 1; j < 8; j++) {
            if(B[i] > B[j]) {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    printf("Matriz B ordenada:\n");
    for(i = 0; i < 8; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    printf("Digite um número para pesquisar na matriz B:\n");
    scanf("%d", &num);
    for(i = 0; i < 8; i++) {
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

