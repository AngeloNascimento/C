#include <stdio.h>
int main()
{
    typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
    {
        float Peso;   // define o campo Peso
        int Idade;    // define o campo Idade
        float Altura; // define o campo Altura
    } Pessoa;         // Define o nome do novo tipo criado

    // Após a criação do tipo, é possivel declarar variáveis do tipo Pessoa, desta forma:
    Pessoa Joao, P1, P2;
    Pessoa Povo[10]; // cria um vetor de 10 pessoas.

    // Para acessar os campos de uma struct, usa-se a sintaxe  NomeDaVariavel.NomeDoCampo, conforme o exemplo a seguir.
    Joao.Idade = 15;
    Joao.Peso = 60.5;
    Joao.Altura = 1.75;

    Povo[4].Idade = 23;
    Povo[4].Peso = 75.3;
    Povo[4].Altura = 1.89;

    //  Outra vantagem de utilizar struct é a possibilidade de atribuir os dados de uma struct para outra, com apenas um comando de atribuição, como neste exemplo:
    P2 = Povo[4];

    printf("Idade: %d  Peso: %.f Altura: %.2f\n", Joao.Idade, Joao.Peso, Joao.Altura); 

}