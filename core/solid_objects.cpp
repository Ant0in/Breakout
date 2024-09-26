
#include "solid_objects.h"



// Constructeur pour SolidRectangle
SolidRectangle::SolidRectangle(Position2D tl, Position2D br): top_left(tl), bottom_right(br) {}

// Implémentation de la méthode doesPlayerCollide
bool SolidRectangle::doesPlayerCollide(PlayerBall& player) {
    return false;
}
