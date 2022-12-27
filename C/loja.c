#include<stdio.h>
#include<stdlib.h>

typedef struct tipo_produto
{
    int cod;//codigo do produto
    float preco;//preco do produto
    struct tipo_produto *proximoElemento;//proximo elemento da lista encadeada  
    
}TProduto;

//funcoes para inserir e listar
void inserir (TProduto **top_lista);
void listar(TProduto *top_lista);

int main(){
    TProduto *top_lista;//ponteiro para o inicio da lista
    TProduto *atual_lista;//ponteiro usado para percorrer a lista
    char o;//caractere usado para receber a opçao do usuario

    do
    {
        printf("\n\nOpcoes: \n[I] -> para inserir novo produto;\n[L] -> para listar os produtos; \n[S] -> para sair \n:");
        scanf("%c", &o);//Le a opcao do usuario 
        switch(o) {
            case 'i': case 'I': inserir(&top_lista); break;
            case 'l': case 'L': listar(top_lista); break;
            case 's': case 'S': break;
            default: printf("\n\n Opcao nao valida");
        }
        fflush(stdin);//limpeza do buffer do teclado   
     } while ((o != 's') && (o != 'S'));

//deslocamento da memoria alocada pra os elementos da lista
    atual_lista = top_lista;
    while (atual_lista!=NULL)
    {
        top_lista = atual_lista->proximoElemento;
        free(atual_lista);
        atual_lista = top_lista;
    }

}
    
//Lista elementos na lista
    void listar(TProduto *atual_lista){
        int i=0;
        while (atual_lista != NULL)
        {
            i++;
            printf("\n\nProduto numero %d\nCodigo: %d \nPreco:R$%.2lf", i, atual_lista->cod, atual_lista->preco);
            atual_lista = atual_lista->proximoElemento;//faz o atual_lista apontar para o proximo nó
         }
        }
//Função para inserir um novo nó ao final da lista.
    void inserir(TProduto **top_lista){
        TProduto *atual_lista, *novo_no;
        int cod2;
        double preco;
        printf("\n Codigo do novo produto: ");
        scanf("%d", &cod2);
        printf("\n Preco do produto:R$");
        scanf("%lf", &preco);
        if (*top_lista == NULL)//Se ainda nao existe nenhum produto na lista
        {
        //cria o nó top_lista
        *top_lista = (TProduto *) malloc(sizeof(TProduto));
        (*top_lista)->cod = cod2;
        (*top_lista)->preco = preco;
        (*top_lista)->proximoElemento = NULL;
        }
        else{//se ja existir elementos na lista, percorre ela e adiciona o novo elemento no final
        atual_lista = *top_lista;
        while (atual_lista->proximoElemento != NULL)
            atual_lista = atual_lista->proximoElemento;//no fim do while o atual_lista o ultimo nó
        novo_no = (TProduto *) malloc(sizeof(TProduto));//aloca memoria para o novo nó
        novo_no->cod = cod2;
        novo_no->preco = preco;
        novo_no->proximoElemento = NULL;
        atual_lista->proximoElemento = novo_no;//ultmio no aponta pra o novo nó     
            
        
        

        }          
    
}
