#include "racional.h"
#include <stdlib.h>

struct racional
{
    int numerador;
    int denominador;
};

//implementação da função cria racional

Racional* criaRacional (int numerador, int denominador){
    Racional* new_racional = (Racional*)malloc(sizeof(Racional));

    if (denominador < 0)
    {
        printf("Denominador não pode ser negativo");
        return NULL;
    }
    
    new_racional->numerador = numerador;
    new_racional-> denominador = denominador;
    
    return new_racional;
}