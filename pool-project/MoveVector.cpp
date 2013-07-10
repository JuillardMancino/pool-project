#include "MoveVector.h"

MoveVector::MoveVector()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

MoveVector::MoveVector(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

MoveVector::~MoveVector()
{
}

double MoveVector::getX() const
{
    return this->x;
}

double MoveVector::getY() const
{
    return this->y;
}

double MoveVector::getZ() const
{
    return this->z;
}

void MoveVector::setX(double x)
{
    this->x = x;
}

void MoveVector::setY(double y)
{
    this->y = y;
}

void MoveVector::setZ(double z)
{
    this->z = z;
}
