// QUESTÃO 03: Implementar um programa
// que calcule o valor de baseexpoente, onde
// base e expoente são números inteiros
// dados pelo usuário.

#include <stdio.h>

void main()
{
    int base, expoente, i, resul = 1;

    printf("informe a base");
    scanf("%d", &base);

    printf("informe a expoente");
    scanf("%d", &expoente);

    for (i = 1; i <= expoente; i++)
    {
        resul *= base;
    }

    printf("%d", resul);
}