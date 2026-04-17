int main(){

    int N;
    printf("Digite um numero inteiro: "); 
    scanf("%d", &N);
        while (N <= 0  )
        {
            printf("Numero invalido! Digite novamente: ");
            scanf("%d", &N);
     }
    for (int i=1; i<=N; i++)
    {
        printf("%d ", i);
    }
}