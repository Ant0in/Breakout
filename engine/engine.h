#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <stdint.h>

#include "../core/position2D.h"
#include "../core/player_ball.h"

class GameEngine {

    public:
        static void processCollision(PlayerBall& player);
};

#endif