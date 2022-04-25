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

    player.dex=3;
    player.str=3;
    player.con=3;
    player.hp=6+player.con;
    enemy.dex=4;
    enemy.str=2;
    enemy.con=1;
    enemy.hp=6+enemy.con;


    int turn = 1; //VAR DE CONTAGEM DE TURNOS
    while(enemy.hp>0){

        if(player.hp <= 0){ //MORTE DO PLAYER
            printf("\n\nVoce morreu, fim da historia...\n");
            printf("Finalizando jogo...\n");
            return 0;
        }

        printf("\n======== TURNO %i ========\n\n", turn);
        turn++; //CONTADOR DE TURNOS

        int damage = 0; //CONTADOR DE DANO (RESETADO A CADA ATAQUE)
        if ((rand()%6)+1<=player.dex){ //ACERTO DO GOLPE

            damage = ((rand()%6)+1) + player.str; //CONTAGEM DE DANO
            printf("Voce acerta o 'goblin' causando %i de dano!\n", damage);
            enemy.hp -= damage; //SUBTRACAO DA VIDA

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
        printf("HP GOBLIN: %i\n", enemy.hp);
    }

    printf("\n====== FIM COMBATE ======\n\n");
    //ALA DE RECOMPENSAS EM ATRIBUTO
}
