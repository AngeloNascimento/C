#include<stdio.h>

int main(){

    //valor é a variavel que sera apontada pelo ponteiro
    int valor = 27;

    //declaracao  da variavel ponteiro
    int *ptr;//* para mostrar que é um ponteiro

    //atribuindo o endereço da variavel ao ponteiro
    ptr = &valor;

    printf("utilizando o ponteiro \n\n");
    printf("conteudo da variavel valor: %d\n", valor);
    printf("endereço da variavel valor: %x\n", &valor);//%x para exibir hexadeceimais
    printf("conetudo da variavel ponteiro ptr: %x", ptr);
}