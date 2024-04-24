 #include <stdio.h>
#include "complexo.c"

int main (int argc, char *argv[]) {
    // Exemplo de uso das funções do TAD Complexo
    Complexo* z1 = criaComplexoFormaAlgebrica(3, 4);
    if (z1 != NULL) {
        float a, b;
        formaAlgebrica(z1, &a, &b);
        printf("Forma algebrica de z1: %.2f + %.2fi\n", a, b);
       // liberaComplexo(z1);
    }

    Complexo* z2 = criaComplexoFormaPolar(5, M_PI / 4); // 5(cos(pi/4) + sin(pi/4)i) = 5(√2/2 + √2/2i) = 5 + 5i
    if (z2 != NULL) {
        float a, b;
        formaPolar(z2, &a, &b);
        printf("Forma polar de z2: %.2f(cos(%.2f) + sin(%.2f)i)\n", a, b, b);
     //  liberaComplexo(z2);
    }
    //teste das funções real, imaginario e zero

    int teste1, teste2, teste3;

    teste1 = testeReal(z1);
    teste2 = testeImaginario(z1);
    teste3 = testeZero(z2);

    printf("Teste parte real de z1: %d\n", teste1);
    printf("Teste parte imaginaria de z1: %d\n", teste2);
    printf("Teste zero para z2: %d\n", teste3);

    //funções de soma e subtração


    Complexo* z3 = criaComplexoFormaAlgebrica(3, 4);
    if (z3 != NULL) {
        float a, b;
        formaAlgebrica(z1, &a, &b);
        printf("Forma algebrica de z1: %.2f + %.2fi\n", a, b);
       // liberaComplexo(z1);
    }


    Complexo* soma = addComplexo(z1, z2);
    if (soma != NULL) {
        float a, b;
        formaAlgebrica(soma, &a, &b);
        printf("Soma de z1 e z2: %.2f + %.2fi\n", a, b);
        liberaComplexo(soma);
    }

    Complexo* soma2 = addComplexo(z1, z3);
    if (soma2 != NULL) {
        float a, b;
        formaAlgebrica(soma, &a, &b);
        printf("Soma de z1 e z3: %.2f + %.2fi\n", a, b);
        liberaComplexo(soma);
    }

    Complexo* subtracao = subComplexo(z1, z2);
    if (subtracao != NULL) {
        float a, b;
        formaAlgebrica(subtracao, &a, &b);
        printf("Subtracao de z1 e z2: %.2f + %.2fi\n", a, b);
        liberaComplexo(subtracao);
    }


    return 0;
}
