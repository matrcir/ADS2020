//
//  4.cpp
//  Assignment2
//
//  Created by Luis Alberto Perez on 2/17/20.
//  Copyright © 2020 Luis Alberto Perez. All rights reserved.
//
//If this shows up as copied I got this from myself as I am retaking this course
/*
CH08-320143
a2 p4.cpp
Luis ALberto Perez
l.perezoteiza@jacobs-university.de
*/
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vint;        // a vector of ints. Default size is accepted
    for(int y = 1;31>y;y++){//inserting 1-30
        vint.push_back(y);
    }
    vint.push_back(5);//adding 5 at the end
    reverse(vint.begin(),vint.end());//reverse the vector
    vector <int>:: const_iterator pos ;
    for ( pos = vint.end()-1 ; pos >= vint.begin(); --pos)
    {
        cout << *pos << " ";
    }
    cout << endl;
    replace(vint.begin(),vint.end(),5,129);//replace all 5s with 129
    for( size_t y = 0 ;y < vint.size();y++){
        cout<<vint[y]<<" ";//and print!
    }
}
