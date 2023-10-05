//Simple Iostream Test Program
#include <iostream>
#include<string>
using namespace std;

int main() {

    string number;
    cout<<"Enter number";
    cin>>number;
    cout<<"You entered "+ number << endl;
    cerr<<"THis is a sample eeror message";
    
    return 0;
}