#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float km2;
    float pib;
    int pontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o codigo da carta: (ex:A01)\n");
    scanf("%s", &codigo);

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Digite a poulação:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a área:\n");
    scanf("%f", &km2);

    printf("Digite a quantidade de pontos turísticos\n");
    scanf("%d", &pontosturisticos);
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Codigo Da carta: %s\n", codigo);
    
    printf("Estado: %s\n", estado);

    printf("Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("PIB: %f\n", pib);

    printf("Área: %f\n", km2);

    printf("Pontos turísticos: %d\n", pontosturisticos);
    return 0;
}
