//A program that admits a child to school in regards to age
#include<iostream>
#include<string>
using namespace std;

int main() {
    int age;
    cout<<"Please enter age\n";
    cin>>age;
    string message=(age>=4?"Admited":"Declined");//short hand if condition
    cout<<message;
    return 0;
}