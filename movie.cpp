#pragma once
#include<iostream>
#include "movie.h"

using namespace std;
movie::movie()
{
    this->tim=0;
    this->moviename=" ";
    this->dimension=" ";
    this->direct=" ";
    this->release=" ";
    this->type=" ";
    this->runtime=" ";
}
void movie::setmoviename(string smn)
{
    this->moviename = smn;
}
string movie::getmoviename()
{
    return moviename;
}
void movie::setdimension(string sd)
{
    this->dimension = sd;
}
string movie::getdimension()
{
    return dimension;
}
void movie::setdirect(string di)
{
    this->direct = di;
}
string movie::getdirect()
{
    return direct;
}
void movie::setrelease(string r)
{
    this->release = r;
}
string movie::getrelease()
{
    return release;
}
void movie::setruntime(string rt)
{
    this->runtime = rt;
}
string movie::getruntime()
{
    return runtime;
}
void movie::settype(string ty)
{
    this->type = ty;
}
string movie::gettype()
{
    return type;
}
void movie::playing()
{
    movie m[4];
    int i;
    m[0].setmoviename("MOVIE1");
    m[0].setrelease("1st Jnauary 2022");
    m[0].setruntime("2hrs");
    m[0].settype("Action");
    m[0].setdirect("Chris");
    m[0].setdimension("3D");

    m[1].setmoviename("MOVIE2");
    m[1].setrelease("1st Jnauary 2022");
    m[1].setruntime("2hrs");
    m[1].settype("Action");
    m[1].setdirect("Chris");
    m[1].setdimension("3D");

    m[2].setmoviename("MOVIE3");
    m[2].setrelease("1st Jnauary 2022");
    m[2].setruntime("2hrs");
    m[2].settype("Action");
    m[2].setdirect("Chris");
    m[2].setdimension("3D");

    m[3].setmoviename("MOVIE4");
    m[3].setrelease("1st Jnauary 2022");
    m[3].setruntime("2hrs");
    m[3].settype("Action");
    m[3].setdirect("Chris");
    m[3].setdimension("3D");

    cout<<"\t\t Select Movie "<<endl;
    for(int i = 0; i < 4; i++)
    {
        cout<<"________________________________"<<endl;
        cout<<"\n\t\t\tMOVIE NO : "<<i+1<<endl;
        cout<<"________________________________"<<endl;
        cout<<"Movie Title     : "<<m[i].getmoviename()<<endl;
        cout<<"Release Date    : "<<m[i].getrelease()<<endl;
        cout<<"Runtime         : "<<m[i].getruntime()<<endl;
        cout<<"Directed by     : "<<m[i].getdirect()<<endl;
        cout<<"Genre           : "<<m[i].gettype()<<endl;
        cout<<"Screen          : "<<m[i].getdimension()<<endl;
    }
    cout<<"\t\t\tPress 1 for Movie no 1\n\t\t\tPress 2 for Movie no 2\n\t\t\tPress 3 for Movie no 3\n\t\t\tPress 4 for Movie no 4\n\t\t\t"<<endl;
    cout<<"\t\t\tEnter your choice : ";
    cin>>i;
    if(i==1)
    {
    m[0].setmoviename("MOVIE1");
    m[0].setrelease("1st Jnauary 2022");
    m[0].setruntime("2hrs");
    m[0].settype("Action");
    m[0].setdirect("Chris");
    m[0].setdimension("3D");
    tim=1;
    setmoviename("MOVIE1");
    setrelease("1st Jnauary 2022");
    setruntime("2hrs");
    settype("Action");
    setdirect("Chris");
    setdimension("3D");
    }
    if(i==2)
    {
      m[1].setmoviename("MOVIE2");
    m[1].setrelease("1st Jnauary 2022");
    m[1].setruntime("2hrs");
    m[1].settype("Action");
    m[1].setdirect("Chris");
    m[1].setdimension("3D");
    tim=2;
    setmoviename("MOVIE2");
    setrelease("1st Jnauary 2022");
    setruntime("2hrs");
    settype("Action");
    setdirect("Chris");
    setdimension("3D");
    }
    if(i==3)
    {
      m[2].setmoviename("MOVIE3");
    m[2].setrelease("1st Jnauary 2022");
    m[2].setruntime("2hrs");
    m[2].settype("Action");
    m[2].setdirect("Chris");
    m[2].setdimension("3D");
    tim=3;
    setmoviename("MOVIE3");
    setrelease("1st Jnauary 2022");
    setruntime("2hrs");
    settype("Action");
    setdirect("Chris");
    setdimension("3D");
    }
    if(i==4)
    {
    m[3].setmoviename("MOVIE4");
    m[3].setrelease("1st Jnauary 2022");
    m[3].setruntime("2hrs");
    m[3].settype("Action");
    m[3].setdirect("Chris");
    m[3].setdimension("3D");
    tim=4;
    setmoviename("MOVIE4");
    setrelease("1st Jnauary 2022");
    setruntime("2hrs");
    settype("Action");
    setdirect("Chris");
    setdimension("3D");
    }
        cout<<"\t\t\t________________________________"<<endl;
        cout<<"\n\t\t\tSELECTED MOVIE IS : "<<i<<endl;
        cout<<"________________________________"<<endl;
        cout<<"Movie Title     : "<<m[i-1].getmoviename()<<endl;
        cout<<"Release Date    : "<<m[i-1].getrelease()<<endl;
        cout<<"Runtime         : "<<m[i-1].getruntime()<<endl;
        cout<<"Directed by     : "<<m[i-1].getdirect()<<endl;
        cout<<"Genre           : "<<m[i-1].gettype()<<endl;
        cout<<"Screen          : "<<m[i-1].getdimension()<<endl;
    }

    void movie::movieselected()
    {
        cout<<" \t\t\t\tMovie Title    : " << getmoviename() <<endl;
        cout<<" \t\t\t\tRunTime        : " << getruntime() <<endl;
    }

    void movie::viewb()
    {
        cout<<"\t\t Your Booking \n";
        cout<<"Movie Details            :"<<endl;
        cout<<"\t\t Movie Title         : "<<getmoviename()<<endl;
        cout<<"\t\t Release Date        : "<<getrelease()<<endl;
        cout<<"\t\t Runtime             : "<<getruntime()<<endl;
        cout<<"\t\t Directed By         : "<<getdirect()<<endl;
        cout<<"\t\t Genre               : "<<gettype()<<endl;
        cout<<"\t\t Screen Dimensions   : "<<getdimension()<<endl;
    }
    void movie::addmovie()
    {
        string m, n, o, p, q, r;
        cout<<"Enter Movie Name : ";
        getline(cin, n);
        setmoviename(n);
        cout<<"Enter Release Date : ";
        getline(cin, m);
        setrelease(m);
        cout<<"Enter Runtime : ";
        getline(cin, o);
        setruntime(o);
        cout<<"Enter Type : ";
        getline(cin, p);
        settype(p);
        cout<<"Enter Director's Name : ";
        getline(cin, q);
        setdirect(q);
        cout<<"Enter Dimension : ";
        getline(cin, r);
        setdimension(r);
        cout<<"\t\t\t MOVIE HAS BEEN SUCCESSFULLY ADDED! ";
        cout<<"Movie Title     : "<<getmoviename()<<endl;
        cout<<"Release Date    : "<<getrelease()<<endl;
        cout<<"Runtime         : "<<getruntime()<<endl;
        cout<<"Directed by     : "<<getdirect()<<endl;
        cout<<"Genre           : "<<gettype()<<endl;
        cout<<"Screen          : "<<getdimension()<<endl;

    }
    void movie::lists()
    {
        movie q[4];
    q[0].setmoviename("MOVIE1");
    q[0].setrelease("1st Jnauary 2022");
    q[0].setruntime("2hrs");
    q[0].settype("Action");
    q[0].setdirect("Chris");
    q[0].setdimension("3D");

    q[1].setmoviename("MOVIE1");
    q[1].setrelease("1st Jnauary 2022");
    q[1].setruntime("2hrs");
    q[1].settype("Action");
    q[1].setdirect("Chris");
    q[1].setdimension("3D");

    q[2].setmoviename("MOVIE1");
    q[2].setrelease("1st Jnauary 2022");
    q[2].setruntime("2hrs");
    q[2].settype("Action");
    q[2].setdirect("Chris");
    q[2].setdimension("3D");

    q[3].setmoviename("MOVIE1");
    q[3].setrelease("1st Jnauary 2022");
    q[3].setruntime("2hrs");
    q[3].settype("Action");
    q[3].setdirect("Chris");
    q[3].setdimension("3D");
    cout<<"MOVIE PLAYING : "<<endl;
    cout<<"Movies list\t\t Movie no 1\t\tMovie no 2\t\t Movie no 3\t\t Movie no 4"<<endl;
    cout<<"______________________________________________________________________"<<endl;
    cout<<"Name :\t\t\movie 1\t\t\movie 2\t\t\movie 3\t\t\movie 4"<<endl;
    cout<<"Release :\t\t\movie 1\t\t\movie 2\t\t\movie 3\t\t\movie 4"<<endl;
    cout<<"Runtime :\t\t\movie 1\t\t\movie 2\t\t\movie 3\t\t\movie 4"<<endl;
    cout<<"Dimension :\t\t\movie 1\t\t\movie 2\t\t\movie 3\t\t\movie 4"<<endl;
    cout<<"Type :\t\t\movie 1\t\t\movie 2\t\t\movie 3\t\t\movie 4"<<endl;
    cout<<"Director :\t\t\movie 1\t\t\movie 2\t\t\movie 3\t\t\movie 4"<<endl;

    }
    void movie::menu()
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
void movie::memberop()
{
    mem.MemberShips();
}








