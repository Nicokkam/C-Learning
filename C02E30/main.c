#include <stdio.h>
#include <stdlib.h>
acerto(int,int);

int main(){
    int i=0, x, ac=0;
    do{
        int r1 = rand() % 100;
        int r2 = rand() % 100;
        printf("Qual eh a soma de %i + %i ?\n",r1,r2);
        scanf("%i",&x);
        if (x == acerto(r1,r2)){
            printf("Acertou!\n");
            ac += 1;
        }
        else
            printf("Errou!\n");
        i += 1;
    }
    while(i<5);
    printf("Voce acertou %i de 5 !!\n",ac);
return 0;
}

int acerto(int a,int b){
return a+b;
}

