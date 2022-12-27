#include<stdio.h>
#define total 22

//criando nó
typedef struct jogador{
    int matricula;
    int gols;
    int assistencias;
    struct jogador *proximo;
}jogador;

void insereJogador(jogador **time, int matricula, int gols, int assistencias){
    jogador *j = malloc(sizeof(jogador));//alocamento de memoria
    if(j){
        (*j).matricula = matricula;
        (*j).gols = gols;
        (*j).assistencias = assistencias;
        (*j).proximo = NULL;
    }else
        printf("Erro ao alocar memoria!");

}

void imprimeJogador(jogador j){
    printf("matricuula: %d \ngols: %d \nassistencias: %d", j.matricula, j.gols, j.assistencias);
}

void setJogador(jogador *j, int matricula, int gols, int assistencias){

    (*j).matricula = matricula;
    (*j).gols = gols;
    (*j).assistencias = assistencias;
    
}

int main(){

    int opcao;
          
    do{
        printf(" \n =======Menu====== ");
        printf(" \n 1. Cadastrar" );
        printf(" \n 2. Exibir" );
        printf(" \n 3. Pesquisar" );
        printf(" \n 4. Remover \n " );
        printf(" \n 5. Sair. \n " );
        printf(" \n Digite a opção desejada: ");
        scanf("%d", &opcao);
       
        switch(opcao)
        {
            case 1:
                 
                 jogador jogador1;
                 printf("======cadastrar======\n");

                 printf("digite a matricula: ");
                 scanf("%d", &jogador1.matricula);

                 printf("digite a gols: ");
                 scanf("%d", &jogador1.gols);

                 printf("digite a assistencias: \n");
                 scanf("%d", &jogador1.assistencias);
                
            break;
            case 2:
                 imprimeJogador(jogador1);
            break;
            case 3:
                
            break;
            case 4:
                
            break;   
            
            default:
                 printf(" \n Opção não existente. ");
            break;
        }
    }while(opcao!=5);

   

  


    


    


     
   
}