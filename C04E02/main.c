#include <stdio.h>
#include <stdlib.h>
#define N 6

void LerVetor(int vet[N]);

int main()

{
    int v[N];
    LerVetor(v);
    printf("O Vetor: [ %i %i %i %i %i %i ] \n", v[0], v[1], v[2], v[3], v[4], v[5]);
    return 0;
}

void LerVetor(int vet[N]){
    int i;
    for (i=0; i<N;i++){
        printf("Informe Um Valor: ");
        scanf("%i",&vet[i]);
    }
}
