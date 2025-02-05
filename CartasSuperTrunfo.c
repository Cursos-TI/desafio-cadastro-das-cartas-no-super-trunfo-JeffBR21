#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    
    //variaveis da carta 1
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float km2;
    long pib;
    int pontosturisticos;
    double densidadepopulacional;
    double pibpercapita;
    long superpoder;
    
    //variaveis da carta 2
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float km22;
    long pib2;
    int pontosturisticos2;
    double densidadepopulacional2;
    double pibpercapita2;
    long superpoder2;

    // Cadastro da Carta 1:
    printf("***Cadastro Da Carta 1***\n");
    
    printf("\n");

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

    // calculo do super poder
    superpoder = (int) populacao + km2 + pib + pontosturisticos + pibpercapita + densidadepopulacional;

    // Cadastro da Carta 2:
    printf("***Cadastro Da Carta 2***\n");
    
    printf("\n");

    printf("Digite o codigo da carta: (ex:A01)\n");
    scanf("%s", &codigo2);

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a poulação:\n");
    scanf("%d", &populacao2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a área:\n");
    scanf("%f", &km22);

    printf("Digite a quantidade de pontos turísticos\n");
    scanf("%d", &pontosturisticos2);
    
    // Calculo do Densidade Populacional 
    densidadepopulacional2 = (double) populacao2 / km22;
    
    //Calculo do PIB per capita
    pibpercapita2 = (double) pib2 / populacao2;

    // calculo do super poder
    superpoder2 = (int) populacao2 + km22 + pib2 + pontosturisticos2 + pibpercapita2 + densidadepopulacional2;

    // Exibição dos Dados da Carta 1:
    printf("carta 1\n");

    printf("Codigo Da carta: %s\n", codigo);
    
    printf("Estado: %s\n", estado);

    printf("Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("PIB: %f\n", pib);

    printf("Área: %f\n", km2);

    printf("Pontos turísticos: %d\n", pontosturisticos);
    
    printf("Densidade Populacional: %.2f\n", densidadepopulacional);

    printf("PIB per Capita: %.2f\n", pibpercapita);

    printf("Super poder da carta: %d\n", superpoder);

    //Exibição da carta 2
    printf("carta 2\n");

    printf("Codigo Da carta: %s\n", codigo2);
    
    printf("Estado: %s\n", estado2);

    printf("Cidade: %s\n", cidade2);

    printf("População: %d\n", populacao2);

    printf("PIB: %f\n", pib2);

    printf("Área: %f\n", km22);

    printf("Pontos turísticos: %d\n", pontosturisticos2);
    
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);

    printf("PIB per Capita: %.2f\n", pibpercapita2);

    printf("Super poder da carta: %d\n", superpoder2);
    
    //Imprenssão das Disputa das cartas 
    printf("***Disputa das cartas***\n");
    printf("\n");

    printf("População 1 é maior que a população 2? %d\n", populacao > populacao2);
    
    printf("Área 1 é maior que área 2? %d\n", km2 > km22);
    
    printf("PIB 1 é maior que o PIB 2? %d\n", pib > pib2);
    
    printf("Ponto turistico 1 é maior que o ponto turistico 2? %d\n", pontosturisticos > pontosturisticos2);
    
    printf("Dencidade Populacional 1 é maior que a dencidade populaciona 2? %d\n", densidadepopulacional > densidadepopulacional2);
    
    printf("PIB per capita 1 é maior que o PIB per capita2? %d\n", pibpercapita > pibpercapita2);
    
    printf("Super poder da carta 1 é maior que o super poder da carta 2? %d\n", superpoder > superpoder2);




    return 0;
}
