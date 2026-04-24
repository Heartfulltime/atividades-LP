#include <stdio.h>

int main() {
    int A[10],M[10];
    int i, mult;

    for(i = 0; i <10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &A[i]);
    }
     printf("Digite o número multiplicador: ");
        scanf("%d", &mult);

    for(i = 0; i <10; i++) {
        M[i] = A[i] * mult;
    }

    for(i = 0; i <10; i++) {
        printf("M[%d] = %d\n", i+1, M[i]);
    }

}