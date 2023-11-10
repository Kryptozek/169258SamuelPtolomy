//A program that admits a child to school in regards to age
#include<iostream>
#include<string>
using namespace std;

int main() {
    int age;
    string interest;
    cout<<"Please enter age\n";
    cin>>age;
    cout<<"Please enter interest\n";
    cin>>interest;
    
    if(age>=4 && age<=10)
    {
        if(interest=="soccer"){
            cout<<"Assigned to soccer playgroup\n";
        }
        else if(interest=="art"){
            cout<<"Assigned to art playgroup\n";
        }else{
            cout<<"Assigned to other playgroups\n";
        }
    }
    else{
        cout<<"Admission Unsuccessful.Age is invalid";
    }
    return 0;
}