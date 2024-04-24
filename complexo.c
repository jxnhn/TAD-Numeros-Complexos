#include "complexo.h"
#include <math.h>
#include <stdlib.h>

struct complexo{
    float real;
    float imaginario;
};

// função para criar um numero complexo na forma algebrica z = a + bi;

Complexo* criaComplexoFormaAlgebrica(float a, float b){
    Complexo* z = (Complexo*)malloc(sizeof(Complexo));
    if(z != NULL){
        z->real = a;
        z->imaginario = b;
    }
    return z;
}

//Cria um número complexo na forma polar z = a(cos(b) + sen(b)i), com a e b sendo números reais.

Complexo* criaComplexoFormaPolar(float a, float b){

    Complexo* z = (Complexo*)malloc(sizeof(Complexo));

    if(z != NULL){
        z->real = a*cos(b);
        z->imaginario =  a*sin(b);
    }

    return z;
}

// Função que libera a memória alocada para um número complexo.

void liberaComplexo(Complexo * z) { //ana void liberaComplexo(Complexo* z)
    free(z);
}

//Retorna a parte real a e a parte imaginária b do número complexo z na forma algébrica z= a + bi, com a e b sendo números reais

void formaAlgebrica(Complexo* z, float* a, float* b) {
    *a = z->real;
    *b = z->imaginario;
}

//Retorna o módulo a e o argumento b do número complexo z na forma polar z = a(cos(b) +sen(b)i), com a e b sendo números reais.

void formaPolar(Complexo* z, float* a, float* b) {
    *a = sqrt(z->real * z->real + z->imaginario * z->imaginario);
    *b = atan2(z->imaginario, z->real);
}

/*Função que verifica se a parte imaginária de um número complexo é igual a zero, retornando 1
caso afirmativo e 0 caso contrário.*/

int testeReal(Complexo* z)
{
    if (z->imaginario == 0){
        return 1;
    } else {
        return 0;
    }
}
//Função que verifica a parte real

int testeImaginario(Complexo* z)
{
    if (z->real == 0){
        return 1;
    } else {
        return 0;
    }
}

/*testeZero Função que verifica se tanto a parte real quanto a parte imaginária de um número complexo são
iguais a zero, retornando 1 caso afirmativo e 0 caso contrário.*/

int testeZero(Complexo* z)
{
    if (z->real == 0 && z->imaginario == 0){
        return 1;
    } else {
        return 0;
    }
}
/*addComplexo Retorna um número complexo oriundo da soma z = z1 + z2, com z1 e z2 sendo números
complexos.*/

Complexo* addComplexo(Complexo* z1, Complexo* z2)
{
    Complexo* resultado = (Complexo*)malloc(sizeof(Complexo));
        if (resultado != NULL){
    //printf("Valor de z1: real = %f, imaginario = %f\n", z1->real, z1->imaginario);
    //printf("Valor de z2: real = %f, imaginario = %f\n", z2->real, z2->imaginario);
            resultado->real = z1->real + z2->real;
            resultado->imaginario = z1->imaginario + z2->imaginario;
    printf("Resultado da soma: real = %f, imaginario = %f\n", resultado->real, resultado->imaginario);
        }
    return resultado;
}

/*subComplexo Retorna um número complexo oriundo da subtração z = z1 - z2, com z1 e z2 sendo números
complexos.*/

Complexo* subComplexo(Complexo* z1, Complexo* z2)
{
    Complexo* resultado = (Complexo*)malloc(sizeof(Complexo));
        if(resultado != NULL){
            resultado->real = z1->real - z2->real;
            resultado->imaginario = z1->imaginario - z2->imaginario;
        }
    return resultado;
}


//implementação da função cria racional

/*Racional* criaRacional (int numerador, int denominador){
    Racional* new_racional = (Racional*)malloc(sizeof(Racional));

    if (denominador < 0)
    {
        printf("Denominador não pode ser negativo");
        return NULL;
    }

    new_racional->numerador = numerador;
    new_racional-> denominador = denominador;

    return new_racional;
}*/
