#include <iostream>
#include <string>
#include "DaysofYear.h"

using namespace std;


//prototype
int check(int);


int main() {

    int day;
    string month;
    cout<<"Enter a month:  ";
    cin>>month;
    cout<<"Enter a day of month "<< month<< ':';
    cin>>day;
    DaysOfYear obj(month,check(day));
    obj.Act();

    return 0;
}


int check(int day){ //check input value 0-31
    if(day>0 && day<=31){
        return day;
    }else
        cout<<" Wrong input data. has to be 0-31"<<endl;
    exit(10);
}
