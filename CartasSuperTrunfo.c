  #include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
 
int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  
    char CartaA[10] = "A";
    char Estado1[10] = "São Paulo";
    char CodigoDaCarta1[10] = "C1"; 
    char NomeDaCidade1[20] = "São Paulo";
    int  Populacao1 = 1200000;
    int NumeroDePontosTuristicos1 = 5;
    float Area1 = 193.3;
    float PIB1 = 45000000000.0;
    float DensidadePopulaional1 ;
    float PIBPerCapito1 ;

    char CartaB[10] = "B" ;
    char Estado2[10] = "Rio de Janeiro";
    char CodigoDaCarta2[10] = "C2"; 
    char NomeDaCidade2[20] = "Rio de Janeiro"; 
    int  Populacao2 = 1200000;
    int NumeroDePontosTuristicos2 = 5;
    float Area2 = 193.3;
    float PIB2 = 45000000000.0;
    float DensidadePopulaional2 ;
    float PIBPerCapito2 ;

    char CartaC[10] = "C";
    char Estado3[10] = "Minas Gerais";
    char CodigoDaCarta3[10] = "C3"; 
    char NomeDaCidade3[20] = "Belo Horizonte"; 
    int  Populacao3 = 1200000;
    int NumeroDePontosTuristicos3 = 5;
    float Area3 = 193.3;
    float PIB3 = 45000000000.0;
    float DensidadePopulaional3;
    float PIBPerCapito3;
  
  // Área para entrada de dados'
    /*
    printf("Digite o nome da cart1: \n ");
    scanf("%s",&CartaA);
    printf("Digite o estado 1:\n");
    scanf("%s",&Estado1);
    printf("Digite código da carta 1: \n");
    scanf("%s",&CodigoDaCarta1);
    printf("Digite o nome da cidade 1:\n");
    scanf("%s",&NomeDaCidade1);
    printf("Digite nuemor da população 1:\n");
    scanf("%d",&Populacao1);
    printf("Digite o numero de pontos turistico 1:\n");
    scanf("%d",&NumeroDePontosTuristicos1);
    printf("Digite a área 1:\n");
    scanf("%f",&Area1);
    printf("Digite o PIB 1:\n");
    scanf("%f",&PIB1);
  */
    // Cálculo da densidade populacional e PIB per capita para a cidade 1
    DensidadePopulaional1 = Populacao1 / Area1;
    PIBPerCapito1 = PIB1 / Populacao1;

  /*
    printf("Digite o nome da carta 2: \n");
    scanf("%s",&CartaB);
    printf("Digite o estado 2:\n");
    scanf("%s",&Estado2);
    printf("Digite código da carta 2: \n");
    scanf("%s",&CodigoDaCarta2);
    printf("Digite o nome da cidade 2:\n");
    scanf("%s",&NomeDaCidade2);
    printf("Digite o numero da população 2:\n");
    scanf("%d",&Populacao2);
    printf("Digite o numero de pontos turistico 2:\n");
    scanf("%d",&NumeroDePontosTuristicos2);
    printf("Digite a área 2:\n");
    scanf("%f",&Area2);
    printf("Digite o PIB 2:\n");
    scanf("%f",&PIB2);
  */
    // Cálculo da densidade populacional e PIB per capita para a cidade 2
    DensidadePopulaional2 = Populacao2 / Area2;
    PIBPerCapito2 = PIB2 / Populacao2;
  /*
    printf("Digite o nome da carta 3: \n");
    scanf("%s",&CartaC);
    printf("Digite o estado 3:\n");
    scanf("%s",&Estado3);
    printf("Digite código da carta 3: \n");
    scanf("%s",&CodigoDaCarta3);
    printf("Digite o nome da cidade 3: \n");
    scanf("%s",&NomeDaCidade3);
    printf("Digite o numero da população 3:\n");
    scanf("%d",&Populacao3);
    printf("Digite o numero de pontos turistico 3:\n");
    scanf("%d",&NumeroDePontosTuristicos3);
    printf("Digite a área 3:\n");
    scanf("%f",&Area3);
    printf("Digite o PIB 3: \n");
    scanf("%f",&PIB3);
  */
    // Cálculo da densidade populacional e PIB per capita para a cidade 3
    DensidadePopulaional3 = Populacao3 / Area3; 
    PIBPerCapito3 = PIB3 / Populacao3;

  // Área para exibição dos dados da cidade
  
  printf("Nome:%s \n",CartaA );
  printf("Estado:%s \n",Estado1);
  printf("Código da Carta:%s \n",CodigoDaCarta1);
  printf("Nome da Cidade:%s \n",NomeDaCidade1);
  printf("População:%d \n",Populacao1);
  printf("Número de Pontos Turísticos:%d \n",NumeroDePontosTuristicos1);
  printf("Área:%f \n",Area1);
  printf("PIB:%f \n",PIB1);
  printf("Densidade Populacional:%f \n",DensidadePopulaional1);
  printf("PIB Per Capita:%f \n",PIBPerCapito1);

  printf("Nome:%s \n",CartaB);
  printf("Estado:%s \n",Estado2);
  printf("Código da Carta:%s \n",CodigoDaCarta2);
  printf("Nome da Cidade:%s \n",NomeDaCidade2);
  printf("População:%d \n",Populacao2);
  printf("Número de Pontos Turísticos:%d \n",NumeroDePontosTuristicos2);
  printf("Área:%f \n",Area2);
  printf("PIB:%f \n",PIB2);
  printf("Densidade Populacional:%f \n",DensidadePopulaional2);
  printf("PIB Per Capita:%f \n",PIBPerCapito2);

  printf("Nome:%s \n",CartaC);
  printf("Estado:%s \n",Estado3);
  printf("Código da Carta:%s \n ",CodigoDaCarta3); 
  printf("Nome da Cidade:%s \n",NomeDaCidade3);
  printf("População:%d \n",Populacao3);
  printf("Número de Pontos Turísticos:%d \n",NumeroDePontosTuristicos3);
  printf("Área:%f \n",Area3);
  printf("PIB:%f \n",PIB3);
  printf("Densidade Populacional:%f \n",DensidadePopulaional3);
  printf("PIB Per Capita:%f \n",PIBPerCapito3);   

return 0;
} 


