#include <stdlib.h>
#include <stdio.h>

int Fibonacci(int n){
    int i;
    int fib1 = 0;
    int fib2 = 0;
    int soma;

    for(i = 3; i<=n; i = i+1){
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
    }
    return fib2;
}
int main(){

//Declarar a variavel 
int n;

//Solicitar a variavel 
printf("Informe o número que deseja ter da sequência:\n");
scanf("%d",&n);

//Chamar a função e printar o resultado 
printf("O número da posição %d é %d \n",n,Fibonacci(n));
}