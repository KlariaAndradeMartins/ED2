struct produto{
   int numero;
   char descricao[20];
};
typedef struct produto Produto;

void Bolha (Produto temp[], int n){
    int i, j;
    int troca = 0;
    
    for(i = 0; i<n-1; i++){
        if(temp[i].numero > temp[i+1].numero){
            troca = temp[i].numero;
            temp[i].numero = temp[i+1].numero;
            temp[i+1].numero = troca;
        }
        else if(i==n-1){
            if(temp[n-1].numero < temp[0].numero){
            troca = temp[0].numero;
            temp[0].numero = temp[n-1].numero;
            temp[n-1].numero = troca; 
            }
        }
    }

}
void printBolha(Produto temp[], int n){
    
    int i = 0;

    for(i = 0; i<n; i++){
        printf("%d", temp[i].numero);
    }
}