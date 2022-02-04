#include <stdio.h>
#include <stdlib.h>
#define NL 10
#define NC 3

void LerMatriz(int m[NL][NC]);
void MostraMatriz(int m[NL][NC]);
void MenorNotaPorLinha(int M[NL][NC]);

int main(){
    int x;
    do{
    int m[NL][NC];
    LerMatriz(m);
    MostraMatriz(m);
    MenorNotaPorLinha(m);
    printf("Digite (-1) se Deseja Encerrar o Programa: ");
    scanf("%i", &x);
    }while(x!=-1);
    return 0;
}

void LerMatriz(int M[NL][NC]){
    int i, j;
    for (i=0; i<NL; i++)
        for(j=0; j<NC; j++){
            printf("Informe [%i][%i]: ", i, j);
            scanf("%i",&M[i][j]);
        }
}

void MostraMatriz(int M[NL][NC]){
    int i, j;
    for (i=0; i<NL; i++){
        for (j=0; j<NC; j++)
            printf("[%i]\t", M[i][j]);
    printf("\n");
    }
}

void MenorNotaPorLinha(int M[NL][NC]){
    int i, j, menor, c, V[NL];
    for (i=0; i<NL; i++){
        menor = M[i][0];
        for (j=0; j<NC; j++){
                if (menor > M[i][j])
                    menor = M[i][j];
        }
    V[i] = menor;
    }
    for (c=0; c<NL; c++)
        printf("Menor da linha: %i\n", V[c]);
}
