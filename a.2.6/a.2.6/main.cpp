//
//  6.cpp
//  Assignment2
//
//  Created by Luis Alberto Perez on 2/17/20.
//  Copyright © 2020 Luis Alberto Perez. All rights reserved.
//
/*
//If this shows up as copied I got this from myself as I am retaking this course
CH08-320143
a2 p6.cpp
Luis Alberto Perez
l.perezoteiza@jacobs-university.de
*/
#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
class Access {
    private:
        set <unsigned int> access;
    public:
        void activate(unsigned int code);//activate code
        void deactivate(unsigned int code);//deactivate code
        bool isactive(unsigned int code) const;//check if active
};
void Access::activate(unsigned int code){//erases code from
    access.insert(code);
}
void Access::deactivate(unsigned int code){//erases code from actvity
    access.erase(code);
}
bool Access::isactive(unsigned int code)const{//checks if a code is active
    for ( auto pos = access.begin() ; pos != access.end(); ++pos)
    {
        if(*pos == code){
            return true;
        }
    }
    return false;
}
int main()
{
    Access A;//create object
    int x;
    A.activate(1234);//activating codes
    A.activate(9999);
    A.activate(9876);
    while (true){//asking for codes
        cout <<"Please insert a code; "<< endl;
        cin>>x;
        if (A.isactive(x)==true){
            cout<<"The door has been opened"<<endl;
            break;
            }
        else{
            cout<<"The door hasnt been opened"<<endl;
            }
        }
    A.activate(1111);//activating codes
    A.deactivate(x);
    A.deactivate(9999);
    while (true){//asking for code
        cout <<"Please insert a code; "<< endl;
        cin>>x;
        if (A.isactive(x)==true){
            cout<<"The door has been opened"<<endl;
            break;
            }
        else{
            cout<<"The door hasnt been opened"<<endl;
            }
        }

}

