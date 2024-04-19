#include "complexo.h"
#include <math.h>

struct complexo{
    int real;
    int imaginario;
};

// fun��o para criar um numero complexo na forma algebrica z = a + bi;

Complexo* criaComplexoFormaAlgebrica(float a, float b){
    Complexo* z = (Complexo*)malloc(sizeof(Complexo));
    if(z != NULL){
        z->real = a;
        z->imaginario = b;
    }
    return z;
}

//Cria um n�mero complexo na forma polar z = a(cos(b) + sen(b)i), com a e b sendo n�meros reais.

Complexo* criaComplexoFormaPolar(float a, float b){

    Complexo* z = (Complexo*)malloc(sizeof(Complexo));

    if(z != NULL){
        z->real = a*cos(b);
        z->imaginario =  a*sin(b);
    }

    return z;
}

// Fun��o que libera a mem�ria alocada para um n�mero complexo.

void liberaComplexo(Complexo* z) {
    free(z);
}

//Retorna a parte real a e a parte imagin�ria b do n�mero complexo z na forma alg�brica z= a + bi, com a e b sendo n�meros reais

void formaAlgebrica(Complexo* z, float* a, float* b) {
    *a = z->real;
    *b = z->imaginario;
}

//Retorna o m�dulo a e o argumento b do n�mero complexo z na forma polar z = a(cos(b) +sen(b)i), com a e b sendo n�meros reais.

void formaPolar(Complexo* z, float* a, float* b) {
    *a = sqrt(z->real * z->real + z->imaginario * z->imaginario);
    *b = atan2(z->imaginario, z->real);
}


//implementa��o da fun��o cria racional

/*Racional* criaRacional (int numerador, int denominador){
    Racional* new_racional = (Racional*)malloc(sizeof(Racional));

    if (denominador < 0)
    {
        printf("Denominador n�o pode ser negativo");
        return NULL;
    }

    new_racional->numerador = numerador;
    new_racional-> denominador = denominador;

    return new_racional;
}*/
