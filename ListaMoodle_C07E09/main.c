#include <stdio.h>
#include <stdlib.h>
#define N 3

void LerMatriz(int M[N][N]);
void MostraMatriz(int M[N][N]);
void VetorSomaColuna(int M[N][N]);

int main(){
    int x;
    do{
    int m[N][N];
    LerMatriz(m);
    MostraMatriz(m);
    VetorSomaColuna(m);
    printf("Digite (-1) para Encerrar o Programa: ");
    scanf("%i",&x);
    }while(x!=-1);
    return 0;
}

void LerMatriz(int M[N][N]){
    int i, j;
    for (i=0; i<N; i++)
        for (j=0; j<N; j++){
            printf("Informe [%i][%i]: ", i, j);
            scanf("%i", &M[i][j]);
        }
}

void MostraMatriz(int M[N][N]){
    int i, j;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            printf("[%i] ", M[i][j]);
        }
    printf("\n");
    }
}

void VetorSomaColuna(int M[N][N]){
    int i, j, c, vet[N];
    printf("\n");
    for (c=0; c<N; c++)
        vet[c] = 0;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            if (j==0)
                vet[0] = (M[i][j] + vet[0]);
            else if (j==1)
                vet[1] = (M[i][j] + vet[1]);
            else
                vet[2] = (M[i][j] + vet[2]);
        }
    }
    printf("[%i] [%i] [%i] \n", vet[0], vet[1], vet[2]);
}

