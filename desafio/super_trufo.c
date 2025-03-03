#include <stdio.h>

int main(){
//------- SUPER TRUFO -----
//~~~~~ 1º carta ~~~~~~

 char estado1 [5], codigo1 [5], cidade1 [25];
 float area1, pib1, denpopulacional1, pibper1, superpoder1;
 int pontos1, populacao1;
 // unsigned long int  populacao1;
// ( int pontos1) abreviação de Pontos Turisticos

//~~~~Fim 1º carta 

//~~~~~~~~ 2º carta ~~~~~~

char estado2 [4], codigo2 [4], cidade2 [30];
float area2, pib2, denpopulacional2, pibper2, superpoder2;
int pontos2, populacao2;
//unsigned long int  populacao2;
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

//Calculando Super Poder
superpoder1 =(populacao1 + area1 + pib1 + pibper1 + pontos1);



// ~~~~~~~ 1º Impressão ~~~~~~

printf("\n1º Carta \n");
printf("Estado: %s\n", estado1 );
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2fKm²\n", area1);
printf("PIB: %.2f de reais\n", pib1);
printf("Pontos Turisticos: %d\n", pontos1);
printf("Densidade populacional: %.2fhab/km²\n", denpopulacional1);
printf("PIB per Capita: %.2f de reais\n", pibper1);
printf("Super Poder: %.2f\n", superpoder1);
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

//Calculando Super Poder
superpoder2 = (populacao2 + area2 + pib2 + pibper2 + pontos2);

// ~~~~~~~~~ 2º Impressão ~~~~~~

printf("\n2º Carta \n");
printf("Estado: %s\n", estado2 );
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2fKm²\n", area2);
printf("PIB: %.2f de reais\n", pib2);
printf("Pontos Turisticos: %d\n", pontos2);
printf("Densidade populacional: %.2fhab/km²\n", denpopulacional2);
printf("PIB per Capita: %.2f de reais\n", pibper2 );
printf("Super poder: %.2f\n", superpoder2);


// Nivel mestre
/* 

printf("E o Vencedor é \n");

printf("População: %d\n", populacao1 > populacao2);
printf("Área: %d\n", area1 > area2);
printf("PIB: %d de reais\n", pib1 > pib2);
printf("Pontos Turisticos: %d\n", pontos1 > pontos2);
printf("Densidade populacional: %d\n", denpopulacional1 < denpopulacional2);
printf("PIB per Capita: %d\n", pibper1 > pibper2 );
printf("Super poder: %d\n", superpoder1 > superpoder2);

*/

// NIVEL NOVATO 2.0

printf("Atributo escolhido: POPULAÇÂO\n");
printf("1º Carta - %s: %d\n", cidade1, populacao1);
printf("2º Carta - %s: %d\n", cidade2, populacao2);

printf("><>< E o Vencedor é ><>< \n");

if (populacao1 > populacao2)
{
   printf("1º Carta ( %s )é a vencedora\n", cidade1);
}else
{
   printf("2º Carta ( %s ) é a vencedora\n", cidade2);
}


//~~~~Fim De Jogo

}
