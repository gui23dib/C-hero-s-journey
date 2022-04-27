#include <stdio.h>
#include <string.h>
#include <conio.h>

int trade_decision(){

    int decision = 0;

    printf("1 - NEGOCIAR \n2 - IGNORAR \n3 - ROUBAR\n");

    scanf("%i", &decision);

    if (decision == 1){
        printf("NEGOCIAR\n"); //FUNCAO DE CARISMA E INTELIGENCIA
    } else if (decision == 2){
        printf("IGNORAR\n"); //CONTINUACAO APENAS
    } else if (decision == 3){
        printf("ROUBAR\n"); //FUNCAO DE BATALHA
    } else {
        printf("ERRO DE SELECAO\nFECHANDO PROGRAMA...");
        exit(0);
    }

    return decision;
}

int conv_decision(){

    int decision = 0;

    printf("1 - CONVERSAR \n2 - IGNORAR \n3 - INTIMIDAR\n");

    scanf("%i", &decision);

    if (decision == 1){
        printf("CONVERSAR\n"); //FUNCAO DE CARISMA
    } else if (decision == 2){
        printf("IGNORAR\n"); //CONTINUACAO APENAS
    } else if (decision == 3){
        printf("INTIMIDAR\n"); //FUNCAO DE CARISMA
    } else {
        printf("ERRO DE SELECAO\nFECHANDO PROGRAMA...");
        exit(0);
    }

    return decision;
}

int battle_decision(){

    int decision = 0;

    printf("1 - BATALHAR \n2 - FUGIR \n3 - CONVERSAR\n");

    scanf("%i", &decision);

    if (decision == 1){
        printf("BATALHA\n"); //FUNCAO DE BATALHA
    } else if (decision == 2){
        printf("FUGA\n"); //FUNCAO DE FUGA
    } else if (decision == 3){
        printf("CONVERSA\n"); //FUNCAO DE CARISMA
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

    situation_switch = rand()%5; //rand()%5 para randomizacao

    printf("voce encontra um %s em %s %s \n", entity[(rand()%10)], scenario[(rand()%10)], situation[situation_switch]); //trocar VOCE por player.name

    switch (situation_switch){
        case 0:
            battle_decision();
        break;
        case 1:
            trade_decision();
        break;
        case 2:
            conv_decision();
        break;
        case 3:
            battle_decision();
        break;
        case 4:

            trade_decision();
        break;
    }

}
