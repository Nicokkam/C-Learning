#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 100

void LerString(char s[]);

int main(){
    char nome[MAX], sexo[MAX], idade[MAX],fem[MAX] = "feminino";
    char aceita[MAX] = "ACEITA", naoaceita[MAX] = "NAO ACEITA";
    printf("Digite o Nome: ");
    LerString(nome);
    printf("Digite o Sexo: ");
    LerString(sexo);
    printf("Digite a Idade: ");
    LerString(idade);
    if ((strcmp(sexo, fem) == 0) && (atoi(idade) < 25))
        printf("%s %s \n", nome, aceita);
    else
        printf("%s %s \n", nome, naoaceita);

}

void LerString(char s[]){
    fflush(stdin);
    fgets(s, MAX, stdin);
    if (s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}
