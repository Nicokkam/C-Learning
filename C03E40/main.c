#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, maior=0, menor;
    printf("Digite Numeros Inteiros Positivos. Para parar digite -1\n");
do{
        scanf("%i",&num);
        if (num>maior)
            maior = num;
        else if (num<=maior)
            menor = num;

    }while(num>=0);
printf("O Menor foi %i e o Maior foi %i\n",menor,maior);
return 0;
}
