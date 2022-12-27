#include <stdio.h>

int main()
{
    float gasolina, etanol, compara;
    
    //pegando o valor da gasolina
    printf("digite o valor da gasolina: \n");
    scanf("%f", &gasolina);
    fflush(stdin);
    
    //pegando o valor do etanol
    printf("digite o valor do etanol: \n");
    scanf("%f", &etanol);
    fflush(stdin);
    
    compara = gasolina * 0.7;
    
    if(etanol < compara){
        printf("Etanol melhor opção.");
    }else{
        printf("Gasolina melhor opção.");
    }
    
}
