#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
    float z;
}vetor;

int main(){
    vetor v[2];
    float mod;
    printf("Digite os vetores: ");
    scanf("%f%f%f", &v[0].x, &v[0].y, &v[0].z);
    scanf("%f%f%f", &v[1].x, &v[1].y, &v[1].z);
    printf("Vetor 1: (%f)i (%f)j (%f)k \n", v[0].x, v[0].y, v[0].z);
    printf("Vetor 2: (%f)i (%f)j (%f)k \n", v[1].x, v[1].y, v[1].z);
    printf("Soma Vetorial: (%f)i (%f)j (%f)k \n", v[0].x+v[1].x, v[0].y+v[1].y, v[0].z+v[1].z);
    mod = sqrt(pow(v[0].x+v[1].x, 2.0) + pow(v[0].y+v[1].y, 2.0) + pow(v[0].z+v[1].z, 2.0));
    printf("Modulo do Vetor Somado: %f \n", mod);
    return 0;
}

