#include<iostream>
#include<string>
using namespace std;


int main()
{
    int num = 20, sum=0;

    do
    {
        sum+=num;//add the number to sum
        num +=1;//add one to the number
    } while (num <= 25);//condition for 25 and under
    cout<<sum;//output the sum
    
    
return 0;
}