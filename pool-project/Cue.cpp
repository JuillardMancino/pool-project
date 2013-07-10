#include "Cue.h"

Cue::Cue()
{
    this->x = 0;
    this->y = 0;
    this->strength = 0;
}

Cue::~Cue()
{
}

double Cue::getX() const
{
    return this->x;
}

double Cue::getY() const
{
    return this->y;
}

double Cue::getStrength() const
{
    return this->strength;
}

MoveVector const& Cue::getDirection() const
{
    return this->dir;
}

void Cue::setX(double x)
{
    this->x = x;
}

void Cue::setY(double y)
{
    this->y = y;
}

void Cue::setStrength(double s)
{
    this->strength = s;
}

void Cue::setDirection(MoveVector const& dir)
{
    this->dir = dir;
}
