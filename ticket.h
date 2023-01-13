#pragma once
#include<iostream>
#include<string>
#include"time.h"
#include"movie.h"
using namespace std;
class ticket{
int id;
double price;
string GoldorSilver;
int number;
int availableseats;
public:
    time t;
    movie m;
    ticket();
    void setid(int);
    int getid();
    void timings();
    void settickettype(string);
    string gettickettype();

    void setseat(int);
    int getseat();
    void availableseat();

    void setprice(double);
    double getprice();
    void setnumber(int);
    int getnumber();

    void movie1();
    void movie2();
    void movie3();
    void movie4();
    void display();
    void schedule();
    void tickettype();
    void ticketd();
    void pricet();
    void numbert();

};

ticket::ticket()
{
    this->id=11101;
    this->price=0.0;
    this->availableseats =300;
}
void ticket::setid(int id)
{
    this->id=id;
}
int ticket::getid()
{
    return id;
}
void ticket::setnumber(int n)
{
    this->number=n;
}
int ticket::getnumber()
{
    return number;
}
void ticket::setprice(double pri)
{
    this->price=pri;
}
double ticket::getprice()
{
    return price;
}
void ticket::settickettype(string tt)
{
    this->GoldorSilver=tt;
}
string ticket::gettickettype()
{
    return GoldorSilver;
}
void ticket::setseat(int a)
{
    this->availableseats=a;
}
int ticket::getseat()
{
    return availableseats;
}
void ticket::movie1()
{
    cout<<"\t\t\t_________________________\n"<<endl;
    cout<<"\t\t\t\t\t\t Movie Timings !!!\n"<<endl;
    cout<<"\t\t\t\t\t\t DAY TIME" <<endl;
    cout<<"\t\t\t\t\t\t_________"<<endl;
    t.schedule1();
    cout<<"\t\t\t Enter Choice : ";
    int x;
    cin >> x;

    cout<<"\t\t\t_________________________\n"<<endl;
    if(x==1)
    {
        cout<<"\t\t\t\t Timings : MON     11am"<<endl;
        t.setmovietime("MON 11am");
    }
    else if (x==2)
    {
        cout<<"\t\t\t\t Timings : TUE     2pm"<<endl;
        t.setmovietime("TUE 2pm");
    }
    else if (x==3)
    {
        cout<<"\t\t\t\t Timings : WED     4pm"<<endl;
        t.setmovietime("WED 4pm");
    }
    else if (x==4)
    {
        cout<<"\t\t\t\t Timings : THU     9pm"<<endl;
        t.setmovietime("THU 9pm");
    }
    cout<< "\t\t\t ________________________\n"<<endl;
}
void ticket::movie2()
{
   cout<<"\t\t\t_________________________\n"<<endl;
    cout<<"\t\t\t\t\t\t Movie Timings !!!\n"<<endl;
    cout<<"\t\t\t\t\t\t DAY TIME" <<endl;
    cout<<"\t\t\t\t\t\t_________"<<endl;
    t.schedule2();
    cout<<"\t\t\t Enter Choice : ";
    int x;
    cin >> x;

    cout<<"\t\t\t_________________________\n"<<endl;
    if(x==1)
    {
        cout<<"\t\t\t\t Timings : MON     11am"<<endl;
        t.setmovietime("MON 11am");
    }
    else if (x==2)
    {
        cout<<"\t\t\t\t Timings : TUE     2pm"<<endl;
        t.setmovietime("TUE 2pm");
    }
    else if (x==3)
    {
        cout<<"\t\t\t\t Timings : WED     4pm"<<endl;
        t.setmovietime("WED 4pm");
    }
    else if (x==4)
    {
        cout<<"\t\t\t\t Timings : THU     9pm"<<endl;
        t.setmovietime("THU 9pm");
    }
    cout<< "\t\t\t ________________________\n"<<endl;
}

void ticket::movie3()
{
   cout<<"\t\t\t_________________________\n"<<endl;
    cout<<"\t\t\t\t\t\t Movie Timings !!!\n"<<endl;
    cout<<"\t\t\t\t\t\t DAY TIME" <<endl;
    cout<<"\t\t\t\t\t\t_________"<<endl;
    t.schedule3();
    cout<<"\t\t\t Enter Choice : ";
    int x;
    cin >> x;

    cout<<"\t\t\t_________________________\n"<<endl;
    if(x==1)
    {
        cout<<"\t\t\t\t Timings : MON     11am"<<endl;
        t.setmovietime("MON 11am");
    }
    else if (x==2)
    {
        cout<<"\t\t\t\t Timings : TUE     2pm"<<endl;
        t.setmovietime("TUE 2pm");
    }
    else if (x==3)
    {
        cout<<"\t\t\t\t Timings : WED     4pm"<<endl;
        t.setmovietime("WED 4pm");
    }
    else if (x==4)
    {
        cout<<"\t\t\t\t Timings : THU     9pm"<<endl;
        t.setmovietime("THU 9pm");
    }
    cout<< "\t\t\t ________________________\n"<<endl;
}

