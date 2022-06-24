#include <stdio.h>
#include <stdlib.h>
#include <Bolhas.h>
#include <Vetores.h>

struct produto{
   int numero;
   char descricao[20];
};
typedef struct produto Produto;

int main(){
    
    int quantidade;
    int op = 0;
    

     do {
        printf("Ecolha o tamanho do vetor:");
        scanf ("%d", &quantidade);
        Produto temp[quantidade];

        printf("Escolha um metodo de ordenação:\n1 - Bubble Sort\n2 - Merge\n3 - Shell\n4 - Quick Sort\n5 - Sair");
        scanf("%d", &op);

        if (op == 1){
           preencheVetAleatorio(temp, quantidade);
           Bolha(temp, quantidade);
           printBolha(temp, quantidade);

        }
   
    } while(op!= 5);
}
