#include "Knight.h"

Knight::Knight(){
Column=-1;
Row=-1;
}


void Knight::setKnight(int r, int c){
    Column=c;
    Row=r;
}

void Knight::removeKnight(){
    Column=-1;
    Row=-1;
}

int Knight::getRow(){
return Row;
}

int Knight::getColumn(){
return Column;
}
