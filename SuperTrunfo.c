#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Pedro

#include <stdio.h>


// Informações da Carta 

int main(){
     char estado[20];
    char codigo_carta[20];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    char nome[50];

    printf("Ola, seja bem vindo ao SuperTrunfo!\n");

    printf("Primeiramente digite o seu nome:\n");
    scanf(" %s", nome);
   
    printf("Certo %s, Para darmos inicio ao jogo, precisamos que voce forneca alguns dados! \n", nome);

    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigo_carta);
    
    printf("Digite o estado: \n");
    scanf(" %[^\n]", estado);
   
    printf("Digite o nome da cidade escolhida: \n");
    scanf(" %[^\n]", nome_cidade);
    
    printf("Digite o numero de habitantes da cidade: \n");
    scanf(" %d", &populacao);
    
    printf("Digite a area por km2: \n");
    scanf(" %f", &area);
    
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);
    
    printf("Digite o numero de pontos turisticos presentes na cidade: \n");
    scanf (" %d", &pontos_turisticos);

    // INFORMAÇÔES COLETADAS
    
    printf("Parabens %s, sua carta esta pronta! \n", nome);


    printf("Nome do jogador: %s\n", nome);
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Numero de Habitantes: %d\n", populacao);
    printf("Area por km2: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    return 0;
   
}
