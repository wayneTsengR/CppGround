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
    //1
    //2
    //3

private:
    int id;
};

#endif