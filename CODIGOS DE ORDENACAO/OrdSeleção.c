#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void insertionSort(int *V, int N){
    int aux;
    for (int i = 1; i < N; i++){
        aux = V[i];
        for(int j = i; (j > 0) && (aux < V[j - 1]); j--){
            V[j] = V[j-1];
            V[j] = aux;
        }
    }
    for(int k = 0; k < N; k++){
        printf("%d,",V[k]);
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
    insertionSort(vet, tam);
}
