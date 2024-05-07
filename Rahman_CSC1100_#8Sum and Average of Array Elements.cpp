/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
//#include <cmath>
//Iffat Rahman
using namespace std;

int main()
{
    int x,y;
    float avg;
    int z = 0;
    cout<<"Enter the number of elements you want to insert: ";
    cin >> x;
    cout << "Enter the element in ascending order" << endl;
    int num[x];
    for(int i = 0; i<x; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> num[i];
    }
    
    for(int i = 0; i<x; i++){
        z = z + num[i];
        

    }
    
    cout << "\n";
    cout << "The sum of the Array is: " << z << endl;
    avg = z/x;
    cout << "The average of Array is: " << avg; 
    return 0;
}