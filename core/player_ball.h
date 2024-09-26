
#ifndef PLAYER_BALL_H
#define PLAYER_BALL_H

#include <iostream>
#include <stdint.h>
#include "position2D.h"

class PlayerBall {
    
    private:
    
        Position2D ballPosition;
        float x_velocity;
        float y_velocity;

    public:

        PlayerBall(float x, float y, float vx, float vy);

};

#endif