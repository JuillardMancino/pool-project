#include <cmath>
#include "Hole.h"

Hole::Hole(double x, double y, int id)
{
    this->x = x;
    this->y = y;
    this->id = id;
}

Hole::~Hole()
{
}

double Hole::getX() const
{
    return this->x;
}

double Hole::getY() const
{
    return this->y;
}

int Hole::getId() const
{
    return this->id;
}

bool Hole::inHole(double bx, double by) const
{
    double dist = sqrt(pow(bx - this->x, 2) + pow(by - this->y, 2));
    return dist <= HOLE_RADIUS;
}
