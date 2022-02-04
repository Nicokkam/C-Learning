#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void LerString(char s[]);
int ContaVogal(char s[]);
void SubstitueVogal(char s1[], char s2[], char letra);

int main(){
    char palavra[MAX], saida[MAX], substituir;
    printf("Digite Uma Palavra: ");
    LerString(palavra);
    printf("Numero de Vogais: %i \n", ContaVogal(palavra));
    printf("Digite Uma Letra Para Substituir as Vogais: ");
    scanf(" %c", &substituir);
    SubstitueVogal(palavra, saida, substituir);
    printf("Nova Palavra: %s \n", saida);
    return 0;
}

void LerString(char s[]){
    fflush(stdin);
    fgets(s, MAX, stdin);
    if (s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}

int ContaVogal(char s[]){
    int i=0, j=0;
    for (; i<strlen(s); i++){
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
            j++;
    }
    return j;
}

void SubstitueVogal(char s1[], char s2[], char letra){
    int i=0;
    for (; i<strlen(s1); i++){
        if ((s1[i] == 'a') || (s1[i] == 'e') || (s1[i] == 'i') || (s1[i] == 'o') || (s1[i] == 'u'))
            s2[i] = letra;
        else
            s2[i] = s1[i];
    }
}
