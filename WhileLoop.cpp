//A program that admits a child to school in regards to age
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string food;
    char resp;
    
    cout<<"Please enter a food you like: ";
    cin>>food;
    cout<<"Do you wish to continue(Y/N)? ";
    cin>>resp;

    while (resp=='Y'){
        cout<<"Please enter a food you like: ";
        cin>>food;

        cout<<"Do you wish to continue(Y/N)? ";
        cin>>resp;
    
    }
return 0;
}