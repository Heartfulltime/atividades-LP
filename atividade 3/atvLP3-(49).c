int main(){
char NV;
float N1, N2;
do
{
    printf("Digite a nota da primeira prova: \n");
    scanf("%f",&N1);
        if (N1 < 0 || N1 > 10){
         while (N1 < 0 || N1 > 10){
         printf("Valor inválido! Digite a nota da primeira prova: \n");
         scanf("%f",&N1);
        }
}
    printf("Digite a nota da segunda prova: \n");
     scanf("%f",&N2);
        if (N2 < 0 || N2 > 10){
         while (N2 < 0 || N2 > 10)
        {
            printf("Valor inválido! Digite a nota da segunda prova: \n");
            scanf("%f",&N2);}
        }
         printf("a média é: %.1f\n",(N1+N2)/2);
         printf("Deseja calcular a média de novo? (S/N) \n");
         scanf(" %c",&NV);
    }while (NV == 'S' || NV == 's');
    return 0;
}
