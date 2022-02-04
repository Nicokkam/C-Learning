#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1,x2,x3,res;
    printf("Digite Os Tres Numeros a Serem Somados: ");
    scanf("%f%f%f",&x1,&x2,&x3);
    res = x1 + x2 + x3;
    printf("A Soma eh: %.2f", res);
    return 0;
}
