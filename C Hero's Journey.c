#include <stdio.h>
#include <conio.h>

int main(){
    srand(time(NULL));
//(rand()%6)+1
    struct att {
    int dex;
    int str;
    int con;
    int hp;
    int exp;
    int dice;
    }player, enemy;

    player.dex = 1;
    player.str = 1;
    player.con = 1;
    player.hp = 6 + player.con;

    int points = 0; //TOTAL DE DANO CAUSADO

    int battles = 0;
    for(;;){ //LOOP INFINITO PARA CONTINUIDADE DO JOGO
    battles ++;


    printf("============== INIMIGO %i ==============\n\b", battles);
    switch (battles){
    case 1:
        enemy.dex = 1;
        enemy.str = 1;
        enemy.con = 1;
        enemy.hp = 4 + enemy.con;
        break;
    case 2:
        enemy.dex = 2;
        enemy.str = 0;
        enemy.con = 4;
        enemy.hp = 6 + enemy.con;
        break;
    case 3:
        enemy.dex = 3;
        enemy.str = -1;
        enemy.con = 0;
        enemy.hp = 6 + enemy.con;
        break;
    case 4:
        enemy.dex = 2;
        enemy.str = 2;
        enemy.con = 3;
        enemy.hp = 3 + enemy.con;
        break;
    case 5:
        enemy.dex = 4;
        enemy.str = 1;
        enemy.con = 2;
        enemy.hp = 4 + enemy.con;
        break;
    case 6:
        enemy.dex = 6;
        enemy.str = 6;
        enemy.con = 6;
        enemy.hp = 4 + enemy.con;
        break;
    default:
        enemy.dex = 6 + battles;
        enemy.str = 6 + battles;
        enemy.con = 6 + battles;
        enemy.hp = 6 + enemy.con + battles;
        break;

    }

    int turn = 1; //VAR DE CONTAGEM DE TURNOS
    while(enemy.hp>0){

        printf("\n======== TURNO %i ========\n\n", turn);
        turn++; //CONTADOR DE TURNOS

        int damage = 0; //CONTADOR DE DANO (RESETADO A CADA ATAQUE)
        if ((rand()%6)+1<=player.dex){ //ACERTO DO GOLPE

            damage = ((rand()%6)+1) + player.str; //CONTAGEM DE DANO
            printf("Voce acerta o 'goblin' causando %i de dano!\n", damage);
            enemy.hp -= damage; //SUBTRACAO DA VIDA
            points += damage; //ADICAO DOS PONTOS

            if((rand()%6)+1<=enemy.dex){ //ACERTO DO INIMIGO

                damage = ((rand()%6)+1) + enemy.str; //CONTAGEM DE DANO
                printf("O 'goblin' acerta causando %i de dano!\n", damage);
                player.hp -= damage; //SUBTRACAO DA VIDA

            } else { //ERRO DO INIMIGO

                printf("'Goblin' errou!\n");

            }

        } else { //ERRO DO GOLPE

            printf("Voce errou!\n");

            if((rand()%6)+1<=enemy.dex){ //ACERTO DO INIMIGO

                damage = ((rand()%6)+1) + enemy.str; //CONTAGEM DE DANO
                printf("O 'goblin' acerta causando %i de dano!\n", damage);
                player.hp -= damage; //SUBTRACAO DA VIDA

            } else { //ERRO DO INIMIGO

                printf("'Goblin' errou!\n");

            }
        }

        printf("\nHP ATUAL: %i\n", player.hp);
        printf("HP INIMIGO: %i\n", enemy.hp);

          if(player.hp <= 0){ //MORTE DO PLAYER
            printf("\n\nVoce morreu com %i pontos, fim da historia...\n", points);
            printf("Finalizando jogo...\n");
            return 0;
        }
    }


    int p_decision; //VARIAVEL DE ESCOLHA
    printf("\n====== FIM COMBATE ======\n\n");
    //ALA DE RECOMPENSAS EM ATRIBUTO
    printf("Escolhas sua recompensa:\n");
    printf("\t1 - Forca\n");
    printf("\t2 - Velocidade\n");
    printf("\t3 - Resistencia\n");
    printf("\t4 - Cura\n"); //DECISAO EM TODA BATALHA OPCAO DE CURA OU ATAQUE (AINDA NAO FEITO)

    scanf("%i", &p_decision);

    switch (p_decision){
    case 1:
        player.str += 1;
        break;
    case 2:
        player.dex += 1;
        break;
    case 3:
        player.con += 1;
        break;
    case 4:
        player.hp += ((rand()%5+1));
        break;
    } //MUDANCA DAS VARIAVES DE ATT


    printf("\n====== SEU GUERREIRO ======\n");
    printf("\tFORCA: <%i>\n\tVELOCIDADE: <%i>\n\tRESISTENCIA: <%i>\n\tHP: <%i>\n", player.str, player.dex, player.con, player.hp);//PRINTF DE VERIFICACAO DE ATRIBUTOS
    printf("\n\n Deseja continuar o jogo? \n\t1 - Sim \n\t2 - Nao\n");
    scanf("%i", &p_decision);
    if(p_decision == 2)
        return 0;

    }


return 0;
}
