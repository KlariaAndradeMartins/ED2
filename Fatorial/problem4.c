#include <stdlib.h>
#include <stdio.h>

int soma (int n, int vetor[n]){
    int cont = n;
    int soma = 0;

    do{
      for(int i = 0; i < n; i++){
        soma = soma + vetor[i];
        cont = cont - 1;
       }
    } while (cont != 0);
    return soma;   
}


int main(){

    //Declarar variavel de quantidade de números
    int n;
    int vetor[n];
    int resultado; 

    //Fazer Leitura do valor 
    printf ("Digite a quantidade de números que vai digitar:");
    scanf ("%d", &n);

    //Criar Vetor para armazenar os dados
    for (int i = 0; i < n; i++){
       scanf("%d", &vetor[i]);
    }

    //Chamar função 
    resultado = soma (n,vetor[n]);
    printf("Soma é igual: %d \n", resultado);

}