//
// Created by dzirt on 10/20/2019.
//

#ifndef DAYSOFYEAR_DAYSOFYEAR_H
#define DAYSOFYEAR_DAYSOFYEAR_H



#include <iostream>
#include <string>
#include <vector>

using namespace std;

//struct



class DaysOfYear{
public:

    //prototype
    void print(int);
    void Act();

    //constructor
  DaysOfYear(string NameMonth,int day){
      string inS=NameMonth;
      int inI=day;
        cout<<endl<<day;
    }
    //

private:
    string inS;
    int inI;

    static const int month=12;
    int Year[month]={31,59,90,120,151,181,212,243,273,304,334,365};
    int DaysInMonth[month]={31,28,31,30,31,30,31,31,30,31,30,31};
    string NameOfMonth[month]={"January","February","March","April","May",
                                     "June","July","August","September","October","November","December"};

};



#endif //DAYSOFYEAR_DAYSOFYEAR_H
