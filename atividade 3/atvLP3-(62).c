int main(){
    int N,cont=0, ALUNOS, PROVAS,med;
    printf("digite o numero de alunos: ");
    scanf("%d", &ALUNOS);
    printf("digite o numero de provas: ");
    scanf("%d", &PROVAS);

        for (int i=0; i<=ALUNOS; i++)       {  
            for (int j=0; j<=PROVAS; j++)
            printf("digite a nota da prova %d: ", j+1);
            scanf("%d", &N);  
                printf("\n");  {
                    cont=N+cont;
               
                }
                 med=cont/PROVAS;
        };
}