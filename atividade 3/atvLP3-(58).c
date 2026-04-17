int main(){
int cont, rep;
    printf("quantas vezes repetir: ");
    scanf("%d", &rep);  
for (int j=1; j<=rep; j++)
        { 
        for (int i=10; i>0; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
        }
}