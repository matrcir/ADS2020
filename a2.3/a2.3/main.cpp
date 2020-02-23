//
//  3.cpp
//  Assignment2
//
//  Created by Luis Alberto Perez on 2/17/20.
//  Copyright © 2020 Luis Alberto Perez. All rights reserved.
//
//If this shows up as copied I got this from myself as I am retaking this course
/*
CH08-320143
a2 p3.cpp
Luis ALberto Perez
l.perezoteiza@jacobs-university.de
*/
#include <iostream>
#include <deque>
#include <algorithm>
#include <numeric>
using namespace std;
class WindGauge {//creating WindGauge class
    private:
        int period_2;
        deque <int> Windgauge;
    public:
        WindGauge(int period = 12);
        void currentWindSpeed(int speed);
        int highest() const;
        int lowest() const;
        int average() const;
};
WindGauge::WindGauge(int period){
    period_2 = period;
}
void  WindGauge::currentWindSpeed(int speed){
    if(Windgauge.size() >= period_2){
        Windgauge.pop_front();
    }
    Windgauge.push_back(speed);//speed var
}
int WindGauge::highest()const{//return the max elemnt
    return *max_element(Windgauge.begin(),Windgauge.end());
}
int WindGauge::lowest()const{//return the min element
    return *min_element(Windgauge.begin(),Windgauge.end());
}
int WindGauge::average()const{//return avg
    return accumulate(Windgauge.begin(),Windgauge.end(),0)/Windgauge.size();
}
int main(){
    WindGauge A;//create object
    A.currentWindSpeed(15);//insert objects
    A.currentWindSpeed(16);
    A.currentWindSpeed(12);
    A.currentWindSpeed(15);
    A.currentWindSpeed(15);
    cout<<"The highest number is; "<<A.highest()<<endl;//dumping numbers
    cout<<"The lowest number is; "<<A.lowest()<<endl;
    cout<<"The average number is; "<<A.average()<<endl;
    A.currentWindSpeed(16);//insert objects
    A.currentWindSpeed(17);
    A.currentWindSpeed(16);
    A.currentWindSpeed(16);
    A.currentWindSpeed(20);
    A.currentWindSpeed(17);
    A.currentWindSpeed(16);
    A.currentWindSpeed(15);
    A.currentWindSpeed(16);
    A.currentWindSpeed(20);
    cout<<"The highest number is; "<<A.highest()<<endl;//dumping numbers
    cout<<"The lowest number is; "<<A.lowest()<<endl;
    cout<<"The average number is; "<<A.average()<<endl;
}

