#include <stdio.h>
#include <stdlib.h>

void triangulofloyd(int entrada);

int main(){
    int x=0;
    do{
        printf("Entre com o numero de linhas desejadas do triangulo de Floyd: ");
        scanf("%i",&x);
        triangulofloyd(x);
    }while(x!=-1);
return 0;
}

void triangulofloyd(int entrada){
    int i, linha=0, z=0;
    for (i=1;i<=entrada;i++){
        while (linha<i){
        z++;
        printf("%i ",z);
        linha++;
        }
        printf("\n");
        linha=0;
    }
}
