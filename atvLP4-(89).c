#include <stdio.h>

int main() {
   #define N 15
   int V1[N], V2[N], i;
    for (i = 0; i < N; i++) {
        printf("Digite o elemento %d do vetor V1: ", i + 1);
        scanf("%d", &V1[i]);
    } 
    for (i = 0; i < N; i++) {
        printf("Digite o elemento %d do vetor V2: ", i + 1);
        scanf("%d", &V2[i]);
    }
    for (i = 0; i < N; i++) {
        if (V1[i] == V2[i]) {
            printf("V1[%d] é igual a V2[%d]\n", i, i);
        }
    }
}