#pragma once
#include<iostream>
#include<string>
using namespace std;

class person{

    string name;
    long long cnic;
    long long cell;
public:
    person();
    person(string n, long long c, long long e);
    void setname(string n);
    string getname();
    void setcnic(long long c);
    long long getcnic();
    void setcell(long long e);
    long long getcell();
    void insert();
    void display();

};
