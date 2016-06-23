#include <iostream>
#include "Board.h"
#include <cstdlib>

using namespace std;

int main(int argc,char* argv[])
{
int r=atoi(argv[1]);
int c=atoi(argv[2]);
int kr=atoi(argv[3]);
int kc=atoi (argv[4]);
if(kr>r){
    cout<<"Incorrect input"<<endl;
}
else if(kc>c){
    cout<<"Incorrect input"<<endl;
}
else if(kr<0){
    cout<<"Incorrect input"<<endl;
}
else if(kc<0){
    cout<<"Incorrect input"<<endl;
}
else{
    Board Board1(r,c,kr,kc);
        if(Board1.placeKnight(1,kr,kc)){
        }
        else{
            cout<<"Could not complete. Printing empty board: "<<endl;
        }
    Board1.printKnights();
}
}
