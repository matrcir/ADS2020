//
//  7.cpp
//  Assignment2
//
//  Created by Luis Alberto Perez on 2/17/20.
//  Copyright © 2020 Luis Alberto Perez. All rights reserved.
//
/*
//If this shows up as copied I got this from myself as I am retaking this course
CH08-320143
a2 p7.cpp
Luis Alberto Perez
l.perezoteiza@jacobs-university.de
*/
#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
#include <fstream>
using namespace std;
int main(){
    map<string,string>A;
    string line;
    ifstream data;
    string in;
    data.open("data.txt");//open text file well be checking the names from
    int x = 0;
    int r = 0;
    string p;
    while(getline(data,line))
    {
        r = x % 2;
        if(r == 0){
            A[line];
            p = line;
        }else
        {
            A.at(p) = line;
        }
        x++;
    }
    while(true){
        getline(cin,in);
        auto it = A.find(in);
        if (it != A.end()){
            std::cout << it->first<<" =>"<< it->second << '\n';
        }
    else {
        cout << "Name not found!"<< endl;
        }
    }
}
