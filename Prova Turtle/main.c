#include <stdio.h>
#include <stdlib.h>
#define N 20

void tabuleiro();
void menu();
int direcao(int x, int contdir);
void caneta();


int main(){
    int x=0,can,contdir=0,cardeais;
    int tartaruga[4];
    tabuleiro();
    tartaruga[2] = caneta(0);
    tartaruga[3] = direcao()
    do{

        menu();
        printf("COMANDO: ");
        scanf("%i",&x);
        switch(x){
        case 1:
            can=0;
            break;
        case 2:
            can=1;
            break;
        case 3:
            cardeais = direcao(x, contdir);
            break;
        case 4:
            cardeais = direcao(x, contdir);
            break;
        case 5:
            break;
        case 6:
            tabuleiro();
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        default:
            printf("Comandos de 1 a 9 !!! \n");
            break;
        }
    caneta(can);
    printf("Direcao: %i \n", cardeais);
    contdir++;
    }
    while (x!=9);
    return 0;
}

void tabuleiro(){
    int tab[N][N], i, j;
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            tab[i][j] = 0;
    tab[0][0] = 1;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            printf("[%i]\t", tab[i][j]);
        }
    printf("\n");
    }
}

void menu(){
    printf("Digite 1 para Levantar Caneta \n");
    printf("Digite 2 para Abaixar Caneta \n");
    printf("Digite 3 para Virar para a Direita \n");
    printf("Digite 4 para Virar para a Esquerda \n");
    printf("Digite 5 para Andar \n");
    printf("Digite 6 para Limpar a Matriz \n");
    printf("Digite 9 para Sair \n");
}

int direcao(int x, int contdir){
    int dir;
    if (contdir==0){
        dir=3;
        break;
    }
    else if (contdir>0){
            if (x==3){
                dir++;
                if (dir>4)
                dir=1;
            }
            if (x==4){
            dir--;
                if (dir<1)
                dir=4;
            }
    }
return dir;
}

void caneta(int can){
    if (can==0)
        printf("Caneta Levantada \n");
    if (can==1)
    printf("Caneta Abaixada \n");
}
