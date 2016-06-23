#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
#include "Knight.h"

using namespace std;

class Board{
private:
    int Rows;
    int Columns;
    std::vector<Knight> Knights;

public:
    /**
        *  @pre None.
        *  @post A constructed empty Board with a set vector size;
        *  @return None.
        *
        */
    Board(int x, int y, int r, int c);
    /**
        *  @pre None.
        *  @post Prints the board
        *  @return None.
        *Lists the position of all the Knights
        */
    void printKnights();
    /**
        *  @pre None.
        *  @post Determines if there is a solution.
        *  @return true if solution false if none.
        *Attempts to place a knight if not able to calls itself to replace
 knight
        */
    bool placeKnight(int x, int r, int c);
       /**
        *  @pre None.
        *  @post None.
        *  @return True if empty spot false if knight is there.
        *Checks if any other Knights are in that position
        */
    bool checkKnights(int x,int r, int c); 
       /**
        *  @pre None.
        *  @post None.
        *  @return True if postion exists false if not.
        *  Makes sure position is on board
        */
    bool checkBoard(int r, int c);
       /**
        *  @pre None.
        *  @post None.
        *  @return The # of the knight in that postion.
        *Searches knights for one in given position returns the knights nu
mber
        */
    int searchKnights(int r, int c);
       /**
        *  @pre None.
        *  @post None
        *  @return True or false.
        *   Handles checking all the error possibilites.
        */
    bool checker(int x,int r, int c);
};
#endif // BOARD_H
