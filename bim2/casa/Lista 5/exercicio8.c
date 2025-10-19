// 8) Elabore um algoritmo que utilize um array (matriz 1D) para armazenar notas de 4 alunos, 
// capture as notas, ordene-as em ordem crescente e efetue a pesquisa.

#include <stdio.h>
int main() {
    int notas[4], i, j, temp, num, encontrado = 0;
    printf("Digite as notas de 4 alunos:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &notas[i]);
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4 - i - 1; j++) {
            if(notas[j] > notas[j + 1]) {
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
    printf("Notas ordenadas:\n");
    for(i = 0; i < 4; i++) {
        printf("%d ", notas[i]);
    }
    printf("\n");
    printf("Digite uma nota para pesquisar:\n");
    scanf("%d", &num);
    for(i = 0; i < 4; i++) {
        if(notas[i] == num) {
            encontrado = 1;
            break;
        }
    }
    if(encontrado) {
        printf("A nota %d está presente na matriz.\n", num);
    } else {
        printf("A nota %d não foi encontrada.\n", num);
    }
    return 0;
}

