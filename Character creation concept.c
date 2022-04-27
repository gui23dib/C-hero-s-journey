#include <stdio.h>
#include <string.h>

int main(){

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
        int level;
        int hp;
        char name[20];
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
    scanf("%s", &player.name);
    printf("\n");

    printf("Seja bem vindo %s, para comecar o jogo precisamos saber um pouco mais sobre voce...\n", player.name);
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
                        return 0;
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
                        return 0;
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
                        return 0;
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
                        return 0;
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
                        return 0;
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
                        return 0;
                }

            break;

            default:
            break;
        }
    }

        if(player.att_con>10){
            player.hp = 8 + ((player.att_con - 10) / 2);
        } else {
            player.hp = 8;
        }
        player.level = 1;

        system("cls"); //RESETA A TELA DO LOG

        //CONFIRMACAO DE ATRIBUTOS
        printf("\n========== %s ==========\n", player.name);
        printf("HP: <%i>       LVL: <%i>\n\n", player.hp, player.level);

        printf("<%i> FORCA \n", player.att_str);
        printf("<%i> DESTREZA \n", player.att_dex);
        printf("<%i> CONSTITUICAO \n", player.att_con);
        printf("<%i> INTELIGENCIA \n", player.att_int);
        printf("<%i> SABEDORIA \n", player.att_wis);
        printf("<%i> CARISMA \n\n", player.att_car);
        printf("===========================\n\n", player.name);

return 0;
}
