#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

char player_name[20];
int player_hp;
int player_level;

int character_costumization(){

    int aux, i; //UTILITARIOS

    struct {
        int att_str;
        int att_dex;
        int att_con;
        int att_int;
        int att_wis;
        int att_car;

        int att_points;
        int decision;
        char fav_color[20];
        char fav_item[20];
    }player, enemy;

    player.att_points = 15; //DISTRIBUICAO ADICIONAL PARA ATT

    //ATRIBUTOS
    player.att_str = 5;
    player.att_dex = 5;
    player.att_con = 5;
    player.att_int = 5;
    player.att_wis = 5;
    player.att_car = 5;


    printf("Digite o nome de seu guerreiro: ");
    scanf("%s", &player_name);
    printf("\n");

    printf("Seja bem vindo %s, para comecar o jogo precisamos saber um pouco mais sobre voce...\n", player_name);

    printf("Qual e a sua cor preferida? \n");
    scanf("%s", &player.fav_color);
    printf("\n");

    printf("Legal!!! eu tambem gosto muito de %s! \n", player.fav_color);
    printf("e sua ""coisa"" favorita? \n");
    scanf("%s", &player.fav_item);
    printf("\n");

    printf("hmmm... entao %s... uma escolha interessante\n");
    printf("Agora o mais importante, seus atributos, eles definem o quao proficiente voce e em cada aspecto e\n\n\n");

    for(i=1 ; i<=6; i++){ //LOOP 6x PARA CADA ATRIBUTO INDIVIDUALMENTE

        printf("Voce tem <%i> pontos restantes para distribuir\n", player.att_points); //INTERFACE
        printf(" \n"); //ATRIBUTOS ATUAIS
        printf("<%i> FORCA \n", player.att_str);
        printf("<%i> DESTREZA \n", player.att_dex);
        printf("<%i> CONSTITUICAO \n", player.att_con);
        printf("<%i> INTELIGENCIA \n", player.att_int);
        printf("<%i> SABEDORIA \n", player.att_wis);
        printf("<%i> CARISMA \n\n", player.att_car);


        if(player.att_points <= 0){ //LIMITACAO DE PONTOS PARA O LOOP
            break;
        }

        switch(i){ //SELECIONA ATT ATUAL
            case 1:

                printf("Quantos pontos gostaria de adicionar em FORCA?  ");
                scanf("%i", &aux);
                printf("\n");

                if(aux<=player.att_points ){

                    player.att_str += aux;
                    player.att_points -= aux;

                } else { //ERRO DE ATRIBUICAO

                    printf("ERRO DE ATRIBUICAO, VOCE SO TEM <%i> PONTOS PARA DISTRIBUIR\n", player.att_points);
                    printf("FECHANDO PROGRAMA...\n");
                        exit(0);
                }

            break;

            case 2:

                printf("Quantos pontos gostaria de adicionar em DESTREZA?  ");
                scanf("%i", &aux);
                printf("\n");

                if(aux<=player.att_points ){

                    player.att_dex += aux;
                    player.att_points -= aux;

                } else { //ERRO DE ATRIBUICAO

                    printf("ERRO DE ATRIBUICAO, VOCE SO TEM <%i> PONTOS PARA DISTRIBUIR\n", player.att_points);
                    printf("FECHANDO PROGRAMA...\n");
                        exit(0);
                }

            break;

            case 3:

                printf("Quantos pontos gostaria de adicionar em CONSTITUICAO?  ");
                scanf("%i", &aux);
                printf("\n");

                if(aux<=player.att_points ){

                    player.att_con += aux;
                    player.att_points -= aux;

                } else { //ERRO DE ATRIBUICAO

                    printf("ERRO DE ATRIBUICAO, VOCE SO TEM <%i> PONTOS PARA DISTRIBUIR\n", player.att_points);
                    printf("FECHANDO PROGRAMA...\n");
                        exit(0);
                }

            break;

            case 4:

                printf("Quantos pontos gostaria de adicionar em INTELIGENCIA?  ");
                scanf("%i", &aux);
                printf("\n");

                if(aux<=player.att_points ){

                    player.att_int += aux;
                    player.att_points -= aux;

                } else { //ERRO DE ATRIBUICAO

                    printf("ERRO DE ATRIBUICAO, VOCE SO TEM <%i> PONTOS PARA DISTRIBUIR\n", player.att_points);
                    printf("FECHANDO PROGRAMA...\n");
                        exit(0);
                }

            break;

            case 5:

                printf("Quantos pontos gostaria de adicionar em SABEDORIA?  ");
                scanf("%i", &aux);
                printf("\n");

                if(aux<=player.att_points ){

                    player.att_wis+= aux;
                    player.att_points -= aux;

                } else { //ERRO DE ATRIBUICAO

                    printf("ERRO DE ATRIBUICAO, VOCE SO TEM <%i> PONTOS PARA DISTRIBUIR\n", player.att_points);
                    printf("FECHANDO PROGRAMA...\n");
                        exit(0);
                }

            break;

            case 6:

                printf("Quantos pontos gostaria de adicionar em CARISMA?  ");
                scanf("%i", &aux);
                printf("\n");

                if(aux<=player.att_points ){

                    player.att_car += aux;
                    player.att_points -= aux;

                } else { //ERRO DE ATRIBUICAO

                    printf("ERRO DE ATRIBUICAO, VOCE SO TEM <%i> PONTOS PARA DISTRIBUIR\n", player.att_points);
                    printf("FECHANDO PROGRAMA...\n");
                        exit(0);
                }

            break;

            default:
            break;
        }
    }

        if(player.att_con>10){
            player_hp = 8 + ((player.att_con - 10) / 2);
        } else {
            player_hp = 8;
        }
        player_level = 1;

        system("cls"); //RESETA A TELA DO LOG

        //CONFIRMACAO DE ATRIBUTOS
        printf("\n========== %s ==========\n", player_name);
        printf("HP: <%i>       LVL: <%i>\n\n", player_hp, player_level);

        printf("<%i> FORCA \n", player.att_str);
        printf("<%i> DESTREZA \n", player.att_dex);
        printf("<%i> CONSTITUICAO \n", player.att_con);
        printf("<%i> INTELIGENCIA \n", player.att_int);
        printf("<%i> SABEDORIA \n", player.att_wis);
        printf("<%i> CARISMA \n\n", player.att_car);
        printf("===========================\n\n");

return 0;

}

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

    printf("\n");

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

    printf("\n");

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

    printf("\n");

    return decision;
}

