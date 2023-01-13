#pragma once
#include<iostream>
#include<string>
using namespace std;
class time{
string movietime;
public:
    time();
    void setmovietime(string);
    string getmovietime();
    void schedule1();
    void schedule2();
    void schedule3();
    void schedule4();

};
time::time()
{
    this->movietime="";
}
void time::setmovietime(string mt)
{
    this->movietime=mt;
}
string time::getmovietime()
{
    return movietime;
}
void time::schedule1()
{
    cout<<"\t\t\t\t\t1)\tMON    11am\n\t\t\t\t\t2)\tTUE    2pm\n\t\t\t\t\t3)\tWED    4pm\n\t\t\t\t\t4)\tTHU    9pm"<<endl;
}
void time::schedule2()
{
    cout<<"\t\t\t\t\t1)\tMON    11am\n\t\t\t\t\t2)\tTUE    2pm\n\t\t\t\t\t3)\tWED    4pm\n\t\t\t\t\t4)\tTHU    9pm"<<endl;
}
void time::schedule3()
{
    cout<<"\t\t\t\t\t1)\tMON    11am\n\t\t\t\t\t2)\tTUE    2pm\n\t\t\t\t\t3)\tWED    4pm\n\t\t\t\t\t4)\tTHU    9pm"<<endl;
}
void time::schedule4()
{
    cout<<"\t\t\t\t\t1)\tMON    11am\n\t\t\t\t\t2)\tTUE    2pm\n\t\t\t\t\t3)\tWED    4pm\n\t\t\t\t\t4)\tTHU    9pm"<<endl;
}
