//
// Created by dzirt on 10/20/2019.
//

#include "DaysofYear.h"

void DaysOfYear::print(int f) {
    static int d;
    d = 0;
    if (Year[d] > f) {
        cout <<"The "<<f<<" day is: "<< NameOfMonth[0] << " " << f;
    } else {
        while (Year[d] < f) {
            d +=1 ;
        }
        cout << "The "<<f<<" day is: "<<NameOfMonth[d] << " " << f - Year[d - 1];
    }
}

void DaysOfYear::Act(){
    int i=0;
    int x=0;
   static int catchIt;

    do{
        x=NameOfMonth[i].compare(inS);      //searching the month

        cout<<"arr "<<NameOfMonth[i]<<endl;
        cout<<inS<<endl;
        cout<<'*'<<x<<'*'<<endl;

        if(x==0){
            catchIt=i;                  //note index of the month
            cout<<"\nCatched!!"<<'-'<<catchIt<<endl;
        }else i++;
    }while (x!=0);
    //check amount of days in the founded month
        if(DaysInMonth[catchIt]<=inI){
            cout<<"Checked! Ok.";
        } else{
            cout<<"In "<< NameOfMonth[catchIt]<<" less day that you entered."<<endl;
        }

}