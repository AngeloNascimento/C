#include <stdio.h>
int main(){

//VETRORES(é uma variavel simples com varias posições)
int vet[5] = {0, 0, 0, 0, 0};//inicializa o vetor no momento da declaração
int i;
for ( i = 0; i < 5; i++){
    printf("insira o elemento da posicao %d: ", i);//usuario insere elementos nos vetrores manualmente
    scanf("%d", &vet[i]);
}
for ( i = 0; i < 5; i++){
    printf("%d ", vet[i]);//imprime elementos inseritos nos vetrores manualmente   
}

}