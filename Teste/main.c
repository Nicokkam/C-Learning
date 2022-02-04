#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, res;
    printf("Insira Dois Valores: ");
    scanf("%f%f", &n1, &n2);
    res = (n1 + n2)/2;
    printf("A Media Dos Valores %.2f e %.2f Resulta em %.2f", n1, n2, res);
    return 0;
}
