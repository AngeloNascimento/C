#include <stdio.h>
#include <stdlib.h>

// Estrutura que será usada para criar os nós da lista 

typedef struct tipo_produto {
    int codigo;//Codigo do produto 
    double preco;//Preco do produto
    struct tipo_produto *proximoElemento;//Proximo elemento da lista encadeada de Produtos
}  TProduto;

//Prototipos das funcoes para inserir e listar produtos 

void inserir(TProduto **top_lista);
void listar (TProduto *top_lista);

int main()
{
    TProduto *top_lista = NULL; //Ponteiro para a cabeca da lista 
    TProduto *atual_lista;// Ponteiro a ser usado para percorrer a lista no momento de desalocar seus elementos
    char o;// Caractere para receber a opcao do usuario
    do {
        printf("\n\nOpcoes: \nI -> para inserir novo produto;\nL -> para listar os produtos; \nS -> para sair \n:");
        scanf("%c", &o);//Le a opcao do usuario 
        switch(o) {
            case 'i': case 'I': inserir(&top_lista); break;
            case 'l': case 'L': listar(top_lista); break;
            case 's': case 'S': break;
            default: printf("\n\n Opcao nao valida");
        }
        fflush(stdin);//Limpa o buffer de entrada
    } while ((o != 's') && (o != 'S') );

//Desaloca a memoria alocada para os elementos da lista

    atual_lista = top_lista;
    while (atual_lista != NULL)
    {
        top_lista = atual_lista->proximoElemento;
        free(atual_lista);
        atual_lista = top_lista;
    }
}

//Lista todos os elementos presentes na lista encadeada


void listar (TProduto *atual_lista)
{
    int i=0;
    while( atual_lista != NULL)//Enquanto nao chega no fim da lista
    {
        i++;
        printf("\n\nProduto numero %d\nCodigo: %d \nPreco:R$%.2lf", i, atual_lista->codigo, atual_lista->preco);
        atual_lista = atual_lista->proximoElemento;//Faz noatual apontar para o proximo no
    }
}

//Funcao para inserir um novo no, ao final da lista


void inserir (TProduto **top_lista)
{
    TProduto *atual_lista, *novo_no;
    int cod;
    double preco;
    printf("\n Codigo do novo produto: ");
    scanf("%d", &cod);
    printf("\n Preco do produto:R$");
    scanf("%lf", &preco);
    if (*top_lista == NULL)//Se ainda nao existe nenhum produto na lista
    {
//cria o no cabeca
        *top_lista = (TProduto *) malloc(sizeof(TProduto));
        (*top_lista)->codigo = cod;
        (*top_lista)->preco = preco;
        (*top_lista)->proximoElemento = NULL;
    }
    else
    {
//Se ja existem elementos na lista, deve percorre-la ate o seu final e inserir o novo elemento 
        atual_lista = *top_lista;
        while(atual_lista->proximoElemento != NULL)
            atual_lista = atual_lista->proximoElemento;//Ao final do while, noatual aponta para o ultimo no
        novo_no = (TProduto *) malloc(sizeof(TProduto));//Aloca memoria para o novo no
        novo_no->codigo = cod;
        novo_no->preco = preco;
        novo_no->proximoElemento = NULL;
        atual_lista->proximoElemento = novo_no;//Faz o ultimo no apontar para o novo no
    }
}