#ifndef SHAPE_H
#define SHAPE_H

class IShape {
public:
    IShape(int);
    virtual double getArea() = 0;
    bool operator>(const IShape& shp);
    virtual ~IShape();
    virtual void sayHi();

    void sayHi(int times);

    // cat 1
    // cat 2

    // dev 1
    // dev 2
    // dev 3
    // dev 4

    //lovely boss
    //happy work
    //happy work gagaga



private:
    int id;
};

#endif