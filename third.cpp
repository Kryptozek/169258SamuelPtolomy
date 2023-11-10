#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num, sum=0;//initialize variables
    

    do
    {
        cout<<"Enter a number: ";//ask the user for a number
        cin>>num;
        sum+=num;//add the number to sum
    
    } while (num !=0);//runs as long as not it not 0
    cout<<sum;//output the sum
    
    
return 0;
}