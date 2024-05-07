/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

NAME: IFFAT RAHMAN

*******************************************************************************/
#include <iostream>

using namespace std;
  
int main()
{
    char character;
    cout << "Enter any character: ";
    cin >> character;
    
    
    if(character>= 65 && character<=90){
        cout << "character is a capital letter";
    }
    else if(character>=97 && character<=122){
        cout << "charcater is a lower case";    
    }
    else if(character>=48 && character<=57){
        cout << "character is a digit";
    }
    else if((character>0 && character<=47)||(character>=58 && character<=64)||(character>=91 && character<=96)||(character>=123 &&character<=127)){
        cout << "charcater is a special character";
    }
    
    
    
    

    return 0;
}


