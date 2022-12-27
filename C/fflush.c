#include<stdio.h>
int main(){
    char str1[10];
    char str2[10];

    printf("primeira string: \n");
    scanf("%s", str1);
    fflush(stdin);//limpa o "lixo" de entrada do teclado antes de ir para proxima entrada de dados

    printf("primeira string: \n");
    fgets(str2, 10, stdin);
    fflush(stdin);//limpa o "lixo" de entrada do teclado antes de ir para proxima entrada de dados

    puts("Resultado:");//puts imprime somente textos
    puts(str1);
    puts(str2);
}