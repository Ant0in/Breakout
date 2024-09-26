
#ifndef SOLID_OBJECTS_H
#define SOLID_OBJECTS_H

#include <iostream>
#include <stdint.h>
#include "player_ball.h"
#include "position2D.h"


class SolidObject {

    public:
        // Méthode virtuelle pure pour la collision
        virtual bool doesPlayerCollide(PlayerBall& player) = 0; // virtuelle pure

};


class SolidRectangle : public SolidObject {
    
    private:
        Position2D top_left;
        Position2D bottom_right;

    public:

        // Constructeur pour SolidRectangle
        SolidRectangle(Position2D tl, Position2D br);
        bool doesPlayerCollide(PlayerBall& player) override;

};

#endif
