#include <stdlib.h>
#include <stdio.h>

int somatorio (int n){
    int x = 0;
    
    if(n==0){
        return 0;
    }
    else{
        for (int i = 0; i < n; i++){
            x = x +1;
        }
        return x;
    }
}


int main (){

//Declarar variavel 
int n;

//Leitura Variavel
printf ("Digite um número:\n");
scanf ("%d", &n);

//Mostar soma
printf ("Somatorio:%d\n", somatorio(n));
return 0;
}