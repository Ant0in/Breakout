

#include <iostream>
#include <stdint.h>

#include "./core/position2D.h"
#include "./core/player_ball.h"
#include "./engine/engine.h"
#include "./core/solid_objects.h"


int main() {

    PlayerBall ball = PlayerBall(50, 50, 0, 0);
    GameEngine::processCollision(ball);
    SolidRectangle r = SolidRectangle(Position2D(1, 1), Position2D(9, 9));

    return 0;
}