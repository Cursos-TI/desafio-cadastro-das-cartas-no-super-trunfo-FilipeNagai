//SuperTrunfo v4

#include <stdio.h>

//variaveis carta 1 e 2
char estado1, estado2;                    // Letra do estado
char codigo1[4], codigo2[4];              // Código da carta
char cidade1[50], cidade2[50];            // Nome da cidade
unsigned int populacao1, populacao2;      // População
float area1, area2;                       // Área
float pib1, pib2;                         // PIB
int turisticos1, turisticos2;             // Pontos turísticos
float densidade1, densidade2;             // Densisade populacional
float pibpc1, pibpc2;                     // Pib per capta
float super1, super2;                     // Superpoder soma de população, área, pib, pib per capta e densidade populacional invertida
int soma1 = 0, soma2 = 0;                 // Soma das rodadas ganhadas

void carta1() {
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
    }

void carta2() {
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
}

void calculos() {
    //calculo de densidade populacional = população dividido pela area
    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;
    //calculo pib per capta = pib dividido pela populacao
    pibpc1 =  pib1/populacao1;
    pibpc2 =  pib2/populacao2;
    //superpoder soma de população, área, pib, pib per capta e densidade populacional invertida
    super1 = populacao1 + area1 + pib1 + pibpc1;
    super2 = populacao2 + area2 + pib2 + pibpc2;
}

void resultados () {
  // Exibe os dados da carta 1
    printf(
        "\nCarta 1:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.1f km²\n"
        "PIB: %.1f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f habitantes/km²\n"
        "PIB per capita: R$ %.2f\n"
        "Superpoder: %.2f\n",
        estado1, codigo1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, pibpc1, super1);
    
    // Exibe os dados da carta 2
    printf(
        "\nCarta 2:\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.1f km²\n"
        "PIB: %.1f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f habitantes/km²\n"
        "PIB per capita: R$ %.2f\n"
        "Superpoder: %.2f\n",
        estado2, codigo2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, pibpc2, super2);
}

void comparacao () {
// Se carta 1 for maior ela ganha se for menor a carta 2 ganha, excecao apenas pra densidade
if (populacao1 > populacao2) {
        printf("\nPopulação: Carta 1 venceu (1)\n");
        soma1++;
    } else {
        printf("População: Carta 2 venceu (0)\n");
        soma2++;
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
        soma1++;
    } else {
        printf("Área: Carta 2 venceu (0)\n");
        soma2++;
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
        soma1++;
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
        soma2++;
    }

    if (pibpc1 > pibpc2) {
        printf("PIB per capta: Carta 1 venceu (1)\n");
        soma1++;
    } else {
        printf("PIB per capta: Carta 2 venceu (0)\n");
        soma2++;
    }

    if (turisticos1 > turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
        soma1++;
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
        soma2++;
    }

     if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
        soma1++;
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
        soma2++;
    }

    if (super1 > super2) {
        printf("SuperPoder: Carta 1 venceu (1)\n");
        soma1++;
    } else {
        printf("Superpoder: Carta 2 venceu (0)\n");
        soma2++;
    }

    if (soma1 > soma2) { 
        printf("Carta 1 venceu o SuperTrunfo\n");
    } else {
        printf("Carta 2 venceu o SuperTrunfo\n");
    }
}

int main() {
    carta1();
    carta2();
    calculos();
    resultados();
    comparacao();
    return 0;
}
