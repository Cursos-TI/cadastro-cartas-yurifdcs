#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

  // Área para entrada de dados  
  printf("Cadastro da Carta 1:\n");
  printf("Informe o Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Informe o Código da Carta (ex: A01): ");
  scanf("%3s", codigo1);
  printf("Informe o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);
  printf("Informe a População: ");
  scanf("%d", &populacao1);
  printf("Informe a Área (em km²): ");
  scanf("%f", &area1);
  printf("Informe o PIB (em bilhões de reais): ");
  scanf("%f", &pib1);
  printf("Informe o Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("\nCadastro da Carta 2:\n");
  printf("Informe o Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Informe o Código da Carta (ex: B02): ");
  scanf("%3s", codigo2);
  printf("Informe o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);
  printf("Informe a População: ");
  scanf("%d", &populacao2);
  printf("Informe a Área (em km²): ");
  scanf("%f", &area2);
  printf("Informe o PIB (em bilhões de reais): ");
  scanf("%f", &pib2);
  printf("Informe o Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 
