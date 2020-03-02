//program on time

#include<iostream>

using namespace std;

class time1
{
        int hours,minute,second;

        public:
                time1();
                void sethrs(int);  //sethour
                int gethrs();    //gethour
                void setmin(int); //setminute
                int getmin();  //getminute
                void setsec(int);
                int getsec();
                int convert1(int);  //convet into 12
                ~time1();
};
