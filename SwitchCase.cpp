#include<iostream>
#include<string>
using namespace std;


int main() {
    char opt;
    cout<<"This is your Timetable";
    cout<<"Please select your day";
    cin>>opt;

    switch(opt)
    {
        case 'm':
        cout<<"Monday Classes\n........";
        cout<<"BBIt 1106:Math for Business\n";
        cout<<"BBIt 1102:Intro to programming\n";
        break;
        case 't':
        cout<<"Tuesday Classes\n........";
        cout<<"BBIt 1102:Intro to programming\n";
        cout<<"BBIt 1106:Intro to ethics\n";
        break;
        case 'w':
        cout<<"Wednesday Classes\n........";
        cout<<"BBIt 1108:Math for Business\n";
        break;
        case 'u':
        cout<<"Thursday Classes\n........";
        cout<<"BBIt 1109:Communication skills\n";
        break;
        case 'f':
        cout<<"Friday Classes\n........";
        cout<<"BBIt 1106:Discrete Maths\n";
        break;

        default:
        cout<<"invalid choice";




        
    }
    
}


