#include <iostream>
using namespace std;
int main(){
    
    char myChar;
    int myInt=45;
    float myFloat=4.567;
    int myNum;
    myChar=static_cast<char>(myInt);
    myNum=static_cast<int>(myFloat);
    
    cout<<myChar<<endl;
    cout<<myNum<<endl;

    return 0;

}