#include "Pool.h"

Pool::Pool()
{
}

Pool::~Pool()
{
}

std::list<Cushion> const& Pool::getCushions() const
{
    return this->cushions;
}

std::list<Hole> const& Pool::getHoles() const
{
    return this->holes;
}

void Pool::setCushions(std::list<Cushion> const& l)
{
    this->cushions = l;
}

void Pool::setHoles(std::list<Hole> const& l)
{
    this->holes = l;
}

bool Pool::isPotted(PoolBall const& b) const
{
    std::list<Hole>::const_iterator it;

    for(it = this->holes.begin(); it != this->holes.end(); ++it)
    {
        if (it->inHole(b.getX(), b.getY()))
            return true;
    }
    return false;
}

bool Pool::isOnCushion(PoolBall const& b) const
{
    return false;
}