void ticket::movie4()
{
   cout<<"\t\t\t_________________________\n"<<endl;
    cout<<"\t\t\t\t\t\t Movie Timings !!!\n"<<endl;
    cout<<"\t\t\t\t\t\t DAY TIME" <<endl;
    cout<<"\t\t\t\t\t\t_________"<<endl;
    t.schedule4();
    cout<<"\t\t\t Enter Choice : ";
    int x;
    cin >> x;

    cout<<"\t\t\t_________________________\n"<<endl;
    if(x==1)
    {
        cout<<"\t\t\t\t Timings : MON     11am"<<endl;
        t.setmovietime("MON 11am");
    }
    else if (x==2)
    {
        cout<<"\t\t\t\t Timings : TUE     2pm"<<endl;
        t.setmovietime("TUE 2pm");
    }
    else if (x==3)
    {
        cout<<"\t\t\t\t Timings : WED     4pm"<<endl;
        t.setmovietime("WED 4pm");
    }
    else if (x==4)
    {
        cout<<"\t\t\t\t Timings : THU     9pm"<<endl;
        t.setmovietime("THU 9pm");
    }
    cout<< "\t\t\t ________________________\n"<<endl;
}
void ticket::schedule()
{
    m.playing();

    if(m.tim ==1)
    {
        movie1();
    }
    if(m.tim ==2)
    {
        movie2();
    }
    if(m.tim ==3)
    {
        movie3();
    }
    if(m.tim ==4)
    {
        movie4();
    }
}
void ticket::tickettype()
{
    cout<<"\n\n\t\t\t\tEnter your ticket type: Silver to Gold : "<<endl;
    cout<<"\t\t\t\tSilver : Rs.500 \n\t\t\t\t Gold : Rs.1000" <<endl;
    cout<<"\t\t\t\tPress S for Silver \n\t\t\t\t\t Press G for Gold"<<endl;
    cout<<"\t\t\t\tEnter your Choice : ";
        string s;
    cin>>s;
    cout<<"\t\t\t__________________"<<endl;
    if(s=="s")
    {
        cout<<"\t\t\t\tSilver Ticket Selected"<<endl;
        setprice(500.0);
        settickettype("Silver Ticket");
    }
    else if(s=="g"||s=="G")
    {
        cout<<"\t\t\t\tGold Ticket Selected"<<endl;
        setprice(1000.0);
        settickettype("Gold Ticket");
    }
    cout<<"\t\t\t________________________"<<endl<<endl;
}
void ticket::display()
{
    numbert();
    cout<<"\t\t\t\t______________________\n";
    cout<<"\t\t\t\tYour ticket has been successfully generated ! \n";
    cout<<"\t\t\t\t________________________\n\n";

    cout<<"\t\t\t\t BOOKING DETAILS \n";
    cout<<"\t\t\t\t-----------------\n";
    cout<<"\t\t\t\tTicket Id             : "<<getid()<<endl;
    m.movieselected();
    cout<<"\t\t\t\tTicket Type           : "<<gettickettype()<<endl;
    cout<<"\t\t\t\tTotal Tickets Price  : "<<getprice()<<endl;
}
void ticket::ticketd()
{
    m.viewb();
    cout<<"\t\t\t\tTicket ID     : "<<getid()<<endl;
    cout<<"\t\t\t\tTicket Type   : "<<gettickettype()<<endl;
    cout<<"\t\t\t\tTicket Price  : "<<getprice()<<endl;
}
void ticket::pricet()
{
    cout<<"\n\n";
    cout<<"\t\t\t\tTicket type: Silver or Gold: "<<endl;
    cout<<"\t\t\t\tPress S for Silver \n\t\t\t\t Press G for Gold"<<endl;
    cout<<"\t\t\t\tEnter your choice: ";
    string s;

    cin>>s;
    cout<<"\t\t\t_________________________"<<endl;
    if(s=="s"||s=="S")
    {
        cout<<"\t\t\tCost of Silver Lounge Ticket = 500 inc. tax"<<endl;
        setprice(500.0);
        settickettype("Silver");
    }
    else if(s=="g"||s=="G")
    {
        cout<<"\t\t\tCost of Gold Lounge Ticket = 1000 inc. tax"<<endl;
        setprice(100.0);
        settickettype("Gold");
    }
    cout<<"\t\t\t_________________________"<<endl<<endl;
}
void ticket::numbert()
{
    cout<<"\t\t\tNo of tickets to book : ";
    int i;
    cin >> i;
    setnumber(i);
    setseat(availableseats=i);
    if(getprice()==500)
    {
        cout<<"\t\t\tPrice of each Ticket : 500 Inc. tax"<<endl;
        setprice(500*i);
    }
    else if(getprice()==1000)
    {
        cout<<"\t\t\tPrice of each Ticket : 1000 Inc. tax"<<endl;
        setprice(1000*i);
    }
    cout<<"\t\t\tTotal Price of the ticket = "<<getprice()<<"Inc. tax"<<endl;
}
void ticket::availableseat()
{
    cout<< endl <<endl;
    cout<< "\t\t\tAvailable Seats of the Theater"<<endl;
    cout<< "\t\t\tTotal Seats of the Theater : 300"<<endl;
    cout<< "\t\t\tSeats Booked : "<<getnumber()<<endl;
    cout<< "\t\t\tAvailable Seats : "<<getseat()<<endl;
}
void ticket::timings()
{
    cout<<"\t\t\t____________________"<<endl;
    cout<<"\n\t\t\t\t Movies Timings"<<endl;
    cout<<"\n Movies Playing: "<<endl;
    cout<<"\t\t\t1) Movie 1"<<endl;
    cout<<"\t\t\t2) Movie 2"<<endl;
    cout<<"\t\t\t3) Movie 3"<<endl;
    cout<<"\t\t\t4) Movie 4"<<endl;
    int v;
    cout<<"ENTER WHICH MOVIE YOU WANT TO SEE TIMING FOR: "<<endl;
    cin>>v;
    cout<<"\n\t\t\tNow Playing in following timings"<<endl;
    if(v==1)
    {
        t.schedule1();
    }
    else if(v==2)
    {
        t.schedule2();
    }
    else if(v==3)
    {
        t.schedule3();
    }
    else if(v==4)
    {
        t.schedule4();
    }
}
