#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado1[10], estado2[10];
char codigo1[10], codigo2[10];
char nomeCidade1[50], nomeCidade2[50];

unsigned long int populacao1, populacao2;
float area1, area2;
long double pib1, pib2;
int pontosTuristicos1, pontosTuristicos2;
double densiPopul1, densiPopul2;
double pibPerCapta1, pibPerCapta2;
float superPoder1, superPoder2;
int resultadoC1, resultadoC2;

  // Área para entrada de dados

  printf("***** Carta 1 *****\n");

  printf("Digite o estado de A à H 1: \n");
  scanf("%9s", estado1);

  printf("Digite o código 1: (ex: A01, A02...) 1: \n");
  scanf("%9s", codigo1 );

  printf("Digite o nome da cidade 1: \n");

  scanf(" %49[^\n]", nomeCidade1);

  printf("Digite a população 1: \n");
  scanf("%lu", &populacao1);

  printf("Digite a área 1: \n");
  scanf("%f", &area1);

  printf("Digite o PIB 1: \n");
  scanf("%Lf", &pib1);

  printf("Digite quantidade de pontos turísticos 1: \n");
  scanf("%d", &pontosTuristicos1);

  densiPopul1 = (double)populacao1 / area1;
  printf("Densidade populacional 1: %.2f\n", densiPopul1);
 
  pibPerCapta1 = pib1 / populacao1;
  printf("PIB per capita 1: %.2f\n", pibPerCapta1);

  superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 +
  densiPopul1 + pibPerCapta1;
  printf("Super Poder: %.2f\n", superPoder1);

  printf("***** Carta 2 *****\n");

  printf("Digite o estado de A à H 2: \n");
  scanf("%9s", estado2);

  printf("Digite o código 2: ( ex: B02, B03...): \n");
  scanf("%9s", codigo2);

  printf("Digite o nome da cidade 2: \n");
  scanf(" %49[^\n]", nomeCidade2);

  printf("Digite a população 2: \n");
  scanf("%lu", &populacao2);

  printf("Digite a área 2: \n");
  scanf("%f", &area2);

  printf("Digite o PIB 2: \n");
  scanf("%Lf", &pib2);

  printf("Digite quantidade de pontos turístico 2: \n");
  scanf("%d", &pontosTuristicos2);

  densiPopul2 = (double)populacao2 / area2;
  printf("Densidade populacional 2: %.2f\n", densiPopul2);
 
  pibPerCapta2 = pib2 / populacao2;
  printf("PIB per capita 2: %.2f\n", pibPerCapta2);

  superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 +
  densiPopul2 + pibPerCapta2;
  printf("Super Poder: %.2f\n", superPoder2);

  // Área para exibição dos dados da cidade

  printf("\n======= CARTA 1 =======\n");
  printf("Estado: %s \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Cidade: %s \n", nomeCidade1);
  printf("População: %lu Mi Habitantes \n", populacao1);
  printf("Área: %.2f Km² \n", area1);
  printf("PIB: %.Lf Bilhões de reais \n", pib1);
  printf("Pontos turísticos: %d \n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f  Habitantes por m² \n", densiPopul1);
  printf("PIB per capita: %.2f Mil reais por habitantes \n", pibPerCapta1);
  printf("Super Poder: %.2f \n", superPoder1);

  printf("\n======= CARTA 2 =======\n");
  printf("Estado; %s \n", estado2);
  printf("Código; %s \n", codigo2);
  printf("Cidade; %s \n", nomeCidade2);
  printf("População; %lu Mi Habitantes \n", populacao2);
  printf("Área; %.2f Km² \n", area2);
  printf("PIB; %.Lf Bilhões de reais \n", pib2);
  printf("Pontos Turísticos; %d \n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f  Habitantes por m² \n", densiPopul2);
  printf("PIB per capita: %.2f Mil reais por habitantes \n", pibPerCapta2);
  printf("Super Poder: %.2f \n", superPoder2);

  printf("\n***** Comparação de atributos *****\n");
  
  resultadoC1 = populacao1 > populacao2;
  printf("Carta 1 venceu: %d\n", resultadoC1);

  resultadoC2 = populacao2 > populacao1;
  printf("Carta 2 venceu: %d\n", resultadoC2);

  resultadoC1 = area1 > area2;
  printf("Cata 1 venceu: %d\n", resultadoC1);

  resultadoC2 = area2 > area1;
  printf("Cata 2 venceu: %d\n", resultadoC2);

  resultadoC1 = pib1 > pib2;
  printf("Cata 1 venceu: %d\n", resultadoC1);

  resultadoC2 = pib2 > pib1;
  printf("Cata 2 venceu: %d\n", resultadoC2);

  resultadoC1 = pontosTuristicos1 > pontosTuristicos2;
  printf("Carta 1 venceu: %d\n", resultadoC1);

  resultadoC2 = pontosTuristicos2 > pontosTuristicos1;
  printf("Carta 2 venceu: %d\n", resultadoC2);

  resultadoC1 = densiPopul1 < densiPopul2;
  printf("Carta 1 venceu: %d\n", resultadoC1);

  resultadoC2 = densiPopul2 < densiPopul1;
  printf("Carta 2 venceu: %d\n", resultadoC2);

  resultadoC1 = pibPerCapta1 > pibPerCapta2;
  printf("Carta 1 venceu: %d\n", resultadoC1);

  resultadoC2 = pibPerCapta2 > pibPerCapta1;
  printf("Carta 2 venceu: %d\n", resultadoC2);

  resultadoC1 = superPoder1 > superPoder2;
  printf("Carta 1 venceu: %d\n", resultadoC1);

  resultadoC2 = superPoder2 > superPoder1;
  printf("Carta 2 venceu: %d\n", resultadoC2);

return 0;
} 
