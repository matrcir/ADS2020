//
//  main.cpp
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
#include <list>
#include <fstream>
using namespace std;
int main()
{
    list<int> B;//list initialization
    list<int> A;//^^
    int x;//input a
    int y;
    while (true){
    cin >> x;//getting input form keyboard
    if(x <= 0){//fulfills need to stop after a 0 is inputted
        break;
    }
    A.push_back(x);//push back x into a
    B.push_front(x);//push front
    }
    x = A.front();//x is equal to the front int of A
    y = B.front();//y is equal to the front of B
    A.pop_front();//delete the first element in A
    B.pop_front();//delete the first element in B
    A.push_back(x);//push back x into A
    B.push_back(y);//push back y into B
    list <int>:: const_iterator pos ;
    for ( pos = A.begin() ; pos != A.end(); ++ pos)
    {
        cout << *pos<<" ";//print list A
    }
    cout << endl;
    list <int>:: const_iterator npos ;
    ofstream myfile;//open file
    myfile.open("listB.txt");
    for ( npos = B.begin() ; npos != B.end(); ++ npos)
    {
        myfile << *npos<<" ";//print list B in file
    }
    myfile.close();//close file
    x = A.front();//x is equal to front of A
    y = B.front();//y is equal to front of B
    A.pop_front();//delete fron val of A
    B.pop_front();//delete front of B
    A.push_back(x);//Push x into A back
    B.push_back(y);//push y into B
    cout << endl;//jumo line
    cout << "Modified output;"<<endl;
    list <int>:: const_iterator xpos ;
    for ( xpos = A.begin(); xpos != A.end(); ++xpos)
    {
        if(next(xpos) != A.end()){//print A
            cout<<*xpos << ',';
        }
        else
        {
            cout<<*xpos;
        }
    }
    cout << endl;
    list <int>:: const_iterator ypos ;
    for ( ypos = B.begin(); ypos != B.end(); ++ypos)
    {
        if( next(ypos) != B.end()){//print B
            cout<<*ypos << ',';
        }
        else
        {
            cout<<*ypos;
        }
    }
    cout << endl;
    A.merge(B);//Merge A and B
    list <int>:: const_iterator lpos ;
    for ( lpos = A.begin() ; lpos != A.end(); ++lpos)
    {
        cout << *lpos<<" ";//print merger of A and B
    }

}


