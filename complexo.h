#include <stdlib.h>
#include <stdio.h>
#include <math.h>


typedef struct complexo Complexo;

//arquivo de cabeçalho números complexos.

Complexo* criaComplexo(int numerador, int demoninador);

Complexo* criaComplexoFormaAlgebrica(float a, float b);

Complexo* criaComplexoFormaPolar (float a, float b);

void liberaComplexo(Complexo* z);

void formaAlgebrica(Complexo* z, float* a, float* b);

void formaPolar(Complexo* z, float* a, float* b);

int testeReal(Complexo* z);

int testeImaginario(Complexo* z);

int testeZero(Complexo * z);

Complexo* addComplexo(Complexo* z1, Complexo* z2);

Complexo* subComplexo(Complexo* z1, Complexo* z2);

Complexo* multComplexo(Complexo* z1, Complexo* z2);

Complexo* divComplexo(Complexo* z1, Complexo* z2);

Complexo* conjugadoComplexo(Complexo* z);

Complexo* potenciaComplexo(Complexo* z, int n);

Complexo* raizComplexo(Complexo* z, int n);
