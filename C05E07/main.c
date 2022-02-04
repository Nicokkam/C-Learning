#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100

void LerString(char s[]);
int ContaUns(char s[]);


int main(){
    char numeros[MAX];
    printf("Digite os numeros: ");
    LerString(numeros);
    printf("O Numero de Uns Eh: %i \n", ContaUns(numeros));
}

void LerString(char s[]){
    fflush(stdin);
    fgets(s, MAX, stdin);
    if (s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}

int ContaUns(char s[]){
    int i=0, j=0;
    for (; i<strlen(s); i++)
        if (s[i] == '1')
            j++;
    return j;
}
