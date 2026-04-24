#include <stdio.h>

int main() {
   #define N 30

   int V1[N], i, P;
    for (i = 0; i < N; i++) {
        printf("Digite o elemento %d do vetor: ", i + 1);
        scanf("%d", &V1[i]);
    } 
    printf("Digite o valor a ser procurado: ");
    scanf("%d", &P);

    for (i = 0; i < N; i++) {
        if (V1[i] == P) {
            printf("valor encontrado em V[%d]\n", i);
        }
    }
}