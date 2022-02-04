#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x, *y;
    printf("Digite 2 Numeros Inteiros: \n");
    scanf("%i%i", &x, &y);
    printf("Numero 1: %i\nNumero 2: %i\n", x, y);
    printf("End. 1: %p\nEnd. 2: %p\n", &x, &y);
    if (&x>&y)
        printf("Maior End.: %p\n", &x);
    else
        printf("Maior End.: %p\n", &y);
    return 0;
}
