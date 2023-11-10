//a program to calculate the area of a rectangle,circle and triangle
#include <iostream>
using namespace std;

int main() 
{
    int choice;
    int chicken=300,fries=100,rice=150;
    //output the menu on the screen
    cout << "Menu:" << endl;
    cout << "1. Chicken" << endl;
    cout << "2. French Fries" << endl;
    cout << "3. Rice and Stew" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;//take choice fom the user

    switch (choice){
        case 1://choice for the area of a circle
        cout<<"You have chosen Chicken pay: "<<chicken<<endl;
        
        break;

        case 2://choice for the area of a rectangle
         cout<<"You have chosen French Fries pay: "<<fries<<endl;
        break;

        case 3://choice for area of a rectangle
         cout<<"You have chosen Rice and Stew pay: "<<rice<<endl;
        break;

        case 4://choice for quit
        cout << "Goodbye!" << endl;

    }
    return 0;
}
        

