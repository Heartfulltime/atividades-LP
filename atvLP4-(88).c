#include <stdio.h>

int main() {
    int Q[20], novo[20];
    int i, num, encontrado = 0, j = 0;

    for(i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &Q[i]);
    }
    printf("\nDigite um número para procurar no vetor: ");
    scanf("%d", &num);
    
    for(i = 0; i < 20; i++) {
        if(Q[i] == num) {
            encontrado = 1;
        } else {
            novo[j] = Q[i];
            j++;
        }
    }
    if(encontrado) {
        printf("\nO número foi encontrado!\n");
        printf("Novo vetor sem o número:\n");

        for(i = 0; i < j; i++) {
            printf("%d ", novo[i]);
        }
    } else {
        printf("\nO número não foi encontrado no vetor.\n");
    }

    return 0;
}