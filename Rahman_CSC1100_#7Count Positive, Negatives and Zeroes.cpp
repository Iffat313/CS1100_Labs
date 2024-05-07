/******************************************************************************

Iffat Rahman

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int x,positive,negative,zero;
    string q;
    
    positive = 0;
    negative = 0;
    zero = 0;
    
    do{
        cout << "Enter number: ";
        cin >> x;
        if(x>0){
            positive = positive + 1;
        }
        else if(x<0){
            negative = negative + 1;
        }
        else if(x==0){
            zero = zero + 1;
        }
        cout << "Do you want to countinue(y/n)?: ";
        cin >> q;
        
        
    }
    while(q == "Y" || q == "y");


    
    cout << "Positive Number: " << positive << endl;
    cout << "Negative Number: " << negative << endl;
    cout << "Zero Number: " << zero << endl;
    
    
    
    
    

    return 0;
}