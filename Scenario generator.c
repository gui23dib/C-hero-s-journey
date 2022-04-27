#include <stdio.h>
#include <string.h>
#include <conio.h>

int passive_decision(){

int decision = 0;

printf("1 - BATALHAR \n2 - FUGIR \n");

scanf("%i", &decision);

if (decision == 1){
    printf("BATALHA\n"); //FUNCAO DE BATALHA
} else if (decision == 2){
    printf("FUGA\n"); //FUNCAO DE FUGA
} else {
    printf("ERRO DE SELECAO\nFECHANDO PROGRAMA...");
    exit(0);
}

return decision;
}

int main(void){
srand(time(NULL));
int i, situation_switch, decision_func_parameter;

char scenario[10][22] = {{"floresta"}, {"campo florido"}, {"ruinas"}, {"cidade abandonada"}, {"estrada"}, {"deserto"}, {"caverna"}, {"encontro de mercantes"}, {"montanha"}, {"campo de batalha"}};
char entity[10][22] = {{"goblin"}, {"mercante"}, {"bandido"}, {"anciao renegado"}, {"mago"}, {"kobold"}, {"troll"}, {"morcegos"}, {"fugitivo"}, {"esqueleto"}};
char situation[5][22] = {{"atras de briga"}, {"propondo trocas"}, {"disposto a conversar"}, {"distraido"}, {"oferecendo um item"}};

situation_switch = 0; //rand()%5

printf("voce encontra um %s em %s %s \n", entity[(rand()%10)], scenario[(rand()%10)], situation[situation_switch]); //trocar VOCE por player.name

switch (situation_switch){
    case 0:
        printf("0\n");
        passive_decision(decision_func_parameter);
    break;
    case 1:
        printf("1\n");
    break;
    case 2:
        printf("2");
    break;
    case 3:
        printf("3");
    break;
    case 4:
        printf("4");
    break;


}

}
