#pragma once
#include<iostream>
#include"person.h"

using namespace std;
person::person()
{
     this->cell=0;
     this->name="";
     this->cnic=0;
}
person::person(string n, long long c, long long e)
{
    n="user";
    c=0300;
    e=123;
    this->cell=e;
    this->cnic=c;
    this->name=n;
}
void person::setname(string n)
{
    this->name=n;
}
string person::getname()
{
    return name;
}
void person::setcell(long long e)
{
    this->cell = e;
}
long long person::getcell()
{
    return cell;
}
void person::setcnic(long long c)
{
    this->cnic=c;
}
long long person::getcnic()
{
    return cnic;
}

void person::insert()
{
    cout<<"\t\t\t Enter Your name       : ";
    getline(cin, name);
    setname(name);
    cout<<"\t\t\t Enter CNIC            : ";
    cin>> cnic;
    cout<<"\t\t\t Enter Phone Number    : ";
    cin>>cell;
}
void person::display()
{
    cout<<"\t\t\t\t\t\t-----\n\n\n";
    cout<<"\t\t\t\t\t\t Your Name           : "<<name<<endl;
    cout<<"\t\t\t\t\t\t Your CNIC           : "<<cnic<<endl;
    cout<<"\t\t\t\t\t\t Your Phone Number   : "<<cell<<endl;
}
