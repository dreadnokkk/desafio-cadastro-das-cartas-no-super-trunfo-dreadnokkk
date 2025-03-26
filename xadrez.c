#include <stdio.h> 

int main(){

//declaração das cartas 

char estado;
char codigo [20];
char nomedacidade [50];
int populacao;
float area, pib;
int turisticos;
float densidadepoulacional;
float pibpercapita;
float poder;

//infomações fornecidas

printf("Digite o estado a seguir: ");
scanf(" %c", &estado);

printf("Digite o código da sua primeira carta:  ");
scanf(" %s", &codigo);

printf("Digite o nome da sua primeira carta:  ");
scanf(" %s", nomedacidade);


printf("Digite a população da sua primeira carta seguir:  ");
scanf(" %d", &populacao);


printf("Digite a área da sua primeira carta a seguir:  ");
scanf(" %f", &area);


printf("Digite o PIB da sua primeira carta a seguir:  ");
scanf(" %f", &pib);


printf("Digite os pontos turíticos da sua primeira carta a seguir:  ");
scanf(" %d", &turisticos);


//calculo da densidade populacional 

densidadepoulacional = (float) populacao / area;

//calculo do pib per capita

pibpercapita = (float) ( pib / populacao ) * 1000000000;

//calculo do poder

poder = (populacao + area + pib + turisticos + pibpercapita + 1 /densidadepoulacional);

printf("***Dados da Primeira Carta***\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da cidade : %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Área : %.2f km²\n", area);
printf("PIB : %.2f bilhões de reais\n", pib);
printf("Pontos turísticos : %d\n", turisticos);
printf("Densidade populacional : %.2f hab/km²\n", densidadepoulacional);
printf("Pib per capita : %.2f reais\n", pibpercapita);



//declaração das cartas 

char estade;
char codig [20];
char nomedacid [50];
int popul;
float are, pb;
int turistico;
float densidadepoulaciona;
float pibpercapia;
float power;

//infomações fornecidas

printf("Digite o estado a seguir:  ");
scanf(" %c", &estade);


printf("Digite o código da sua segunda carta:  ");
scanf("%s", &codig);


printf("Digite o nome da sua segunda carta:  ");
scanf(" %s", nomedacid);


printf("Digite a população da sua segunda carta seguir:  ");
scanf(" %d", &popul);


printf("Digite a área da sua segunda carta a seguir:  ");
scanf(" %f", &are);


printf("Digite o PIB da sua segunda carta a seguir:  ");
scanf(" %f", &pb);


printf("Digite os pontos turíticos da sua segunda carta a seguir:  ");
scanf(" %d", &turistico);


//calculo da densidade populacional 

densidadepoulaciona = (float) popul / are;

//calculo do pib per capita

pibpercapia = (float) ( pb / popul ) * 1000000000;

//calculo do poder

power = (popul + are + pb + turistico + pibpercapia + 1/densidadepoulaciona);

printf("***Dados da Segunda Carta***\n");
printf("Estado: %c\n", estade);
printf("Código: %s\n", codig);
printf("Nome da cidade : %s\n", nomedacid);
printf("População: %d\n", popul);
printf("Área : %.2f km²\n", are);
printf("PIB : %.2f bilhões de reais\n", pb);
printf("Pontos turísticos : %d\n", turistico);
printf("Densidade populacional : %.2f hab/km²\n", densidadepoulaciona);
printf("Pib per capita : %.2f reais\n", pibpercapia);


// comparação das cartas 

printf(" População: Carta 1 venceu (%d)\n", (populacao > popul ));

printf(" Área: Carta 1 venceu (%d)\n ", (area > are ));

printf(" PIB: Carta 1 venceu (%d)\n ", (pib > pb));

printf(" Turísticos: Carta 1 venceu (%d)\n ", (turisticos > turistico));

printf(" Densidade populacional: Carta 2 venceu (%d)\n ", ( popul > populacao));

printf(" Pib per Capita: Carta 2 venceu (%d)\n ", (pb > pib));

printf(" Poder: Carta 2 venceu (%d)\n ", (power > poder));


}