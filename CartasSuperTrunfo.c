#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    printf("=====================================\n");
    printf("         CARTAS SUPER TRUNFO         \n");
    printf("=====================================\n");
    printf("Data: 15/10/2025\n");
    printf("Desenvolvido por Hobi\n");
    printf("VERSÃO 1.0\n");
    printf("=====================================\n");
    printf("Bem Vindo ao jogo de Cartas Super Trunfo!\n");

  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //CARTA 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

  //CARTA 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
  
    // Área para entrada de dados
    // Cadastro carta 01
    printf("====> Cadastro da Carta 01 <====\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf("%s", nomeCidade1); 

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em Bilhões de Reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

  //CADASTRO CARTA 02
    printf("\n====> Cadastro da Carta 02 <====\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em Bilhões de Reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

  // carta01
    printf("\n=== Carta 01 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

  // carta 02
    printf("\n=== Carta 02 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


  
return 0;
} 
