#include<iostream>
#include "Shape.h"

using std::cout;
using std::endl;

IShape::IShape(int id): id(id) {
    cout<<"IShape constructor with "<<id<<endl;
}

bool IShape::operator>(const IShape& shp) {
    auto a = this -> id;
    auto b = shp.id;
    return  a > b;
}

IShape::~IShape() {
    cout<<"IShape destructor "<<endl;
}

void IShape::sayHi() {
    cout << "IShape sayHi" << endl;
}

void IShape::sayHi(int times) {
    cout << "IShape sayHi for " << times << " times" << endl;
}
