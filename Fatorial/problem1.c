#include <stdio.h>

int Fatorial(int n){

//Função que calcula, recursivamente, o fatorial de n.
if ((n==1) || (n==0)){ 
    return 1;
}               
   else{
      return Fatorial(n-1)*n;
      }
}

int main(){

//Declaração de n, o número informado que gera o fatorial.
int n;                        
printf("Informe o número que deseja obter o fatorial:\n");
scanf("%d",&n);
printf("O fatorial de %d é %d \n",n,Fatorial (n));
}