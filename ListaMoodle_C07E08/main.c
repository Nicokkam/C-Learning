#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10

void DefineMatriz(int M[N][N]);
void MostraMatriz(int M[N][N]);

int main(){
    int m[N][N];
    DefineMatriz(m);
    MostraMatriz(m);
    return 0;
}

void DefineMatriz(int M[N][N]){
    int i, j;
    for (i=0; i<N; i++)
        for(j=0; j<N; j++){
            if (i<j)
                M[i][j] = (2*i+7*j);
            else if (i==j)
                M[i][j] = (3*pow(i,2)-1);
            else
                M[i][j] = (4*pow(i,3)+5*pow(j,2)+1);
        }
}

void MostraMatriz(int M[N][N]){
    int i, j;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++)
            printf("[%i]\t", M[i][j]);
    printf("\n");
    }
}




