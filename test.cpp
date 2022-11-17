#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <initializer_list>

#include "Animal.h"
#include "Circle.h"
#include "Rect.h"
#include "MyString.h"

using namespace std;

int main()
{

    // MyString str("Say My Name");
    // cout << "str "<< str << endl;
    // MyString str2(10, 'z');
    // cout << "str2 "<< str2 << endl;
    // MyString str3 = str2;
    // cout << "str3 before "<< str3 << endl;
    // str3 += str;
    // cout << "str3 after"<< str3 << endl;
    // MyString str4 = MyString("happy!");
    // cout << "str4 "<< str4 << endl;
    // MyString str5 = str3 + str4;
    // cout << "str5 "<< str5 << endl;
    // str5 = str;
    // cout << "str5 "<< str5 << endl;
    // cin >> str5;
    // cout << "str5 "<< str5 << endl;

    // IShape* sh0 = new Rect(3, 4);

    // Circle c = Circle(5);
    // IShape* sh1 = &c;

    // delete sh0;
    // delete sh1;

    // sh1 -> sayHi(5);
    //c.sayHi(5);

    ifstream infile;
    ofstream outfile;
    infile.open("pic.webp", ios::in | ios::binary);
    outfile.open("picCopy3.webp", ios::out | ios::binary);

    if (!infile) {
        cout<<"infile failed"<<endl;
    }

    if (!outfile) {
        cout<<"outfile failed"<<endl;
    }

    char buff[1024];
    int count = 0;
    while (!infile.eof()) {
        infile.read(buff, 1024);
        int len = infile.gcount();
        outfile.write(buff, len);
        count++;
    }

    

    infile.close();
    outfile.close();
    return 0;
}