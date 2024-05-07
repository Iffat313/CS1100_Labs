/******************************************************************************

 Name: Iffat Rahman

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream MyFile("FIRST.TXT");
    
    MyFile << "Carry umberella and overcoat when it rains";
    
    MyFile.close();
    
    //now lets read from this file and put the lower case vowel word
    
    //string MyText;
    
    
    ifstream MyReadFile("FIRST.TXT");
    ofstream MyFile2("SECOND.TXT");
    
    char words[30];
    
    
    while(!MyReadFile.eof()){
        
        MyReadFile >> words;
        
        if(words[0]=='a'||words[0]=='e'||words[0]=='i'||words[0]=='o'||words[0]=='u'){
            MyFile2 << words << " ";
        }
        //MyFile2 << MyText; //instead of outputting the text from the file to the concocle I output this text im reading into the secodn txt file I have created
        
    }
    
    MyReadFile.close();
    MyFile2.close();

    return 0;
}