#include "racional.h"
#include <stdlib.h>

//arquivo de cabeçalho números complexos.

Racional *  criaComplexoFormaAlgebrica(float a, float b);

Racional* criaComplexoFormaPolar (float a, float b);

void liberaComplexo(Racional* z);

void formaAlgebrica(Racional* z, float* a, float* b);

void formaPolar(Racional* z, float* a, float* b);

int testeReal(Racional * z);

int testeImaginario(Racional * z);

int testeZero(Racional * z);

Racional* addComplexo(Racional* z1, Racional* z2);

Racional* subComplexo(Racional* z1, Racional* z2);

Racional* multComplexo(Racional* z1, Racional* z2);

Racional* divComplexo(Racional* z1, Racional* z2);

Racional* conjugadoComplexo(Racional* z);

Racional* potenciaComplexo(Racional* z, int n);

Racional* raizComplexo(Racional* z, int n);