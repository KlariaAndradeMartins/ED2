# include <stdio.h>
# include <stdlib.h>


int OrdenaSelec (int n, int *v){
    printf("%d,", n);
    
    for(int j = 0; j < n; j ++){
      printf("%d,", v[j]);  
    }

    return 0;
}


int main (){
    
    // Declarando variaveis o tamanho do vetor e o vetor.
    int n;
    int v[n];
    
    // Coletando o tamanho do vetor.
    printf ("Informe o tamanho do vetor:");
    scanf  ("%d", &n);
    
    //Preenchendo o vetor
    printf ("Digite os valores:");

    for(int i = 0; i < n;i ++){
      scanf ("%d", &v[i]);  
    }

    //Printar valor inicial

    printf ("Valores Iniciais: ");
    for(int j = 0; j < n; j ++){
      printf("%d,", v[j]);  
    }

   OrdenaSelec (n, v);

    return 0;
}

