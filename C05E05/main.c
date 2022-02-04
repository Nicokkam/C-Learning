#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void LerString(char s[]);
int LetrasNome(char s1[], char s2[]);

int main(){
    char nome1[MAX], nome2[MAX];
    printf("Informe um nome: ");
    LerString(nome1);
    LetrasNome(nome1, nome2);
    printf("O Nome Possui %i Letras \n", LetrasNome(nome1, nome2));
}

void LerString(char s[]){
    fflush(stdin);
    fgets(s, MAX, stdin);
    if (s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}

int LetrasNome(char s1[], char s2[]){
    int i=0, j=0;
    for (i=0; i<strlen(s1); i++){
        if (s1[i] != ' '){
            s2[j] = s1[i];
            j++;
        }
    }
    s2[j] = '\0';
    return j;
}
