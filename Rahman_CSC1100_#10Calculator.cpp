/******************************************************************************
Name: Iffat Rahman

*******************************************************************************/
#include <iostream>

using namespace std;

void showchoices(){
    cout << "MENU" << endl;
    cout << "1. Add" << endl;
    cout << "2: Subtract" << endl;
    cout << "3: Multiply" << endl;
    cout << "4: Divide" << endl;
    cout << "5: Exit" << endl;
    
}

float Add(float x, float y){
    return  x +  y;
}

float Subtract(float x, float y){
    return x -  y;
}

float Multiply(float x, float y){
    return  x*y;
}

float Divide(float x, float y){
    return  x/y;
}



int main()
{
    int choice;
    float x, y;
    
    do{
        showchoices();
        cin >> choice;
    
    switch(choice){
        case 1:
        cout << "Enter numbers: ";
        cin >>  x >>  y;
        cout << "Sum is: " << Add(x,y) << endl;
        break;
        
        case 2:
        cout << "Enter numbers: ";
        cin >> x >> y;
        cout << "Difference is: " << Subtract(x,y) << endl;
        break;
        
        case 3:
        cout << "Enter numbers: ";
        cin >> x >> y;
        cout << "Product is: " << Multiply(x,y) << endl;
        break;
        
        case 4:
        cout << "Enter numbers: ";
        cin >> x >> y;
        cout << "Qoutient is: " << Divide(x,y) << endl;
        break;
        
        case 5:
        break;
        
        default:
        cout << "Invalid...";
        
        
        
     }
     
    }while(choice!=5);
        
    

    return 0;
}
