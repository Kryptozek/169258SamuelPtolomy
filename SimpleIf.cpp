//A program that admits a child to school in regards to age
#include <iostream>
#include<string>
using namespace std;

int main() {
    int age;
    cout<<"Please enter age\n";
    cin>>age;
    if (age>=4){
        cout<<"Admit to School";
    }
    else{
        cout<<"Declined!Minimum age not reached";
    }
    return 0;
}