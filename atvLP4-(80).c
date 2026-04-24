#include <stdio.h>

int main() {
    int Q[20];
    int i, posicao = 0, maior;

    for(i = 0; i < 20; i++) {
        do {
            printf("Digite o %dº número: ", i + 1);
            scanf("%d", &Q[i]);

            if(Q[i] <= 0) {
                printf("Valor inválido!\n");
            }
        } while(Q[i] <= 0);
    }
    maior = Q[0];
    for(i = 1; i < 20; i++) {
        if(Q[i] > maior) {
            maior = Q[i];
            posicao = i+1;
        }
    }
    printf("\nMaior valor: %d\n", maior);
    printf("Posição: %d\n", posicao);

    return 0;
}