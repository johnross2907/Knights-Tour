#include "Board.h"

Board::Board(int x, int y,int r, int c){
Columns=x;
Rows=y;
Knights.resize(x*y);
Knights[0].setKnight(r,c);
for(int i=1;i<(x*y);i++){
    Knights[i].setKnight(-1,-1);
}
}

void Board::printKnights(){
for(int i=0;i<Rows;i++){
    int helper;
    for(int x=0;x<Columns;x++){
        cout<<"[";
        //if(!checkKnights(i,x)){
            helper=searchKnights(i,x);
            if(helper<10){
                cout<<" "<<helper;
            }
            else{
                cout<<helper;
            }
        /**}
        else{
            cout<<"  ";
        }**/
        cout<<"] ";
    }
    cout<<endl;
}
}

bool Board::checker(int x, int r, int c){
if(!checkBoard(r,c)){
   return false;
}
if(!checkKnights(x,r,c)){
    return false;
}
return true;
}

bool Board::placeKnight(int x, int r, int c){
    if(x==(Rows*Columns)){
        return true;
    }
    int nr=0;
    int nc=0;
    nr=r+1;
    nc=c+2;
    if(checker(x,nr,nc)){
        Knights[x].setKnight(nr,nc);
        if(placeKnight((x+1),nr,nc)){
            return true;
        }
        else{
            Knights[x].removeKnight();
        }
    }
    nr=r+2;
    nc=c+1;
    if(checker(x,nr,nc)){
        Knights[x].setKnight(nr,nc);
        if(placeKnight((x+1),nr,nc)){
            return true;
        }
        else{
            Knights[x].removeKnight();
        }
    }
    nr=r-1;
    nc=c+2;
    if(checker(x,nr,nc)){
        Knights[x].setKnight(nr,nc);
        if(placeKnight((x+1),nr,nc)){
            return true;
        }
        else{
            Knights[x].removeKnight();
        }
    }
    nr=r-2;
    nc=c+1;
    if(checker(x,nr,nc)){
        Knights[x].setKnight(nr,nc);
        if(placeKnight((x+1),nr,nc)){
            return true;
        }
        else{
            Knights[x].removeKnight();
        }
    }
    nr=r-1;
    nc=c-2;
    if(checker(x,nr,nc)){
        Knights[x].setKnight(nr,nc);
        if(placeKnight((x+1),nr,nc)){
            return true;
        }
        else{
            Knights[x].removeKnight();
        }
    }
    nr=r-2;
    nc=c-1;
    if(checker(x,nr,nc)){
        Knights[x].setKnight(nr,nc);
        if(placeKnight((x+1),nr,nc)){
            return true;
        }
        else{
            Knights[x].removeKnight();
        }
    }
    nr=r+1;
    nc=c-2;
    if(checker(x,nr,nc)){
        Knights[x].setKnight(nr,nc);
        if(placeKnight((x+1),nr,nc)){
            return true;
        }
        else{
            Knights[x].removeKnight();
        }
    }
    nr=r+2;
    nc=c-1;
    if(checker(x,nr,nc)){
        Knights[x].setKnight(nr,nc);
        if(placeKnight((x+1),nr,nc)){
            return true;
        }
        else{
            Knights[x].removeKnight();
        }
    }
return false;
}


bool Board::checkKnights(int x, int r, int c){
if(x==0){
    return true;
}
for(int i=0; i<x;i++){
    if(Knights[i].getRow()==(r)){
        if(Knights[i].getColumn()==(c)){
        return false;
        }
    }
}
return true;
}

bool Board::checkBoard(int r, int c){
if(r<0){
    return false;
}
if(c<0){
    return false;
}
if(r>(Rows-1)){
    return false;
}
if(c>(Columns-1)){
    return false;
}
return true;
}

int Board::searchKnights(int r, int c){
for(int i=0; i<Knights.size();i++){
    if(Knights[i].getRow()==r){
        if(Knights[i].getColumn()==c){
        return i;
    }
}
}
}
