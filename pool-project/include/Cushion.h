#ifndef CUSHION_H
#define CUSHION_H


class Cushion
{
    double x1;
    double y1;
    double x2;
    double y2;

    public:
        Cushion(double, double, double, double);
        ~Cushion();

    double getX1() const;
    double getY1() const;
    double getX2() const;
    double getY2() const;
};

#endif // CUSHION_H
