#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void LerString(char s[]);
void Retorna4(char s1[], char s2[]);

int main(){
    char nome1[MAX], nome2[MAX];
    printf("Digite um Nome: ");
    LerString(nome1);
    Retorna4(nome1,nome2);
    printf("Primeiras 4 Letras: %s \n", nome2);
}

void LerString(char s[]){
    fflush(stdin);
    fgets(s, MAX, stdin);
    if (s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}

void Retorna4(char s1[], char s2[]){
    int i=0,j=0;
    for(i=0; i<4; i++){
        s2[j] = s1[i];
        j++;
        }
}
