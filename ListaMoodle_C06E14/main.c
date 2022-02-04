#include <stdio.h>
#include <stdlib.h>
#define N 5

void LerVetor(int vet[N]);
void MostraVetor(int vet[N]);

int main(){
    int x=0;
    int v[N];
    do{
        scanf("%i",&x);
        LerVetor(v[N]);
        MostraVetor(v[N]);
    }while(x!=-1);
return 0;
}

void LerVetor(int vet[N]){
    int i;
    for (i=0; i<N;i++){
        printf("Informe Um Valor: ");
        scanf("%i",&vet[i]);
    }
}

void MostraVetor(int vet[N]){
    int i;
    for (i=0; i<N; i++){
        printf("[%i] ", vet[i]);
    }
}
