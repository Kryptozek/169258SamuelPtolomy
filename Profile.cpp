//This is an Iostream test
#include <iostream>
#include<string>
using namespace std;

int main() {

    string name;
    string city;
    int age;
    string email;
    cout<<"Enter a name";
    cin>>name;
    cout<<"Enter your age";
    cin>>age;
    cout<<"Enter city"<< endl;
    cin>>city;
    cout<<"Enter Email address";
    cin>>email;
    
    cout<<".......Profile......"<<endl;
    cout<<name<<endl;
     cout<<age<<endl;
    cout<<email<<endl;
    
    
    cerr<<"THis is a sample error message";
    
    return 0;
}