/******************************************************************************
Iffat Rahman

*******************************************************************************/
#include <iostream>

using namespace std;
const int INCHES_PER_FOOT = 12;
const double CENTIMETERS_PER_INCH = 2.54;

int main()
{
    int feet, inches;
    cout << "Enter two integers, one for feet and one for inches: ";
    
    //cout << "The numbers you entered are " << feet << "for feet and " << inches << "for inches";
    cin >> feet >> inches;
    cout << "\n";
    cout << "The numbers you entered are " << feet << " for feet and " << inches << " for inches" << endl;
    int totalinches = INCHES_PER_FOOT*feet+inches;
    double centimeter = CENTIMETERS_PER_INCH*totalinches;
    cout << "The total number of inches: " << totalinches << endl;
    cout << "The number of centimeters: " << centimeter;
    
    

    return 0;
}

