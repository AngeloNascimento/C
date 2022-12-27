#include <stdio.h>
//#include <locale.h>(reconhecimento de acentos)

//REGISTROS
struct loja{//Resgistro é como se tivesse criando um novo tipo de dados
    int cod;
    float valor;
};
int main(){
    //setlocale(LC_ALL, "Portuguese");

    struct loja produto;

    //loja.cod = 10;
    //loja.valor = 12.50;
    // printf("%d \n%.2f", loja.cod, loja.valor);

    printf("Digite o codigo do produto:\n");
    scanf("%d", &produto.cod);

    printf("Digite o valor do produto:\n");
    scanf("%f", &produto.valor);

    printf("Os dados do produto:\n");
    printf("Codigo: %d\n", produto.cod);
    printf("Valor: R$ %.2f\n", produto.valor);

}