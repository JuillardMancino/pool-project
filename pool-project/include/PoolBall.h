#ifndef POOLBALL_H
#define POOLBALL_H

#include "MoveVector.h"

class PoolBall
{
    double x;
    double y;
    MoveVector transVector;
    MoveVector rotVector;
    int colour;
    int id;

    public:
        PoolBall(int, int);
        PoolBall(double, double, int, int);
        ~PoolBall();

        double getX() const;
        double getY() const;
        MoveVector const& getTranslation() const;
        MoveVector const& getRotation() const;
        int getColour() const;
        int getId() const;

        void setX(double);
        void setY(double);
        void setTranslation(MoveVector const&);
        void setRotation(MoveVector const&);
};

#endif // POOLBALL_H
