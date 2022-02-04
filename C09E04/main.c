#include <stdio.h>
#include <stdlib.h>

void Trocar(int A, B);

int main() {
    int A, B;
    printf("Digite 2 Numeros Inteiros: \n");
    scanf("%i%i", &A, &B);
    printf("A=%i\nB=%i\n\n", A, B);
    Trocar(A,B);
    printf("At=%i\nBt=%i\n\n", A, B);
    return 0;
}

void Trocar(int A, B){
    int z;
    int *p1, *p2, *p3;
    p1 = &A;
    p2 = &B;
    p3 = &z;
    *p3=A;
    *p1=B;
    *p2=z;
}
