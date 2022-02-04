#include <stdio.h>
#include <stdlib.h>

int main(){
    float *a[10];
    int i;
    for (i=0; i<10; i++){
        printf("[%i]Endereco: %p \n", i, &a[i]);
    }
    return 0;
}
