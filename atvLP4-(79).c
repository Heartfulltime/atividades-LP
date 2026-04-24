int main(){

int V[19],i,j,cont=0;
for(i=1; i<21; i++){
    printf("Digite a nota do aluno %d: ", i);
    scanf("%d", &V[i]);
cont=cont+V[i];
}   
cont=cont/19;
    for (i=1; i<21; i++){
        if(V[i]>cont){
            printf("A nota do aluno %d é maior que a média\n", i);
        }
    }
}