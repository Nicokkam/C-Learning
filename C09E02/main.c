#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a,*b;
    printf("Endereco 1: %p \nEndereco 2: %p \n", &a, &b);
    if (&a>&b)
        printf("Maior: %p \n", &a);
    else
        printf("Maior: %p \n", &b);
    return 0;
}
