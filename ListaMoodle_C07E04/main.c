#include <stdio.h>
#include <stdlib.h>
#define N 4

void LerMatriz(int m[N][N]);
void MostraMatriz(int m[N][N]);
int MaiorQue10(int m[N][N]);

int main(){
    int x=0;
    do{
    int m[N][N];
    LerMatriz(m[N][N]);
    MostraMatriz(m[N][N]);
    printf("Possui %i Termos Maiores que 10 \n", MaiorQue10( m[N][N]));
    printf("Digite (-1) se Desejar Parar: ");
    scanf("%i", &x);
    }while(x!=-1);
    return 0;
}

void LerMatriz(int m[N][N]){
    int i, j, M[N][N];
    for (i=0; i<N; i++)
        for(j=0; j<N; j++){
            printf("Informe [%i][%i]: ", i, j);
            scanf("%i",&M[i][j]);
        }
}

void MostraMatriz(int m[N][N]){
    int i, j, M[N][N];
    for (i=0; i<N; i++){
        for (j=0; j<N; j++)
            printf("[%i]\t", M[i][j]);
    printf("\n");
    }
}

int MaiorQue10(int m[N][N]){
    int i, j, M[N][N], cont=0;
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            if (M[i][j] > 10)
                cont = cont + 1;
    return cont;
}
