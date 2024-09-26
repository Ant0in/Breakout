

#include <iostream>
#include <stdint.h>

#include "./core/position2D.h"
#include "./core/player_ball.h"
#include "./engine/engine.h"


int main() {

    PlayerBall ball = PlayerBall(50, 50, 0, 0);
    GameEngine::processCollision(ball);

    return 0;
}