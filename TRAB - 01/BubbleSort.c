void ordBolha (int v[], int n) {
    int i, j;
    int temp;
    char troca;

    troca = 'v';

    for (i=n-1; (i >= 1) && (troca == 'v'); i--)  {
         troca = 'f';
         for (j= 0; j < i ;j++) {
             if  (v[j] > v[j+1]) {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                troca = 'v';
             }
         }
    }
 }