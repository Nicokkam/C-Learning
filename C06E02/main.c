#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

typedef struct{
    char nome[MAX];
    int idade;
    char ende[MAX];
}cadastro;

void lerstring(char s[]);

int main(){
    cadastro c;
    printf("Insira seu nome: ");
    lerstring(c.nome);
    printf("Insira sua idade: ");
    scanf("%i", &c.idade);
    printf("Insira seu endereco: ");
    lerstring(c.ende);
    printf("Nome: %s Idade: %i Endereco: %s", c.nome, c.idade, c.ende);
    return 0;
}

void lerstring(char s[]){
    fflush(stdin);
    fgets(s, MAX, stdin);
    if (s[strlen(s)-1] == '\n')
        s[strlen(s)-1] == '\0';
}
