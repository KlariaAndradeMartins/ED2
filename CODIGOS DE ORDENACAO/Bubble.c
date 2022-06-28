#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void bubbleSort(int *V, int N){
    int continua, aux, fim = N;

    do{
        continua = 0;
        for(int i = 0; i<fim -1; i++){
            if(V[i] > V[i+1]){
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    }while(continua != 0);
    
    for(int j = 0; j < N; j++){
        printf("%d, ", V[j]);
    }
}

int main(){
    int tam; 
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tam);
    int vet[tam];
    for(int i = 0; i < tam; i++){
        printf("Qual o número na posição %d:", i);
        scanf("%d", &vet[i]);
    }
    bubbleSort(vet, tam);
}
