#include <stdio.h>

// Programa para cadastrar duas cartas do Super Trunfo
// e calcular densidade populacional e PIB per capita

int main() {

    // ===== CARTA 1 =====
    char estado1;          // Estado (A-H)
    char codigo1[10];      // Código da carta (ex: A01)
    char cidade1[50];      // Nome da cidade
    int populacao1;        // População da cidade
    float area1;           // Área em km²
    float pib1;            // PIB da cidade
    int pontos1;           // Número de pontos turísticos

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // ===== VARIÁVEIS DE CÁLCULO =====
    float densidade1, pibPerCapita1; // Resultados da carta 1
    float densidade2, pibPerCapita2; // Resultados da carta 2

    // ===== ENTRADA DE DADOS - CARTA 1 =====
    printf("=== CARTA 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê texto com espaços

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // ===== CÁLCULOS CARTA 1 =====
    // Densidade = população / área
    densidade1 = populacao1 / area1;

    // PIB per capita = PIB / população
    pibPerCapita1 = pib1 / populacao1;

    // ===== ENTRADA DE DADOS - CARTA 2 =====
    printf("\n=== CARTA 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ===== CÁLCULOS CARTA 2 =====
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ===== SAÍDA DE DADOS =====
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}