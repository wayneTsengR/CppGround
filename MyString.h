#ifndef MY_STRING_H
#define MY_STRING_H

#include<iostream>

using namespace std;

class MyString
{
public:

    MyString(const char* pStr);
    MyString(int n, char c);
    ~MyString ();

    MyString(MyString& s);
    MyString& operator=(MyString& s);

    char operator[](int pos) const;
    char at(int pos) const;
    bool empty() const;
    int length() const;
    int size() const;
    MyString& operator+=(const MyString& s);
    MyString operator+(const MyString& s);

    friend istream& operator>>(istream& input, MyString& s);
    friend ostream& operator<<(ostream& output, MyString& s);

private:
    char* m_pBuff;
    int m_nRealLen;
    int m_nBuffSize;
};

#endif