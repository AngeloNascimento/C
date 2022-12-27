#include <stdlib.h>
#include <stdio.h>

void main()
{
    int i;
    int *v;
    v = (int *)malloc(sizeof(int) * 10); // 'v' é um ponteiro para uma área que
                                         // tem 10 inteiros.
                                         // 'v' funciona exatamente como um vetor
    v[0] = 10;
    v[1] = 11;
    v[2] = 12;

    for (i = 0; i < 10; i++)
        printf("v[%d]: %d\n", i, v[i]);

    printf("Endereço de 'v': %p", v); // imprime o endereço da área alocada para 'v'
    free(v);
}