int main(){
    int N,cont=0;
        for (int i=0; i<11; i++)       {  
            printf("digite um numero: ");
            scanf("%d", &N);  
             printf("\n");  
            if (10<=N && N<=20)    {
                cont++;
            }
        }
   printf("quantidade de numeros entre 10 e 20: %d", cont);
}