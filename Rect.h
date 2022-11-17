#ifndef RECT_H
#define RECT_H

#include "Shape.h"

class Rect : public IShape {
public:
    Rect(int, int = 0);
    Rect();
    double getArea();
    ~Rect();
private:
    double width;
    double height;
};

#endif