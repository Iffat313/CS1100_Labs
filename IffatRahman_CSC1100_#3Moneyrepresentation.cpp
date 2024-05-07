/******************************************************************************
Iffat Rahman
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int A,n1,n5,n10,n20,n50,n100;
    cout << "Enter amount: ";
    cin >> A;
    
    n100 = A / 100;
    A = A % 100; 
    cout << "$100: " << n100 << endl;
    
    
    //A or amount- how much left, reminder operator is used to see hwo much we have left from amount
    //n or note to determine how much we used and divide is used to see how many of THAT note we used
    
    
    n50 = A / 50; //with this new "aoumt or A", were going to see how many notes we should use for the 50 note
    A = A % 50; //after caluculating how many notes we used for the 50 one, were going yo how much is left from the actual user amount 
    cout << "$50: " << n50 << endl;
    
    n20 = A / 20;
    A = A % 20;
    cout << "$20: " << n20 << endl;
    
    n10 = A / 10;
    A = A % 10;
    cout << "$10: " << n10 << endl;
    
    n5 = A / 5;
    A = A % 5;
    cout << "$5: " << n5 << endl;
    
    n1 = A / 1;
    A = A % 1;
    cout << "$1: " << n1 << endl;
    

    return 0;
}