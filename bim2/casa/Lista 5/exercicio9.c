// 9) Ler 5 elementos em uma matriz A tipo vetor e colocar os elementos em ordem alfabética. 
// Montar uma rotina de pesquisa para pesquisar os nomes armazenados nesta matriz.

#include <stdio.h>
#include <string.h>
int main() {
    char A[5][50], temp[50], nome[50];
    int i, j, encontrado = 0;
    printf("Digite 5 nomes:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", A[i]);
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(strcmp(A[j], A[j + 1]) > 0) {
                strcpy(temp, A[j]);
                strcpy(A[j], A[j + 1]);
                strcpy(A[j + 1], temp);
            }
        }
    }
    printf("Nomes ordenados:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", A[i]);
    }
    printf("Digite um nome para pesquisar:\n");
    scanf("%s", nome);
    for(i = 0; i < 5; i++) {
        if(strcmp(A[i], nome) == 0) {
            encontrado = 1;
            break;
        }
    }
    if(encontrado) {
        printf("O nome '%s' está presente na matriz.\n", nome);
    } else {
        printf("O nome '%s' não foi encontrado.\n", nome);
    }
    return 0;
}