int challenge_generation(){
    srand(time(NULL));

    char scenario[10][22] = {{"floresta"}, {"campo florido"}, {"ruinas"}, {"cidade abandonada"}, {"estrada"}, {"deserto"}, {"caverna"}, {"encontro de mercantes"}, {"montanha"}, {"campo de batalha"}};
    char entity[10][22] = {{"mercante"}, {"anciao renegado"}, {"mago"}, {"bandido"}, {"goblin"}, {"kobold"}, {"troll"}, {"morcegos"}, {"fugitivo"}, {"esqueleto"}};
    char passive_situation[5][25] = {{"oferecendo um item"}, {"propondo trocas"}, {"disposto a conversar"}, {"pulando de alegria"}, {"admirando a paisagem"}};
    char agressive_situation[5][25] = {{"atras de briga"}, {"preparando uma emboscada"}, {"pronto para brigar!"}, {"distraido"}, {"armado para batalha!"}};


    int situation_switch = rand()%5; //rand()%5 para randomizacao

    int entity_selection = rand()%10;

    if (entity_selection > 3){
        printf("%s encontra um %s em %s %s \n", player_name, entity[entity_selection], scenario[rand()%10], agressive_situation[situation_switch]);
    } else {
        printf("%s encontra um %s em %s %s \n", player_name, entity[entity_selection], scenario[rand()%10], passive_situation[situation_switch]);
        if(situation_switch > 1){
            conv_decision();
        } else {
            trade_decision();
        }
    }
}

int main(void){
    character_costumization();
    challenge_generation();
}
