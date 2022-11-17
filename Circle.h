#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public IShape {
public:

    Circle();
    Circle(int);
    virtual double getArea() override;
    ~Circle();
    void sayHi() override;

private:

    double radius;

};
#endif