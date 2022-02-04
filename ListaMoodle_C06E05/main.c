#include <stdio.h>
#include <stdlib.h>
#define N 8

void levetor(v[N]);
void mostravetor(v[N]);
int entranum_somaposicao(v[N]);

int main(){
    int v[N];
    levetor(v[N]);
    mostravetor(v[N]);
    printf("A Soma eh: %i\n", entranum_somaposicao(v[N]));
    return 0;
}

void levetor(v[N]){
    int i, vet[N];
    for (i=0; i<N; i++){
        printf("Digite um Valor para a Posicao [%i]: ", i);
        scanf("%i", &vet[i]);
    }
}

void mostravetor(v[N]){
    int i, vet[N];
    printf("[ ");
    for (i=0; i<N; i++){
        printf("%i ", vet[i]);
    }
    printf("]\n");
}

int entranum_somaposicao(v[N]){
    int x, y, soma, vet[N];
    printf("Digite 2 Posicoes Do Vetor A Serem Somadas: ");
    scanf("%i%i", &x, &y);
    soma = (vet[x] + vet[y]);
    return soma;
}
