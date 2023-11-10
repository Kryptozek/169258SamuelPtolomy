#include<iostream>
#include<string>
using namespace std;

int main()
{
   string password="sam"; //initialize variables
   int counter=0;
   string pass;

   cout<<"Enter your password\n";
   cin>>pass;


    while (pass!= password && counter!=3){//loop through values
        cout<<"Invalid password";
        cout<<"Enter your password\n";
        cin>>pass;
        counter++;
    
    }
    cout << "You are out of tries"<<endl;//display on screen
return 0;
}