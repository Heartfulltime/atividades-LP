int main(){

float V1, V2;
printf("Digite o valor 1: \n");
scanf("%f",&V1);
    printf("Digite o valor 2: \n");
    scanf("%f",&V2);
    while (V2 == 0){
        printf("Digite o valor 2: \n");
        scanf("%f",&V2);
}
printf("O valor é: %.1f",V1/V2);

}   