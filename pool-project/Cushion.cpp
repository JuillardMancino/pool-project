#include "Cushion.h"

Cushion::Cushion(double x1, double y1, double x2, double y2)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

Cushion::~Cushion()
{
}

double Cushion::getX1() const
{
    return this->x1;
}

double Cushion::getY1() const
{
    return this->y1;
}

double Cushion::getX2() const
{
    return this->x2;
}

double Cushion::getY2() const
{
    return this->y2;
}
