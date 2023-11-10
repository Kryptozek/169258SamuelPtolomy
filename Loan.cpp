//A program that admits a child to school in regards to age
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int age,customer,balance;
    string crb;
    //prompt for the customer information
    cout<<"Please enter age\n";//prompt
    cin>>age;
    cout<<"Please enter balance\n";//prompt
    cin>>balance;
    cout<<"Please enter CRB status\n";//prompt
    cin>>crb;
    cout<<"Please enter account age in months\n";//prompt
    cin>>customer;

    if(age>=22)//condition for above seven years
    {
        if(balance>50000)
    {
        if(crb=="good"){
            if(customer>6){
                cout<<"Customer is qualified for a loan";
            }
        }
    }
    else{
        cout<<"Customer is unqualified";
    }
    return 0;
}
}