#include <iostream>
using namespace std;
int main(){
    int num1=10,num2=30;
    bool var1=true,var2=false;
    cout<<"Sum of the two numbers: "<<num1+num2<<endl;
    cout<<"Difference of the two numbers: "<<num2-num1<<endl;
    cout<<"Product of the two numbers: "<<num1*num2<<endl;
    cout<<"Division of the two numbers: "<<(float)(num2/num1)<<endl;
    cout<<"Modulus of two numbers: "<<num2%num1<<endl;
    cout<<"Increment of num1 by 1 "<<++num1<<endl;
    cout<<"Decrement of num1 by 1 "<<--num1<<endl;
    cout<<num1<<"greater than"<<num2<<"="<<(bool)(num1>num2)<<endl;
    cout<<num1<<"less than"<<num2<<"="<<(bool)(num1<num2)<<endl;
    cout<<num1<<"equal to"<<num2<<"="<<(bool)(num1==num2)<<endl;
    cout<<num1<<"not equal to"<<num2<<"="<<(bool)(num1!=num2)<<endl;
    cout<<var1<<"&&"<<var2<<"="<<(bool)(var1&&var2)<<endl;
    cout<<var1<<"||"<<var2<<"="<<(bool)(var1||var2)<<endl;
    cout<<var1<<"!"<<var2<<"="<<(bool)(var1!=var2)<<endl;

    return 0;

}