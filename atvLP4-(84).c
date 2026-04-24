#include <stdio.h>

int main() {
    int N;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    int A[N], B[N], soma[N], i;

    for(i = 0; i <N; i++) {
        printf("Digite o %dº número do vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }
 for(i = 0; i <N; i++) {
        printf("Digite o %dº número do vetor B: ", i + 1);
        scanf("%d", &B[i]);
    }
    for(i = 0; i <N; i++) {
        soma[i] = A[i] + B[i];
    }
    printf("A soma dos vetores A e B é: ");
    for(i = 0; i <N; i++) {
        printf("%d ", soma[i]);
    }
}
