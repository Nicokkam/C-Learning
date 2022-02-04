#include <stdio.h>
#include <stdlib.h>

int somadivisores(int entrada);

int main(){
    int x;
    x = 0;
    while (x!=-1){
        printf("Digite um numero inteiro positivo: ");
        scanf("%i",&x);
        printf("A soma dos divisores: %i \n", somadivisores(x));
        }
    return 0;
}


int somadivisores(int entrada){
    int i, soma=0;
    for(i=1;i<entrada;i++){
        if (entrada%i == 0)
        soma = soma + i;
    }
return soma;
}



