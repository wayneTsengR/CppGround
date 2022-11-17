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

    //lovely boss


private:
    int id;
};

#endif