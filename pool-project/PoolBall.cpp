#include "PoolBall.h"

PoolBall::PoolBall(int id, int colour)
{
    this->x = 0;
    this->y = 0;
    this->id = id;
    this->colour = colour;
}

PoolBall::PoolBall(double x, double y, int id, int colour)
{
    this->x = x;
    this->y = y;
    this->id = id;
    this->colour = colour;
}

PoolBall::~PoolBall()
{
}

double PoolBall::getX() const
{
    return this->x;
}

double PoolBall::getY() const
{
    return this->y;
}

MoveVector const& PoolBall::getTranslation() const
{
    return this->transVector;
}

MoveVector const& PoolBall::getRotation() const
{
    return this->rotVector;
}

int PoolBall::getColour() const
{
    return this->colour;
}

int PoolBall::getId() const
{
    return this->id;
}

void PoolBall::setX(double x)
{
    this->x = x;
}

void PoolBall::setY(double y)
{
    this->y = y;
}

void PoolBall::setTranslation(MoveVector const& t)
{
    this->transVector = t;
}

void PoolBall::setRotation(MoveVector const& r)
{
    this->rotVector = r;
}
