#include <stdio.h>
#include "complexo.c"

int main (int argc, char *argv[]) {
    // Exemplo de uso das funções do TAD Complexo
    Complexo* z1 = criaComplexoFormaAlgebrica(3, 4);
    if (z1 != NULL) {
        float a, b;
        formaAlgebrica(z1, &a, &b);
        printf("Forma algébrica de z1: %.2f + %.2fi\n", a, b);
        liberaComplexo(z1);
    }

    Complexo* z2 = criaComplexoFormaPolar(5, M_PI / 4); // 5(cos(pi/4) + sin(pi/4)i) = 5(√2/2 + √2/2i) = 5 + 5i
    if (z2 != NULL) {
        float a, b;
        formaPolar(z2, &a, &b);
        printf("Forma polar de z2: %.2f(cos(%.2f) + sin(%.2f)i)\n", a, b, b);
        liberaComplexo(z2);
    }

    return 0;
}
