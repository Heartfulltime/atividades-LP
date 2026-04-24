#include <stdio.h>

int main() {

#define D 365
 
int A[D], media=0, cont=0, maior, menor;

    for(int i = 0; i < D; i++) {
        printf("digite a temperatura media do dia %d: ", i + 1);
        scanf("%d", &A[i]);
        media=media + A[i];
}

    menor = A[0];
    for(int i = 1; i < D; i++) {
        if(A[i] < menor) {
            menor = A[i];
        }
    }

    maior = A[0];
    for(int i = 1; i < D; i++) {
        if(A[i] > maior) {
            maior = A[i];
        }
    }

    media = media / D;

    for(int i = 0; i < D; i++) {
        if(A[i] < media) {
        cont++;
        }
    }
        printf("A menor temperatura registrada foi: %d\n", menor);
        printf("A maior temperatura registrada foi: %d\n", maior);
        printf("A media anual de temperatura é: %d\n", media);
        printf("O numero de dias com temperatura abaixo da media anual é: %d\n", cont);
}   