#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado1[2], estado2[2], codigoCarta1[3], codigoCarta2[3], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    printf("------------------------ JOGO SUPER TRUNFO -----------------------------\n");
    printf("INFORME OS DADOS DA CARTA N. 1\n");

    printf("Estado (A - H): \n");
    scanf("%s", estado1);
    printf("Codigo da Carta: \n");
    scanf("%s", codigoCarta1);
    printf("Cidade: \n");
    scanf("%49s", cidade1);
    printf("Populacao: \n");
    scanf("%d", &populacao1);
    printf("Area (km2): \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("INFORME OS DADOS DA CARTA N. 2\n");

    printf("Estado (A - H): \n");
    scanf("%s", estado2);
    printf("Codigo da Carta: \n");
    scanf("%s", codigoCarta2);
    printf("Cidade: \n");
    scanf("%49s", cidade2);
    printf("Populacao: \n");
    scanf("%d", &populacao2);
    printf("Area (km2): \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    printf(">>>>>>>>>>>>>>> DADOS INFORMADOS <<<<<<<<<<<<<<<<<<<<<\n");
    printf("---- CARTA 1 -----\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area (km2): %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\n");
    printf("###########################################################\n");
    printf("---- CARTA 2 -----\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area (km2): %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("\n");

    return 0;
}