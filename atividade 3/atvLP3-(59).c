int main(){
    int N,cont=0;
        for (int i=0; i<11; i++)    {
            printf("digite um numero: ");
            scanf("%d", &N);
            if (N<0)
            {
                cont++;
            }
                                     }
    printf("quantidade de numeros negativos: %d", cont);
}