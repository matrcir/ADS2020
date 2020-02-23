//
//  2.cpp
//  Assignment2
//
//  Created by Luis Alberto Perez on 2/17/20.
//  Copyright © 2020 Luis Alberto Perez. All rights reserved.
//
//If this shows up as copied I got this from myself as I am retaking this course
/*
CH08-320143
a2 p2.cpp
Luis ALberto Perez
l.perezoteiza@jacobs-university.de
*/
#include <algorithm>
#include <iostream>
#include <deque>
#include <fstream>
using namespace std;
int main() // initialize main
{
    deque <float> A;// create deque A
    float x; // create an empty float x
    while (true){//whie to fulfill stated problem
    cin >> x;// input into x
    if(x == 0){//if x is = 0 stop
        break;
        }
    if(x>0){
        A.push_back(x);//if x is bigger then 0 then push back into A
    }
    if(x<0){
        A.push_front(x);//if x is smaller then 0 then push front into A
    }
    }
    deque <float>:: const_iterator pos ;
    for ( pos = A.begin() ; pos != A.end(); ++ pos)
    {
            cout<<*pos << ' ';//print out
    }
    cout<<endl;
    deque <float>:: const_iterator mpos ;
    for ( mpos = A.begin() ; mpos != A.end(); ++ mpos)
    {
        if( *mpos < 0 && *next(mpos) > 0){
            A.insert(mpos + 1 ,0);
        }
    }
    cout<<endl;
    deque <float>:: const_iterator xpos ;
    for ( xpos = A.begin() ; xpos != A.end(); ++ xpos)
    {
        if( xpos != A.end()-1){
            cout<<*xpos << ',';//now separated by commas
        }
        else
        {
            cout<<*xpos;
        }
    }
    cout<<endl;

}

