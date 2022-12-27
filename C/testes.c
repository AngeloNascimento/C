#include <stdio.h>

int main(){
         int contador;
         

         for (contador = 10; contador >= 0; contador--){
            printf("%d\n", contador);
         }

         //menu 
         int opcao;
          
          do
               {
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
            printf("======cadastrar======\n");
            
                
            break;
            case 2:
                
            break;
            case 3:
                
            break;
            case 4:
                
            break;   
            
            default:
                 printf(" \n Opção não existente. ");
            break;
        }
    }
    while(opcao!=5);
}


