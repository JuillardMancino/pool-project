#ifndef HOLE_H
#define HOLE_H

#define HOLE_RADIUS 5

class Hole
{
    double x;
    double y;
    int id;

    public:
        Hole(double, double, int);
        ~Hole();

        double getX() const;
        double getY() const;
        int getId() const;

        bool inHole(double, double) const;
};

#endif // HOLE_H
