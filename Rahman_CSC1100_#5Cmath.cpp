/******************************************************************************

Iffat Rahman

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;
    float s=(a+b+c)/2;
    float Area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Area of traingle is: " << Area;
    

    return 0;
}