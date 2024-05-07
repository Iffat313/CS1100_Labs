/******************************************************************************

    //int num[2];
    //num[0] = {1};
    //cout << num[0];

*******************************************************************************/
#include <iostream>
//Iffat Rahman

using namespace std;

int main()
{
    int x;
    int a, b, temp = 0;
    cout << "Enter the number of elements you want to insert: ";
    cin >> x;
    int num[x];
    for(int i = 0; i<x; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> num[i];
        
    }
    temp = num[0];
    num[0] = num[x-1];
    num[x-1] = temp;
    
    for(int i = 0; i<x; i++){
        cout << num[i] << " ";
        
    }
    
    
    

    
    

    

    return 0;
}