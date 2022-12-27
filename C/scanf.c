#include <stdio.h>
int main(){

//inteiro
//    int var;
//    printf("DIgitie um numero inteiro: \n");
//    scanf("%d", &var);

//    printf("o numero digitado foi: %d", var);

//float
//    float var;
//    printf("DIgitie um numero inteiro: \n");
//    scanf("%f", &var);

//    printf("o numero digitado foi: %.2f", var);

//char(para inserir uma unica variavel alphanumerica, para trabalhar com mais de um caractere tem que especificar na variavel)
    char var[10];//(variavel com especificação de quantidade de caracteres)
    printf("DIgitie alguma coisa: \n");
    //scanf("%c", &var);
    scanf("%10[^\n]s", var);//(para trabalhar com mais caracteres tem que mudar de %c para %s, e dispensa o uso do &, depois do % acrescenta o numero maximo de caracteres que poderar se lido, e [^\n] para reconhecer os espaços).

    printf("o numero digitado foi: %s", var);

}