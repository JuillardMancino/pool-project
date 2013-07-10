#ifndef POOL_H
#define POOL_H

#include <list>
#include "Cushion.h"
#include "Hole.h"
#include "PoolBall.h"

class Pool
{
    std::list<Cushion> cushions;
    std::list<Hole> holes;

    public:
        Pool();
        ~Pool();

        std::list<Cushion> const& getCushions() const;
        std::list<Hole> const& getHoles() const;

        void setCushions(std::list<Cushion> const&);
        void setHoles(std::list<Hole> const&);

        bool isPotted(PoolBall const&) const;
        bool isOnCushion(PoolBall const&) const;

    protected:
    private:
};

#endif // POOL_H
