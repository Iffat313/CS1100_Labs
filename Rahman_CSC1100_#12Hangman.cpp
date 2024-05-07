/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
functions outside of main, pass by refernce: alytering one or more of the variables from the parameter
*******************************************************************************/
#include <iostream>


using namespace std;
int replaceLetter(char guess, string country, string &unknown){ //wether it be a for or while loop the loop will countiue untils its oden
    int matches = 0;
    for(int i = 0; i<unknown.length(); i++){

        if(guess == country[i]){
            unknown[i] = guess;
            matches++;
            
        }
        
    }
    return matches;
    
        
}

int main()
{
    srand(time(NULL));
    
   
    int max = 5;
    char guess;
    string unknown;
    
    
    
    string words[10] ={"japan","turkey","nepal","malaysia","philippines","australia","america","ethiopia","oman","indonesia"};
    int n = rand()%10;
    string country = words[n];
    //cout << country;
    
    unknown = country;
    for(int i = 0; i<country.length();i++){
        unknown[i] = '*';
        
    }

    
    
    
    

    cout << "Welcome to hangman.. Guess a country" << endl;
    cout << endl;
    
    cout << "Each letter is represented by a string" << endl;
    cout << endl;
    
    cout << "You have to type only one letetr in one try" << endl;
    cout << endl;
    
    cout << "You have 5 tries to try and guess a word" << endl;
    cout << "----------------------------------------" << endl;
    
    
    
    while(max>0){
        
        cout << unknown << endl;
        cout << "guess a letter: ";
        cin >> guess;
        cout << endl;
        
        if(replaceLetter(guess, country, unknown) == 0){ //bad 
            cout << "Whoops, bad letter" << endl;
            max--;
            
        }
        
        //else{
            //cout << "good job" << endl;
        //}
        
        //cout << "You have " << max << " guesses left" << endl;
        
        else if(unknown == country){
            cout << "congrats" << endl;
            break;
        }
        
        if(unknown!=country and max==0){
            cout << "you couldn't guess it" << endl;
            break;
        }
        
                
        else{
            cout << "good job" << endl;
        }
        cout << "You have " << max << " guesses left" << endl;
        
        
    }
    cout << "goodbye";
        

    
    
    


    return 0;
}

