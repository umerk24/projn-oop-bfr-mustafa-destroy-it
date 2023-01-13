#pragma once
#include<iostream>
#include<string>
#include"MemberShip.h"
#include"cutomer.h"
using namespace std;
class movie{
string moviename;
string dimension;
string direct;
string runtime;
string type;
string release;
public:
    movie();
    customer cu;
    member mem;
    int tim;
    void setmoviename(string);
    string getmoviename();
    void setdimension(string);
    string getdimension();
    void setdirect(string);
    string getdirect();
    void setruntime(string);
    string getruntime();
    void settype(string);
    string gettype();
    void setrelease(string);
    string getrelease();
    void menu();
    void memberop();

    void playing();
    void schedule();
    void movieselected();
    void viewb();
    void addmovie();
    void lists();

};

