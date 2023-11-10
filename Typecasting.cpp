#include <iostream>
using namespace std;
int main(){
    double myNum=15.5;
    int myNewNum=int(myNum);
    int myNewNum2=(int)myNum;
    cout<<myNewNum<<endl;
    cout<<myNewNum2<<endl;

    char myChar;
    int myInt=45;
    float myFloat=4.567;
    int myNum2;
    myChar=static_cast<char>(myInt);
    myNum2=static_cast<int>(myFloat);
    cout<<myChar<<endl;
    cout<<myNum2<<endl;

    return 0;

}