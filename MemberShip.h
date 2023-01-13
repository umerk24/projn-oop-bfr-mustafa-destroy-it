#pragma once
#include<iostream>
#include<string>
using namespace std;
class member{
string un;
string pass;
public:
    member();
    void setun(string);
    string getun();
    void setpass(string);
    string getpass();
    void MemberShips();
    bool admin();
};
