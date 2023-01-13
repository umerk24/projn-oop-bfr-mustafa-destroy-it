#pragma once
#include <iostream>
#include"movie.h"
#include"Ticket.h"
#include"cutomer.h"
#include"time.h"
#include"MemberShip.h"

using namespace std;

int main()
{
        movie m;
        ticket t;
        customer co;
        member me;
        if(me.admin()==false){return 0;}
        int x;
        int lop=1;
        do{
            m.menu();

            cout<<"Enter your choice: ";
            cin>>x;
            switch(x)
            {
                case 1:
                {
                    cout<<"Movies List: "<<endl;
                    t.schedule();
                    t.tickettype();
                    t.display();

                    break;
                }
                case 2:
                {
                    t.ticketd();
                    break;
                }
                case 3:
                {
                    t.pricet();
                    break;
                }
                case 4:
                {
                    t.availableseat();
                    break;
                }
                case 5:
                {
                    t.timings();
                    break;
                }
                case 6:
                {
                    cin.ignore();
                    m.addmovie();
                    break;
                }
                case 7:
                {
                    m.lists();
                    break;
                }
                case 8:
                {
                    m.memberop();
                    cout<<"\n\n";
                    cin.ignore();
                    co.insert();
                    co.oldcustomer();
                    co.display();

                    break;
                }
                case 9:
                {
                    return 0;
                }
                default:
                    break;
            }
            cout<<"\n\n\t\t\t\t Press 1 to  go to MAIN MENU"<< endl;
            cout<<"\t\t\t\t\t Press 0 to EXIT" ;
            cin >> lop;
            }
            while(lop == 1);

    system("pause");
    return 0;
}
