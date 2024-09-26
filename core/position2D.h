#ifndef POSITION2D_H
#define POSITION2D_H


struct Position2D {
    
    float x;
    float y;

    Position2D(float xCoord, float yCoord) : x(xCoord), y(yCoord) {}

    void prettyPrint() const;
};

#endif