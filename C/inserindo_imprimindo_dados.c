#include <stdio.h>//biblioteca principal sempre vai ser usada

int main(){//classe principal
    int idade, idade2;//variavel(reserva o espaço de memoria)

    printf("Insira sua idade:\n");//imprime algo na tela
    scanf("%d", &idade);//ler o que o usuario digita

    idade2 = idade + 1;

    printf("sua idade atual: %d \n", idade);//imprimie o que o usuario digitou
    printf("Ano que vem voce tera: %d", idade2);
}