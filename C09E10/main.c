#include <stdio.h>
#include <stdlib.h>

void dobro(int *p[], int i){
        *p[i]=*p[i]*2;
}

int main(){
    int i, v[5];
    for (i=0; i<5; i++){
        printf("Posicao %i: ", i+1);
        scanf("%i\n", &v[i]);
        dobro(&v[i], i);
        printf("%i", v[i]);
    }
    return 0;
}
