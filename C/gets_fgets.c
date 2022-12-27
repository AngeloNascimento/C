#include<stdio.h>

int main(){
//gets()

//    char texto[10];

//    printf("digite um texto: \n");
//    gets(texto);//permite digitar mais do que o numero de caracteres definidas.

//    printf("voce digitou: %s\n", texto);

//fgets()
    char texto[10];

    printf("digite um texto: \n");
    fgets(texto, 10, stdin);//formataçao do fgets aleme da variavel, pede o numero de caracteres permitidas "10", e de onde ta vindo a entrada de dados, no caso teclado usa-se "stdin"

    printf("voce digitou: %s\n", texto);

}