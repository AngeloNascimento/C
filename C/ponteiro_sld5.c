#include <stdlib.h>
#include <stdio.h>

void main()
{
    int i;
    int *vet;
    int *ptr;

    vet = (int *)malloc(sizeof(int) * 10); // vet ponteiro para uma área de 10 inteiros
    vet[4] = 44; // 'vet' funciona como um vetor, depois de malloc

    printf("Antes da modificação\n");
    for (i = 0; i < 10; i++)
        printf("v[%d]: %d\n", i, vet[i]);

    ptr = vet; // 'ptr'  aponta para o início da
               // área alocada por 'vet

    *ptr = 11; // vet[0] = 11
               // coloca 11 na primeira posição da área alocada

    printf("%p\n",  ptr);
    printf("%d\n", *ptr);

    ptr++;     // avança o apontador
    *ptr = 12; // vet[1] = 12

    printf("%p\n",  ptr);
    printf("%d\n", *ptr);
      
    printf("Após a modificação\n");
    for (i = 0; i < 10; i++)
        printf("v[%d]: %d\n", i, vet[i]);

    // free(ptr);  // Liberar 'ptr' direto causa NULL POINTER ASSIGNMENT
    // Corrigindo, a forma correta é:
    ptr--;
    free(ptr);
}