#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void){
srand(time(NULL));
int i;

char scenario[10][22] = {{"floresta"}, {"campo florido"}, {"ruinas"}, {"cidade abandonada"}, {"estrada"}, {"deserto"}, {"caverna"}, {"encontro de mercantes"}, {"montanha"}, {"campo de batalha"}};
char entity[10][22] = {{"goblin"}, {"mercante"}, {"bandido"}, {"anciao renegado"}, {"mago"}, {"kobold"}, {"troll"}, {"morcegos"}, {"fugitivo"}, {"esqueleto"}};
char situation[5][22] = {{"atras de briga"}, {"propondo trocas"}, {"disposto a conversar"}, {"distraido"}, {"oferecendo um item"}};

printf("voce encontra um %s em %s %s \n", entity[(rand()%10)], scenario[(rand()%10)], situation[(rand()%5)]); //trocar VOCE por player.name


}
