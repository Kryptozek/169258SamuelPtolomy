#include <iostream>
#include <string>
using namespace std;



void addNumber(float value1,float value2)//A funtion to add 
{
    float sum= value1 +value2;//sum of the parameter variables
    cout<<"The sum of "<< value1 <<" and "<< value2 <<" is "<<sum<<endl; 
}

void subtractNumber(float value1,float value2)//A funtion to add 
{
    float sub= value1 - value2;//difference of the parameter variables
    cout<<"The difference of "<< value1 <<" and "<< value2 <<" is "<<sub<<endl; 
}

void multNumber(float value1,float value2)//A funtion to add 
{
    float mult= value1 * value2;//multiplication of the parameter variables
    cout<<"The multiplication of "<< value1 <<" and "<< value2 <<" is "<<mult<<endl; 
}

void divNumber(float value1,float value2)//A funtion to add 
{
    float div= value1/value2;//sum of the parameter variables
    cout<<"The division of "<< value1 <<" and "<< value2 <<" is "<<div<<endl; 
}

int main(){
    //Function code block
    float num1,num2;
    cout<<"Enter the first number\n";
    cin>>num1;
    cout<<"Enter the second number\n";
    cin>>num2;
    addNumber(num1,num2);
    multNumber(num1,num2);
    subtractNumber(num1,num2);
    divNumber(num1,num2);
    
    return 0;
}