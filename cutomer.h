#pragma once
#include<iostream>
#include<string>
#include"person.h"
using namespace std;
class customer: public person{
int customerid;

public:
    customer();
    string address;
    void setcustomerid(int);
    int getcustomerid();
    void checkcustomer();
    void getinfo();
    void menu();
    void setaddress(string);
    string getaddress();
    void oldcustomer();
};
