/******************************************************************************
NAME: Iffat Rahman
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int p,r,t,i;
    cout << "Enter the principal: ";
    cin >> p;
    
    cout << "Enter Rate: ";
    cin >> r;
    
    cout << "Enter time: ";
    cin >> t;
    
    i = (p*r*t)/100;
    
    cout << "Simple interest is: " << i;
    

    

    return 0;
}