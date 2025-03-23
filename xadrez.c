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
float pibpe;

//infomações fornecidas

printf("Digite o estado a seguir: ");
scanf("%c", &estado);

printf("Digite o código da sua primeira carta:  ");
scanf("%s", &codigo);

printf("Digite o nome da sua primeira carta:  ");
scanf("%s", &nomedacidade);


printf("Digite a população da sua primeira carta seguir:  ");
scanf("%d", &populacao);


printf("Digite a área da sua primeira carta a seguir:  ");
scanf("%f", &area);


printf("Digite o PIB da sua primeira carta a seguir:  ");
scanf("%f", &pib);


printf("Digite os pontos turíticos da sua primeira carta a seguir:  ");
scanf("%d", &turisticos);


//calculo da densidade populacional 

densidadepoulacional = (float) populacao / area;

//calculo do pib per capita

pibpe = (float) ( pib / populacao ) * 1000000000;

printf("***Dados da Primeira Carta***\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da cidade : %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Área : %.2f km²\n", area);
printf("PIB : %.2f bilhões de reais\n", pib);
printf("Pontos turísticos : %d\n", turisticos);
printf("Densidade populacional : %.2f hab/km²\n", densidadepoulacional);
printf("Pib per capita : %.2f reais\n", pibpe);

}