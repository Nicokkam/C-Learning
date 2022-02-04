#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1,x2;
    while (x1!=-1)
    {
        printf("Graus Celsius: ");
        scanf("%f", &x1);
        x2 = x1*(9/5)+32;
        printf("Fahrenheit: %.2f\n", x2);
    }
    return 0;

}
