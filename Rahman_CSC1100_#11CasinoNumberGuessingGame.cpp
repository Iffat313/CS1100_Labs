/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>


using namespace std;

void drawline(int num, char symbol){
    for(int i = 0; i<num; i++){
        cout << symbol;
    
}

}

void rules(){
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "      Rules Of The Game" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "      1. Choose any number between 1 to 10" << endl;
    cout << "      2. If you win, you will get 10 times the money back." << endl;
    cout << "      3. If you bet on a wrong number you will loose your betting amount." << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
}



int main()
{
    srand(time(0));
    int dice = rand()%10 + 1;
    cout << dice << endl;
    string y, choice;
    int x,b,g,x2;
    
    cout << "      CASINO GAME      " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "Enter Your Name: ";
    cin >> y;
    cout << "\n" << endl;
    cout << "Enter deposit amount to play the game: ";
    cin >> x;
    
    cout <<"\n";
    
    do{
        rules();
        //dice = rand()%10 + 1;
        cout << "Your current balance is: " << x << endl;
        do{
            cout << y << ",enter the money to bet: ";
            cin >> b;
            
        }while(b>x);


        
        do{
            
            cout << "Guess your number to bet between 1 to 10: ";
            cin >> g;
            
            
        }while(g>10 || g<1);
        
        if(g!=dice){
            x = x - b;
            cout << "Bad luck this time !! you lost " << b << " dollars"<< endl;
            
        }
        else{
            x = x*10;
            cout << "Congrats you won " << x << " dollars!" << endl;
            cout << "Your current balance is: " << x << endl;
        }
        cout << "The winning number is: " << dice << endl;
        cout << y << ", your balance is: " << x << endl;
        
        cout << "do you want to play again?(y/n): ";
        cin >> choice;
        
    }while(choice == "y");
    
    cout << "Thanks for playing the game. Your balance amount is: " << x;
    
    

    return 0;
}




