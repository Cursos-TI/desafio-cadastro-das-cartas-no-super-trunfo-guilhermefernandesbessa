#include <stdio.h>

int main(){
//------- SUPER TRUFO -----
//~~~~~ 1º carta ~~~~~~

 char estado1 [5];
 char codigo1 [5];
 char cidade1 [25];
 int  populacao1;
 float area1;
 float pib1;
 int pontos1;
 float denpopulacional1;
 float pibper1;
// ( int pontos1) abreviação de Pontos Turisticos
//~~~~Fim 1º carta 

//~~~~~~~~ 2º carta ~~~~~~

 char estado2 [4];
 char codigo2 [4];
 char cidade2 [21];
 int  populacao2;
 float area2;
 float pib2;
 int pontos2;
 float denpopulacional2;
 float pibper2;
// ( int pontos2) abreviação de Pontos Turisticos
//~~~~Fim 2º carta
 
/* OBS: preferi ja fazer perguntas sobre a carta ao invés
de utilizar o: "Digite aqui o Estado da carta"
*/

//~~~~Pergutas sobre a 1º carta

printf("Qual o Estado? \n");
scanf("%s", estado1);

printf("Qual o código? \n");
scanf("%s", codigo1);

printf("Qual a cidade? \n");
scanf("%s", cidade1);

printf("Qual o tamanho populacional? \n");
scanf("%d", &populacao1);

printf("Qual o tamanho da área? \n");
scanf("%f", &area1);

printf("Qual o PIB? \n");
scanf("%f", &pib1);

printf("Quantos pontos turisticos tem? \n");
scanf("%d", &pontos1);
//Calculo Densidade Populacional
denpopulacional1 = (populacao1 / area1);

//Calculo PIB per Capita
pibper1 = (pib1 / populacao1);

// ~~~~~~~ 1º Impressão ~~~~~~

printf("\n1º Carta \n");
printf("Estado: %s\n", estado1 );
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2fKm²\n", area1);
printf("PIB: %.2f bilhão de reais\n", pib1);
printf("Pontos Turisticos: %d\n", pontos1);
printf("Densidade populacional: %.3fhab/km²\n", denpopulacional1);
printf("PIB per Capita: %.2f de reais\n", pibper1);
//~~~~~~Fim 1º carta

// Pergutas sobre a 2º carta 

printf("Qual o Estado? \n");
scanf("%s", estado2);

printf("Qual o código? \n");
scanf("%s", codigo2);

printf("Qual a cidade? \n");
scanf("%s", cidade2);

printf("Qual o tamanho populacional? \n");
scanf("%d", &populacao2);

printf("Qual o tamanho da área? \n");
scanf("%f", &area2);

printf("Qual o PIB? \n");
scanf("%f", &pib2);

printf("Quantos pontos turisticos tem? \n");
scanf("%d", &pontos2);

// Calculo Densidade 
denpopulacional2 = (populacao2 / area2);

// Calculo PIB per capita
pibper2 = (pib2 / populacao2);

// ~~~~~~~~~ 2º Impressão ~~~~~~

printf("\n2º Carta \n");
printf("Estado: %s\n", estado2 );
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2fKm²\n", area2);
printf("PIB: %.2f Bilhões de reais\n", pib2);
printf("Pontos Turisticos: %d\n", pontos2);
printf("Densidade populacional: %.1fhab/km²\n", denpopulacional2);
printf("PIB per Capita: %.2f de reais\n", pibper2 );
//~~~~Fim De Jogo

}
