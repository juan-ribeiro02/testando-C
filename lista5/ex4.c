#include<stdio.h>

void main()
{
    float n, a1, r;

    printf("Informe o primeiro termo da P.A:");
    scanf("%f", &a1);

    printf("Informe a razao:");
    scanf("%f", &r);

    printf("Informe ate que termo voce quer que va:");
    scanf("%f", &n);

    for(; a1 <= (n*r); a1+=r)
    {
        printf("%.2f\n", a1);
    }
}