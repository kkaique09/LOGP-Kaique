// 6) Ler 3 elementos em uma matriz A tipo vetor. 
// Criar uma matriz B de mesma dimensão, onde cada elemento de B é o cubo do elemento correspondente de A. 
// Montar uma rotina de pesquisa para os elementos armazenados na matriz B.

#include <stdio.h>
int main() {
    int A[3], B[3], i, num, encontrado = 0;
    printf("Digite 3 números para a matriz A:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
        B[i] = A[i] * A[i] * A[i];
    }
    printf("Matriz B (cubo de A):\n");
    for(i = 0; i < 3; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    printf("Digite um número para pesquisar na matriz B:\n");
    scanf("%d", &num);
    for(i = 0; i < 3; i++) {
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

