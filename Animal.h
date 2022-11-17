#ifndef ANIMAL_H
#define ANIMAL_H

#include <vector>
#include <string>

using namespace std;

class Animal
{
public:

    Animal(Animal& a);

    Animal(string name, int age = 33);

    string name;
    
    static int total_num;

    int getAge() { return age; }
    
    const vector<int>& get_like_num( ) const;

    Animal operator+(Animal& a);
    void operator+=(Animal& a);

    friend void same(Animal& a);

private:

    int age;
    vector<int> like_num;

};

#endif