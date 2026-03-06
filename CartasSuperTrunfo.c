#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
 
int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  int carta;
    char CartaA[10];
    char Estado1[10];
    char CodigoDaCarta1[10]; 
    char NomeDaCidade1[20]; 
    int  Populacao1;
    int NumeroDePontosTuristicos1;
    float Area1;
    float PIB1;

    char CartaB[10];
    char Estado2[10];
    char CodigoDaCarta2[10]; 
    char NomeDaCidade2[20]; 
    int  Populacao2;
    int NumeroDePontosTuristicos2;
    float Area2;
    float PIB2;

    char CartaC[1];
    char Estado3[10];
    char CodigoDaCarta3[10]; 
    char NomeDaCidade3[20]; 
    int  Populacao3;
    int NumeroDePontosTuristicos3;
    float Area3;
    float PIB3;
  
  // Área para entrada de dados

    printf("Digite o nome da carta 1: ");
    scanf("%s\n",&CartaA);
    printf("Digite o estado 1:");
    scanf("%s\n",&Estado1);
    printf("Digite código da carta 1: ");
    scanf("%s\n",&CodigoDaCarta1);
    printf("Digite o nome da cidade 1:");
    scanf("%s\n",&NomeDaCidade1);
    printf("Digite nuemor da população 1");
    scanf("%d\n",&Populacao1);
    printf("Digite o numero de pontos turistico 1:");
    scanf("%d\n",&NumeroDePontosTuristicos1);
    printf("Digite a área 1");
    scanf("%f\n",&Area1);
    printf("Digite o PIB 1:");
    scanf("%f\n",&PIB1);


    printf("Digite o nome da carta 2: ");
    scanf("%s\n",&CartaB);
    printf("Digite o estado 2:");
    scanf("%s\n",&Estado2);
    printf("Digite código da carta 2: ");
    scanf("%s\n",&CodigoDaCarta2);
    printf("Digite o nome da cidade 2:");
    scanf("%s\n",&NomeDaCidade2);
    printf("Digite nuemor da população 2");
    scanf("%d\n",&Populacao2);
    printf("Digite o numero de pontos turistico 2:");
    scanf("%d\n",&NumeroDePontosTuristicos2);
    printf("Digite a área 2");
    scanf("%f\n",&Area2);
    printf("Digite o PIB 2:");
    scanf("%f\n",&PIB2);


    printf("Digite o nome da carta 3: ");
    scanf("%s\n",&CartaC);
    printf("Digite o estado 3:");
    scanf("%s\n",&Estado3);
    printf("Digite código da carta 3: ");
    scanf("%s\n",&CodigoDaCarta3);
    printf("Digite o nome da cidade 3: ");
    scanf("%s\n",&NomeDaCidade3);
    printf("Digite nuemor da população 3");
    scanf("%d\n",&Populacao3);
    printf("Digite o numero de pontos turistico 3:");
    scanf("%d\n",&NumeroDePontosTuristicos3);
    printf("Digite a área 3");
    scanf("\n%f",&Area3);
    printf("Digite o PIB 3: ");
    scanf("%f\n",&PIB3);
      
  // Área para exibição dos dados da cidade

  printf("%s",CartaA);
  printf("%s",Estado1);
  printf("%s",CodigoDaCarta1); 
  printf("%s",NomeDaCidade1);
  printf("%s",Populacao1);
  printf("%S",NumeroDePontosTuristicos1);
  printf("%f",Area1);
  printf("%f",PIB1);

  printf("%s",CartaB);
  printf("%s",Estado2);
  printf("%s",CodigoDaCarta2); 
  printf("%s",NomeDaCidade2);
  printf("%s",Populacao2);
  printf("%S",NumeroDePontosTuristicos2);
  printf("%f",Area2);
  printf("%f",PIB2);

  printf("%s",CartaC);
  printf("%s",Estado3);
  printf("%s",CodigoDaCarta3); 
  printf("%s",NomeDaCidade3);
  printf("%s",Populacao3);
  printf("%S",NumeroDePontosTuristicos3);
  printf("%f",Area3);
  printf("%f",PIB3);

return 0;
} 
