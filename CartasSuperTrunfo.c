#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float km2;
    float pib;
    int pontosturisticos;
    double densidadepopulacional;
    double pibpercapita;
    // Cadastro das Cartas:
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
    
    // Calculo do Densidade Populacional 
    densidadepopulacional = (double) populacao / km2;
    
    //Calculo do PIB per capita
    pibpercapita = (double) pib / populacao;

    // Exibição dos Dados das Cartas:
    printf("Codigo Da carta: %s\n", codigo);
    
    printf("Estado: %s\n", estado);

    printf("Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("PIB: %f\n", pib);

    printf("Área: %f\n", km2);

    printf("Pontos turísticos: %d\n", pontosturisticos);
    
    printf("Densidade Populacional: %.2f\n", densidadepopulacional);

    printf("PIB per Capita: %.2f\n", pibpercapita);


    return 0;
}
