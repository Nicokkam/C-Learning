#include <stdio.h>
#include <stdlib.h>

float serieharmonica(int entrada);

int main(){
    int x=0;
    do{
        printf("Digite um numero inteiro, como sendo o ultimo termo da serie harmonica: ");
        scanf("%i",&x);
        printf("O resultado: %f \n", serieharmonica(x));
}while (x!=-1);
return 0;
}


float serieharmonica(int entrada){
    int i;
    float soma=0;
    for (i=1;i<=entrada;i++){
        soma = soma + (1.0/i);
    }
return soma;
}
