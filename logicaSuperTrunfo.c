#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
 // Área para definição das variáveis para armazenar as propriedades das cidades
    //carta 1
    char estado1 = 'A';
    char codigodacarta1 [10] = "A01";
    char nomedacidade1 [50] = "sao paulo";
    unsigned long int populacao1 = 12325000;
    float areaemkm1 = 1521.11;
    float pib1 = 699.28;
    int numeropontosturisticos1 = 50;


     //carta 2
    char estado2 = 'B';
    char codigodacarta2 [10] = "B02";
    char nomedacidade2 [50] = "rio de janeiro";
    unsigned long int populacao2 = 6748000;
    float areaemkm2 = 1200.25;
    float pib2 = 300.50;
    int numeropontosturisticos2 = 30;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
// Área para entrada de dados
    // carta 1 
    printf("***** Cadastro da carta 1 *****\n");

    printf("Informe o estado: \n");
    scanf(" %c" , &estado1);

    printf("Informe o codigo da carta (Ex:A01)= \n");
    scanf("%s", codigodacarta1);

    printf("Informe o nome da cidade: \n");
    scanf("%s", nomedacidade1);
    
    printf("Informe a populacao: \n");
    scanf("%lu", &populacao1);

    printf("Informe a area em km²: \n");
    scanf("%f", &areaemkm1);

    printf("Informe o PIB (em bilhoes de reais): \n"); 
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &numeropontosturisticos1);

    float densidadepopulacional1 = (float) populacao1 / areaemkm1;
    float pibpercapita1 = pib1 / (float) populacao1; 

    float superpoder1 = (float) populacao1 + areaemkm1 + pib1 + numeropontosturisticos1 + pibpercapita1 + (1/densidadepopulacional1);



  // carta 2
    printf("***** Cadastro da carta 2 *****\n");

    printf("Informe o estado: ");
    scanf(" %c" , &estado2);

    printf("Informe o codigo da carta (Ex:B02)= \n ");
    scanf("%s", codigodacarta2);

    printf("Informe o nome da cidade: \n ");
    scanf("%s", nomedacidade2);
    
    printf("Informe a populacao: \n ");
    scanf("%lu", &populacao2);

    printf("Informe a area em km²: \n ");
    scanf("%f", &areaemkm2);

    printf("Informe o PIB (em bilhoes de reais): \n "); 
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: \n ");
    scanf("%d", &numeropontosturisticos2);

    float densidadepopulacional2 = (float)populacao2 / areaemkm2;
    float pibpercapita2 = pib2 / (float) populacao2; 

    float superpoder2 = (float) populacao2 + areaemkm2 + pib2 + numeropontosturisticos2 + pibpercapita2 + (1/ densidadepopulacional2);



    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao1 > populacao2){
        printf("A Carta 1 tem maior populacao! \n");
    } else {
        printf("A Carta 2 tem maior populacao! \n ");
    }

    if (areaemkm1 > areaemkm2){
        printf("A Carta 1 tem maior area em km2!\n");
    } else {
        printf("A Carta 2 tem maior area em km2! \n");
    }

    if (pib1 > pib2){
        printf("A Carta 1 tem o maior PIB! \n");
    } else {
        printf("A Carta 2 tem o maior PIB! \n");
    }
    
    if (numeropontosturisticos1 > numeropontosturisticos2){
        printf("A Carta 1 tem mais pontos turisticos! \n");
    } else {
        printf("A Carta 2 tem mais pontos turisticos! \n");
    }

    if(superpoder1 > superpoder2){
        printf("A Carta 1 tem um super poder maior! \n");
    } else {
        printf("A Carta 2 tem um super poder maior! \n\n");
    }

    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

if (superpoder1 > superpoder2)
    printf("****** A cidade vencedora é: %s (Carta 1) ******\n\n", nomedacidade1);
else
    printf("****** A cidade vencedora é: %s (Carta 2) ******\n\n", nomedacidade2);



int opcao; 

printf("***** MENU DE COMAPRACAO ********\n");
printf("1 - Comparar Populacao\n");
printf("2 - Comparar Area\n ");
printf("3 - Comparar PIB\n");
printf("4 - Comparar Pontos Turisticos\n");
printf("5 - Comparar Super Poder\n");
printf("****Escolha uma opcao ****\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1: {
    if(populacao1 > populacao2)
        printf("A Carta 1 (%s) tem maior populacao!\n", nomedacidade1);
    else if (populacao1 > populacao2)
        printf("A Carta 2 (%s) tem maior populacao!\n", nomedacidade2);
    else
        printf("Empate - As duas cidades tem a mesma populcao!\n");
    break;
    
case 2: 
    if(areaemkm1 > areaemkm2)
        printf("A Carta 1 (%s) tem maior area m km2!\n", nomedacidade1);
    else if (areaemkm1 > areaemkm2)
        printf("A Carta 2 (%s) tem maior area em km2!\n", nomedacidade2);
    else
        printf("Empate - As duas cidades tem a mesma area em km2!\n");
    break;
    
case 3: 
    if(pib1 > pib2)
        printf("A Carta 1 (%s) tem maior PIB!\n", nomedacidade1);
    else if (pib1 > pib2)
        printf("A Carta 2 (%s) tem maior PIB!\n", nomedacidade2);
    else
        printf("Empate - As duas cidades tem o mesmo PIB!\n");
    break;

case 4: 
    if(numeropontosturisticos1 > numeropontosturisticos2)
        printf("A Carta 1 (%s) tem mais pontos turisticos!\n", nomedacidade1);
    else if (numeropontosturisticos1 > numeropontosturisticos2)
        printf("A Carta 2 (%s) tem mais pontos turisticos!\n", nomedacidade2);
    else
        printf("Empate - As duas cidades tem a mesma quantidade de pontos turisticos!\n");
    break;

case 5: 
    if(superpoder1 > superpoder2)
        printf("A Carta 1 (%s) tem um super poder maior!\n", nomedacidade1);
    else if (areaemkm1 > areaemkm2)
        printf("A Carta 2 (%s) tem um super poder maior!\n", nomedacidade2);
    else {
        printf("Superpoderes iguais! Comparando critérios secundários...\n");

        if (populacao1 > populacao2)
            printf("Desempate: Carta 1 venceu por maior população.\n");
        else if (pib1 > pib2)
             printf("Desempate: Carta 1 venceu por maior PIB.\n");
        else if (areaemkm1 > areaemkm2)
             printf("Desempate: Carta 1 venceu por maior área.\n");
        else
          printf("As cartas estão totalmente empatadas!\n");
     }
    break;

    }

    return 0;
}
