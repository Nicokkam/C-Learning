#include <stdio.h>
#include <stdlib.h>
#define N 10

void LerVetor(int vet[N]);
int VetorQuadrado(int v2[N], int q[N]);

int main(){
    int x=0;
    do{
    int v[N], q[N];
    LerVetor(v);
    VetorQuadrado(v,q);
    printf("Vetor Digitado: [ %i %i %i %i %i %i %i %i %i %i] \n", v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7], v[8], v[9]);
    printf("Vetor ao Quadrado: [ %i %i %i %i %i %i %i %i %i %i] \n", q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9]);
    x++;
}while(x < 5);
return 0;
}

void LerVetor(int vet[N]){
    int i;
    for (i=0; i<N;i++){
        printf("Informe Um Valor: ");
        scanf("%i", &vet[i]);
    }
}

int VetorQuadrado(int v2[N], int q[N]){
    int i;
    for (i=0; i<N; i++){
            q[i] = pow(v2[i],2);
            }
    return q;
}
