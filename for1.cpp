#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num, sum=0;//initialize variables

    for(int num = 20;num<=25; num+=1){//condition for numbers between 20 and 25 while add 1 every iteration
        sum+=num;//add every number to the sum

    }

   cout<<sum;//output the sum

    return 0;
}