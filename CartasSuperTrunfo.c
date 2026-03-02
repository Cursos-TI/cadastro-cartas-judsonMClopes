#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado1[10], estado2[10];
char codigo1[10], codigo2[10];
char nomecidade1[50], nomecidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosturisticos1, pontosturisticos2;


  // Área para entrada de dados

  printf("Digite o estado de A à H 1: \n");
  scanf("%9s", estado1);

  printf("Digite o código (ex: A01, A02...) 1: \n");
  scanf("%9s", codigo1 );

  printf("Digite o nome da cidade 1: \n");
  scanf(" %49[^\n]", &nomecidade1);

  printf("Digite a população 1: \n");
  scanf("%d", &populacao1);

  printf("DIgite a área 1: \n");
  scanf("%f", &area1);

  printf("Digite o PIB 1: \n");
  scanf("%f", &pib1);

  printf("DIgite quantidade de pontos turísticos 1: \n");
  scanf("%d", &pontosturisticos1);

  printf("Digite o estado de A à H 2: \n");
  scanf("%9s", estado2);

  printf("Digite o código ( ex: B02, B03...): \n");
  scanf("%9s", codigo2);

  printf("Digite o nome da cidade 2: \n");
  scanf(" %49[^\n]", &nomecidade2);

  printf("Digite a população 2: \n");
  scanf("%d", &populacao2);

  printf("Digite a área 2: \n");
  scanf("%f", &area2);

  printf("Digite o PIB 2: \n");
  scanf("%f", &pib2);

  printf("Digite quantidade de pontos turísticos: \n");
  scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade

  printf("\n======= CARTA 1 =======\n");
  printf("Estado; %s \n", estado1);
  printf("Código; %s \n", codigo1);
  printf("Cidade; %s \n", nomecidade1);
  printf("População; %d Mil Habitantes \n", populacao1);
  printf("Área; %.2f Km² \n", area1);
  printf("PIB; %.2f Bilhões de reais \n", pib1);
  printf("Pontos turísticos; %d \n", pontosturisticos1);

  printf("\n======= CARTA 2 =======\n");
  printf("Estado; %s \n", estado2);
  printf("Código; %s \n", codigo2);
  printf("Cidade; %s \n", nomecidade2);
  printf("População; %d Mil Habitantes \n", populacao2);
  printf("Área; %.2f Km² \n", area2);
  printf("PIB; %.2f Bilhões de reais \n", pib2);
  printf("Pontos Turísticos; %d \n", pontosturisticos2);



return 0;
} 
