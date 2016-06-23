#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream>
#include <vector>

class Knight{
private:
    int  Column;
    int  Row;
public:
    /**
        *  @pre None.
        *  @post A constructed empty Knight
        *  @return None.
        *
        */
    Knight();
    /**
        *  @pre None.
        *  @post Locks in the knights position
        *  @return None.
        *
        */
    void setKnight(int r, int c);
        /**
        *  @pre None.
        *  @post Resets the Knights position to default
        *  @return None.
        *
        */
    void removeKnight();
        /**
        *  @pre None.
        *  @post None.
        *  @return The Knights Row
        *
        */
    int getRow();
    /**
        *  @pre None.
        *  @post None.
        *  @return The Knights Column
        *
        */
    int getColumn();
};

#endif // KNIGHT_H
