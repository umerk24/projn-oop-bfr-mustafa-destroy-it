#pragma once
#include<iostream>
#include"MemberShip.h"
using namespace std;


member::member()
{
    this->un="";
    this->pass="";
}
void member::setpass(string s)
{
    pass=s;
}
string member::getpass()
{
    return pass;
}
void member::setun(string u)
{
    un =u;
}
string member::getun()
{
    return un;
}
void member::MemberShips()
{
    cout<<"\t\tMEMBERS BENEFIT" <<endl;
    cout<<"\t\t 1) Discount on drinks"<< endl;
    cout<<"\t\t 2) 10% off on Tickets"<< endl;
    cout<<"\t\t 3) Free 3D glasses"<<endl;
}
bool member::admin()
{
    cout<<"\t\t\t\t\t WELCOME TO MOVIE TICKETING SYSTEM" << endl;
    cout<<"\n ENTER USERNAME : ";
    cin>>un;
    setun(un);
    if(un=="a" || un=="A")
    {
        cout<<"\n ENTER PASSWORD : ";
        cin>>pass;
        if(pass =="a" || pass=="A")
        {
            setpass(pass);
            return true;
        }
        else{
        cout<<"Password is not correct";
        return false;

        }
    }
    else
    {
        cout<<"Username is not correct";
                return false;

    }
}
