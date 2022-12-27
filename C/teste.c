#include<stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite primeira nota: \n");//mensagem exibida ao usuario
    scanf("%f", &nota1);//faz a leitura do que foi digitado
    fflush(stdin);//limpa o buffer do teclado

    printf("Digite segunda nota: \n");
    scanf("%f", &nota2);//faz a leitura do que foi digitado
    fflush(stdin);//limpa o buffer do teclado

    media = nota1 * 0.6 + nota2 * 0.4;

    if(media >= 5){
            printf("aprovado\n");
            printf("sua media: %.2f", media);
    }else{
            printf("reprovado\n");
            printf("sua media: %.2f", media);
    }
}
