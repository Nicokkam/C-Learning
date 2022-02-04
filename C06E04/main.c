#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

void lerstring(char s[]);

typedef struct{
    char matricula;
    char nome;
    float P1;
    float P2;
    float P3;
}aluno;

int main(){
    aluno a[5];


    return 0;
}

void lerstring(char s[]){
    fflush(stdin);
    fgets(s, MAX, stdin);
    if (s[strlen(s)-1] == '\n')
        s[strlen(s)-1] == '\0';
}
