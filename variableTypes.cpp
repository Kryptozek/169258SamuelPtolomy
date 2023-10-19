#include <iostream>
#include <string>
using namespace std;

//Global variable declaration and initialization
int globalVar = 30;
const int age = 25;//constant global variable.Value will not change

void addAndDisplay(int value1,int value2)//A funtion to add and display
{
    int sum= value1 +value2;//sum of the parameter variables
    cout<<"The sum of "<< value1 <<"and"<< value2 <<"is "<<sum<<endl; 
}

void myFunction(){
    //Function code block
    //Local variables
    int localVar1 =10,localVar2 = 12;
    string localString1="Local String 1", localString2 ="Local String 2";
    cout<<"Local Variable 1 =\n"<<localVar1;

}

int main(){
    //Function code block
    globalVar = 50;
    cout<<"Global variable value =\n"<<globalVar;
    cout<<"Global variable value =\n"<<age;
    //cout<<""<< localVar1;
    myFunction();
    addAndDisplay(2,3); 
    return 0;
}

