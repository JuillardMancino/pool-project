#ifndef CUE_H
#define CUE_H

#include "MoveVector.h"

class Cue
{
    double x;
    double y;
    double strength;
    MoveVector dir;

    public:
        Cue();
        ~Cue();

        double getX() const;
        double getY() const;
        double getStrength() const;
        MoveVector const& getDirection() const;

        void setX(double);
        void setY(double);
        void setStrength(double);
        void setDirection(MoveVector const&);

};

#endif // CUE_H
