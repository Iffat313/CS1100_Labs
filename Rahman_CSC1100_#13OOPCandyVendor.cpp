/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
Iffat Rahman

*******************************************************************************/
#include <iostream>

using namespace std;

class cashRegister{
    private:
        int cashOnHand;
    public:
        cashRegister(){
            cashOnHand = 500;
        }
        
        cashRegister(int usercash){
            cashOnHand = usercash;
        }
        
        int getCurrentBalance(){
            return cashOnHand;
        }
        
        void acceptAmount(int customeramount){
            cashOnHand = cashOnHand + customeramount;
        }
    
};


class dispenserType{
    private:
        int numberOfItems, cost;
    public:
        dispenserType(){
            numberOfItems = 50;
            cost = 50;
        }
        
        dispenserType(int usernumber, int usercost){
            numberOfItems = usernumber;
            cost = usercost;
        }
        
        int getNoOfItems(){
            return numberOfItems;
        }
        
        int getCost(){
            return cost;
        }
        
        void makeSale(){
            numberOfItems = numberOfItems-1;
        }
};


void showSelection(){
    cout << "*** Welcome to Candy Shop ***" << endl;
    cout << "To select an item, enter" << endl;
    cout << "1 for candy" << endl; //one candy is 50
    cout << "2 for chips" << endl; // 100 chips, 50 in cost
    cout << "3 for Gum" << endl;  // 75, 45 is the cost
    cout << "4 for cookies" << endl; // 50, 85 in the cost
    cout << "5 to exit" << endl;
}


void sellProduct(dispenserType& product, cashRegister& pCounter){
    int deposit;
    int deposit2;
    if(product.getNoOfItems()>0){
        cout << "please deposit: " << product.getCost() << endl;
        cin >> deposit;
        if(deposit<product.getCost()){
            cout << "please deposit another " << product.getCost()-deposit<< endl;
            cin >> deposit2;
            deposit = deposit + deposit2;
        }
        if(deposit>=product.getCost()){
            pCounter.acceptAmount(deposit);
            product.makeSale();
            cout << "collect your snake" << endl;
        }
        else{
            cout << "The amount is not enough" << endl;
            
        }
        

    }
    else{
        cout << "sold out" << endl;
    }
    
}






int main()
{
    
    int choice;
    cashRegister counter;
    dispenserType candy(1,50);
    dispenserType Gum(100, 50);
    dispenserType chips(75, 45);
    dispenserType cookies(50, 85);
    showSelection();
    cin >> choice;
    while(choice!=5){
        switch(choice){
            case 1:
               sellProduct(candy,counter);
               
                break;
            case 2:
                sellProduct(chips,counter);
                
                break;
            case 3:
                sellProduct(Gum,counter);
                
                break;
            case 4:
                sellProduct(cookies, counter);
            
                break;
            default:
                cout << "sorry, please enter a valid entry" << endl;
            
        }
        showSelection();
        cin >> choice;
    
   
            
    }
    

    return 0;
}





