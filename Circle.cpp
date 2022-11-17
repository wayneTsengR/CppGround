#include <iostream>
#include <math.h>

#include "Circle.h"

using std::cout;
using std::endl;

Circle::Circle(int r): 
    IShape(3), radius(r) {
    cout << "circle construct with radius" << r << endl;
}

Circle::Circle() : Circle::Circle(0) {
    cout << "circle default" << endl;
}

double Circle::getArea() {
    return radius * radius * M_PI;
}

Circle::~Circle(){
    cout<<"Circle destructor"<<endl;
}

void Circle::sayHi() {
    cout << "Circle sayHi" << endl;
}