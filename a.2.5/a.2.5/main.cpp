//
//  5.cpp
//  Assignment2
//
//  Created by Luis Alberto Perez on 2/17/20.
//  Copyright © 2020 Luis Alberto Perez. All rights reserved.
//
/*
 //If this shows up as copied I got this from myself as I am retaking this course
CH08-320143
a2 p5.cpp
Luis ALberto Perez
l.perezoteiza@jacobs-university.de
*/
#include <iostream>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time (0)));//initialize rand num gen
    set<int> sint;
    while(sint.size()!=6){//6 random numbers
        int x = (rand()%49)+1;
        sint.insert(x);
    }
    set<int>::iterator pos ;
    for ( pos = sint.begin(); pos != sint.end(); ++pos)
    {
        cout << *pos << " ";
    }
}
