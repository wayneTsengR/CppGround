#include<iostream>

#include "Rect.h"

using std::cout;
using std::endl;

Rect::Rect() : Rect(0, 0) {
    cout<<"Rect constructor default"<<endl;
}

Rect::Rect(int w, int h) : IShape(4), width(w), height(h) {
    cout<<"Rect constructor with width & height"<<endl;
}

double Rect::getArea(){
    return width * height;
}

Rect::~Rect(){
    cout<<"Rect destructor"<<endl;
}