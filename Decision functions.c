#include <stdio.h>
int funcaobonus(int , int);

int main(void){


return 0;
}









int funcaobonus(int atributo, int bonus_atributo){

    if(atributo > 10){
        bonus_atributo = (atributo - 10)/2;
    } else if (atributo < 10){
        bonus_atributo = (atributo/2)-5;
    }

return bonus_atributo;
}

