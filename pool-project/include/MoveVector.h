#ifndef MOVEVECTOR_H
#define MOVEVECTOR_H


class MoveVector
{
    double x;
    double y;
    double z;

    public:
        //Ctors / Dtor
        MoveVector();
        MoveVector(double, double, double);
        ~MoveVector();

        //Getters
        double getX() const;
        double getY() const;
        double getZ() const;

        //Setters
        void setX(double);
        void setY(double);
        void setZ(double);
};

#endif // MOVEVECTOR_H
