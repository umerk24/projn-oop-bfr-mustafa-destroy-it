#pragma once
#include<iostream>
#include"cutomer.h"
using namespace std;

customer::customer()
{
    this->customerid=0;
    this->address="";
}
void customer::setcustomerid(int cid)
{
    this->customerid = cid;
}
int customer::getcustomerid()
{
    return customerid;
}
void customer::setaddress(string ad)
{
    this->address=ad;
}
string customer::getaddress()
{
    return address;
}
void customer::checkcustomer()
{
    string check;
    int arr[10];
    int serial = 101;
    int local = 0;
    int ver;
    cout<<"Are you a new customer or a member"<<endl;
    cout<<"Press N if new customer" << endl;
    cout<<"Press M if member" <<endl;
    cin >> check;
    for(int n=0; n<10; n++)
    {
    arr[n]=serial;
    serial++;
    }
    if(check == "n" || check == "N")
    {
    }
    if(check == "m" || check == "M")
    {
        cout<<"Enter your Customer ID; ";
        cin>> ver;
        for(int n=0; n<10; n++)
        {
            if(ver=arr[n])
            {
                local++;
            }
        }
        if(local>0)
        {
            cout<<"Customer Verified "<<endl;
            cout<<"You will get additional 10% off"<<endl;
        }
        else
        {
            cout<<"Invalid Membership ID"<<endl;
        }
    }

}
void customer::menu()
{
    cout<<"\t\t____________________________________"<<endl;
    cout<<"\t\t||WELCOME TO MOVIE TICKETING |\n|\t\t_____________________________\n "<< endl;
    cout<<"\t\t PRESS 1 TO BOOK A TICKET" << endl;
    cout<<"\t\t PRESS 2 TO VIEW YOUR BOOKING" << endl;
    cout<<"\t\t PRESS 3 TO VIEW TICKET PRICE" << endl;
    cout<<"\t\t PRESS 4 TO VIEW AVAILABLE SEATS" << endl;
    cout<<"\t\t PRESS 5 TO VIEW MOVIE TIMINGS" << endl;
    cout<<"\t\t PRESS 6 TO ADD NEW MOVIE" << endl;
    cout<<"\t\t PRESS 7 TO SHOW MOVIES LIST" << endl;
    cout<<"\t\t PRESS 8 TO GET A MEMBERSHIP" << endl;
    cout<<"\t\t PRESS 9 TO EXIT" << endl;
    cout<<"\t\t__________________________________"<<endl;
}
void customer::oldcustomer()
{
    cout<<"\t\t\t Do you have any Old membership"<<endl;
    cout<<"\t\t\t Yes or No"<<endl;
    cout<<"\t\t\t -Press Y or N: ";
    string s, st;
    int id = 101;
    cin>>s;

    if (s=="y"||s=="Y")
    {
        cout<<"Renew your membership"<<endl;
        cout<<"Enter ID: ";
        cin >> id;
        cout<<"Your membership is renewed"<<endl;
    }
    else if(s=="n"||s=="N")
    {
        cin.ignore();
        cout<<"\t\t\t ENTER YOUR ADDRESS :";
        getline(cin, st);
        cout<<"\t\t\t Congratulations! You are now a member"<<endl;
        cout<<"\t\t\t Your Membership ID: "<<id<<endl;
    }
}
