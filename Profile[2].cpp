//This is an Iostream test
#include <iostream>
#include<string>
using namespace std;

int main() {
//simmple data input using cin>>
    string fullname;
    string firstname,lastName,meal,movie,course,unit;
    cout<<"Enter your First Name: "<<endl;//prompt the user
    getline(cin,firstname);//output the result
    cout<<fullname<<endl;//display output
    cout<<"Enter your Last Name: "<<endl;//prompt the user
    getline(cin,lastName);//output the result
    cout<<lastName<<endl;//display output
    cout<<"Enter your Full Name: "<<endl;//prompt the user
    getline(cin,fullname);//output the result
    cout<<fullname;//display output
    cout<<"Enter your Favorite meal: "<<endl;//prompt the user
    getline(cin,meal);//output the result
    cout<<meal<<endl;//display output
    cout<<"Enter your Favorite movie : "<<endl;//prompt the user
    getline(cin,movie);//output the result
    cout<<movie<<endl;//display output
    cout<<"Enter your Course: "<<endl;//prompt the user
    getline(cin,course);//output the result
    cout<<course<<endl;//display output
    cout<<"Enter the unit : "<<endl;//prompt the user
    getline(cin,unit);//output the result
    cout<<unit<<endl;//display output

    
    return 0;
}