//SuperTrunfo v1
#include <stdio.h>

int main() { 
    //variaveis carta 1 e 2
    char estado1, estado2;                    // Letra do estado
    char codigo1[4], codigo2[4];              // Código da carta
    char cidade1[50], cidade2[50];            // Nome da cidade
    int populacao1, populacao2;               // População
    float area1, area2;                       // Área
    float pib1, pib2;                         // PIB
    int turisticos1, turisticos2;             // Pontos turísticos
    float densidade1, densidade2;             // Densisade populacional
    float pibpc1, pibpc2;                     // Pib per capta

    //le os dados da primeira carta
    printf("Insira os dados da Primeira carta:\n");
    
    printf("Letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade SEM Espaços: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área da cidade (em km²): ");
    scanf(" %f", &area1);

    printf("PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de pontos turísticos:");
    scanf(" %d", &turisticos1);

    //le os dados da segunda carta
    printf("\nInsira os dados da Segunda carta:\n");

    printf("Letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade SEM Espaços: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &turisticos2);

    //calculo de densidade populacional = população dividido pela area
    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;
    //calculo pib per capta = pib dividido pela populacao
    pibpc1 =  pib1/populacao1;
    pibpc2 =  pib2/populacao2;
    
    // Exibe os dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("Pib per Capta: %.2f\n", pibpc1);
     // Exibe os dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Pib per Capta: %.2f\n", pibpc2);    
    return 0;
}
