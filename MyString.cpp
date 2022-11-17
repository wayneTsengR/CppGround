#include<iostream>

#include"MyString.h"

#define EXT_LEN 3

using namespace std;

MyString::MyString(const char* pStr) {
    cout << "construct MyString by MyString(const char* sPtr" << endl;
    m_nRealLen = strlen(pStr);
    m_pBuff = new char[m_nRealLen + EXT_LEN];
    memcpy(m_pBuff, pStr, m_nRealLen);
    m_nBuffSize = m_nRealLen + EXT_LEN;
}

MyString::MyString(int n, char c) {
    cout << "construct MyString by MyString(int n, char c)" << endl;
    m_nRealLen = n;
    m_pBuff = new char[n + EXT_LEN];
    m_nBuffSize = n + 50;
    for (int i = 0; i < n; ++i) {
        m_pBuff[i] = c;
    }

}

MyString::~MyString() {
    cout << "destruct MyString" << endl;
    if (m_pBuff != nullptr) {
        delete[] m_pBuff;
        m_pBuff = nullptr;
    }
    m_nRealLen = 0;
    m_nBuffSize = 0;

}

MyString::MyString(MyString& s) {

    cout << "construct MyString by MyString& s" << endl;
    m_nRealLen = s.m_nRealLen;
    m_nBuffSize = m_nRealLen + EXT_LEN;
    m_pBuff = new char[m_nBuffSize];

    memcpy(m_pBuff, s.m_pBuff, m_nRealLen);

}

MyString& MyString::operator=(MyString& s) {

    cout << "run MyString operator=" << endl;
    if (m_pBuff != nullptr) {
        delete[] m_pBuff;
        m_pBuff = nullptr;
    }
    m_nRealLen = s.m_nRealLen;
    m_nBuffSize = m_nRealLen + EXT_LEN;
    m_pBuff = new char[m_nBuffSize];

    for (int i = 0; i < m_nRealLen; ++i) {
        m_pBuff[i] = s.m_pBuff[i];
    }

    return *this;
}

char MyString::operator[](int pos) const {

    if (pos >= m_nRealLen) {
        return ' ';
    }
    return m_pBuff[pos];
}

char MyString::at(int pos) const {

    if (pos >= m_nRealLen) {
        return ' ';
    }
    return m_pBuff[pos];
}

int MyString::size() const {
    return m_nBuffSize;
}

int MyString::length() const {
    return m_nRealLen;
}

bool MyString::empty() const{
    return m_nRealLen > 0;
}

MyString MyString::operator+(const MyString& s) {
    MyString res("");
    res += *this;
    res += s;
    return res; 
}

MyString& MyString::operator+=(const MyString& s) {

    cout << "run MyString operator += " << s.length() << endl;  
    
    if (m_pBuff != nullptr && m_nBuffSize < m_nRealLen + s.length()) {
        
        char* new_pBuff = new char[m_nBuffSize];
        
        for (int i = 0; i < m_nRealLen; ++i) {
            new_pBuff[i] = m_pBuff[i];
        }

        delete[] m_pBuff;
        m_pBuff = new_pBuff;

    }

    for (int i = 0; i < s.length(); ++i) {
        m_pBuff[i + m_nRealLen] = s[i];
    }

    m_nRealLen += s.length();

    return *this;

}

istream& operator>>(istream& input, MyString& s) {
    cin.get(s.m_pBuff, s.size(), '\n');
    return input;
}

ostream& operator<<(ostream& output, MyString& s) {
    for (int i = 0; i < s.length(); ++i) {
        cout.put(s[i]);
    }
    return output;
}