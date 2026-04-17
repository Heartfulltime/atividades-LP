int main(){

float N1, N2;
printf("Digite a nota da primeira prova: \n");
scanf("%f",&N1);
    if (N1 < 0 || N1 > 10){
        while (N1 < 0 || N1 > 10)        {
        printf("Valor inválido! Digite a nota da primeira prova: \n");
        scanf("%f",&N1);
}
printf("Digite a nota da segunda prova: \n");
    scanf("%f",&N2);
    if (N2 < 0 || N2 > 10){
        while (N2 < 0 || N2 > 10)
        {
            printf("Valor inválido! Digite a nota da segunda prova: \n");
            scanf("%f",&N2);
        }
    
}
printf("a média é: %.1f",(N1+N2)/2);
}   
}