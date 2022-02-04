#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100

void LerString(char s[]);
void Troca0Por1(char s1[], char s2[]);

int main(){
    char numero0[MAX], numero1[MAX];
    printf("Digite o Numero Desejado: ");
    LerString(numero0);
    Troca0Por1(numero0,numero1);
    printf("Numero Modificado: %s \n", numero1);
}

void LerString(char s[]){
    fflush(stdin);
    fgets(s, MAX, stdin);
    if (s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}

void Troca0Por1(char s1[], char s2[]){
    int i=0, j=0;
    for (; i<strlen(s1); i++){
        if (s1[i] == '0')
            s2[i] = '1';
        else
            s2[i] = s1[i];
    }
}


