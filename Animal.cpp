#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(Animal& a) {
    this -> name = a.name;
    this -> like_num = a.like_num;
    this -> age = a.age;
    cout << "construct Animal with copy " << name << " " << age << endl;
}

Animal::Animal(string name, int age) : name(name), age(age) {
    cout << "construct Animal with name and age " << name << " " << age << endl;
}

int Animal::total_num = 10;

const vector<int>& Animal::get_like_num( ) const {
    return like_num;
}

Animal Animal::operator+(Animal& a){
    Animal res(this -> name + a.name);
    res.age = this -> age + a.age;
    return res;
}

void Animal::operator+=(Animal& a){
    this -> name += a.name;
    this -> age += a.age;
}