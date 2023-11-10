//A program that admits a child to school in regards to age
#include<iostream>
#include<string>
using namespace std;

int main() {
    int age;
   
    cout<<"Please enter age\n";//prompt
    cin>>age;

    if(age>=7)//condition for above seven years
    {
        cout<<"Admit to grade School";
    }
    else if(age>=5 && age<=6)//condition for 5-6 years
    {
        cout<<"Admit to Kindergarten";
    }
     else if(age>=3 && age<=4)//condition for 3-4 years
    {
        cout<<"Admit to Pre School";
    }
     else if(age>=1 && age<=2)//condition for above 1-2 years
    {
        cout<<"Admit to play group";
    }
    else{
        cout<<"Reject";
    }
    return 0;
}