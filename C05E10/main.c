#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void LerString(char s[]);
void Inversor(char s1[], char s2[]);

int main(){
    char frase[MAX], invertido[MAX];
    printf("Digite uma Frase: ");
    LerString(frase);
    Inversor(frase, invertido);
    printf("Frase Invertida: %s \n", invertido);
}

void LerString(char s[]){
    fflush(stdin);
    fgets(s, MAX, stdin);
    if (s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}

void Inversor(char s1[], char s2[]){
    int i=0, j=(strlen(s1)-1);
    for (; i<strlen(s1); i++){
        s2[i] = s1[j];
        j--;
    }
}
