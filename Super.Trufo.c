#include <stdio.h>

int main(){
//------- SUPER TRUFO -----
//~~~~~ 1º carta ~~~~~~

 char estado1 [5], codigo1 [5], cidade1 [25];
 float area1, pib1, dendemografica1, pibper1, superpoder1;
 int pontos1, populacao1;
 // unsigned long int  populacao1;
// ( int pontos1) abreviação de Pontos Turisticos

//~~~~Fim 1º carta 

//~~~~~~~~ 2º carta ~~~~~~

char estado2 [4], codigo2 [4], cidade2 [30];
float area2, pib2, dendemografica2, pibper2, superpoder2;
int pontos2, populacao2;
//unsigned long int  populacao2;
// ( int pontos2) abreviação de Pontos Turisticos

//~~~~Fim 2º carta
 
/* OBS: preferi ja fazer perguntas sobre a carta ao invés
de utilizar o: "Digite aqui o Estado da carta"
*/

//~~~~Pergutas sobre a 1º carta
printf("><>< Pimeira Carta ><><\n");
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
dendemografica1 = (populacao1 / area1);

// Inverso da Densidade
dendemografica1 = 1/dendemografica1;

//Calculo PIB per Capita
pibper1 = (pib1 / populacao1);

//Calculando Super Poder
superpoder1 =(populacao1 + area1 + pib1 + pibper1 + pontos1 + dendemografica1);

// Pergutas sobre a 2º carta 

printf("><>< Segunda Carta ><><\n");
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
dendemografica2 = (populacao2 / area2);

//Inverso da Densidade
dendemografica2 = 1/dendemografica2;

// Calculo PIB per capita
pibper2 = (pib2 / populacao2);

//Calculando Super Poder
superpoder2 = (populacao2 + area2 + pib2 + pibper2 + pontos2 + dendemografica2);

// NIVEL MESTRE
int atributo1, atributo2;
int resultado1, resultado2;

//Apareceer valor dos atrinuto escolhido
//~~~~~> Menu de escolha 1
printf("Qual atributo será comparado:\n");
printf("1. População\n");
printf("2. Área²\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demografica\n");
printf("6. PIB Per Capita\n");
printf("7. SuperPoder\n");
printf("Escolha: ");
scanf("%d", &atributo1);

switch (atributo1)
{
case 1:
   printf("Atributo escolhido: População \n");
   resultado1 = (populacao1 > populacao2)? 1 : 0;
   printf("1º Carta - ( %s ): %d\n", cidade1, populacao1);
   printf("2º Carta - ( %s ): %d\n", cidade2, populacao2);

   break;
case 2:
   printf("Atributo escolhido: Área \n");
   resultado1= (area1 > area2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, area1);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, area2);
   break;
case 3:
   printf("Atributo escolhido: PIB \n");
   resultado1 = (pib1 > pib2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, pib1);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, pib2);
   break;
case 4:
   printf("Atributo escolhido: Pontos Turisticos \n");
   resultado1 = (pontos1 > pontos2)? 1 : 0;
   printf("1º Carta - ( %s ): %d\n", cidade1, pontos1);
   printf("2º Carta - ( %s ): %d\n", cidade2, pontos2);
   break;
case 5:
   printf("Atributo escolhido: Densidade Demografica \n");
   resultado1 = (dendemografica1 < dendemografica2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, dendemografica1);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, dendemografica2);
   break;
case 6:
   printf("Atributo escolhido: PIB Per Capita \n");
   resultado1 = (pibper1 > pibper2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, pibper1);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, pibper2);
   break;
case 7:
   printf("Atributo escolhido: Super Poder \n");
   resultado1 = (superpoder1 > superpoder2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, superpoder2);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, superpoder2);
   break;
default:
   printf("Opção Invalida\n");
   break;
}

//apareceer valor dos atrinuto escolhido
//~~~~~> Menu de escolha 2
printf("Qual atributo será comparado:\n");
printf("1. População\n");
printf("2. Área²\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demografica\n");
printf("6. PIB Per Capita\n");
printf("7. SuperPoder\n");
printf("Escolha: ");
scanf("%d", &atributo2);

if (atributo1 == atributo2)
{
   printf("Escolha Outro Atributo....\n");
}switch (atributo2)
{case 1:
   printf("Atributo escolhido: População \n");
   resultado2 = (populacao1 > populacao2)? 1 : 0;
   printf("1º Carta - ( %s ): %d\n", cidade1, populacao1);
   printf("2º Carta - ( %s ): %d\n", cidade2, populacao2);

   break;
case 2:
   printf("Atributo escolhido: Área \n");
   resultado2 = (area1 > area2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, area1);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, area2);
   break;
case 3:
   printf("Atributo escolhido: PIB \n");
   resultado2 = (pib1 > pib2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, pib1);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, pib2);
   break;
case 4:
   printf("Atributo escolhido: Pontos Turisticos \n");
   resultado2 = (pontos1 > pontos2)? 1 : 0;
   printf("1º Carta - ( %s ): %d\n", cidade1, pontos1);
   printf("2º Carta - ( %s ): %d\n", cidade2, pontos2);
   break;
case 5:
   printf("Atributo escolhido: Densidade Demografica \n");
   resultado2 = (dendemografica1 < dendemografica2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, dendemografica1);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, dendemografica2);
   break;
case 6:
   printf("Atributo escolhido: PIB Per Capita \n");
   resultado2 = (pibper1 > pibper2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, pibper1);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, pibper2);
   break;
case 7:
   printf("Atributo escolhido: Super Poder \n");
   resultado2 = (superpoder1 > superpoder2)? 1 : 0;
   printf("1º Carta - ( %s ): %.2f\n", cidade1, superpoder2);
   printf("2º Carta - ( %s ): %.2f\n", cidade2, superpoder2);
   break;
default:
   printf("Opção Invalida\n");
   break;
}

if ( resultado1  && resultado2){
   printf("carta 1 venceu!!!");
}else if ( resultado1 != resultado2 )
{
   printf("Empatou!!");
}else
{
   printf("carta 2 venceu");
}



return 0;
//~~~~Fim De Jogo

}