#include <iostream>
#include <string>
using namespace std;

class bank{
    private:
    string accounttype;
     int pin;
     double balance;
     int minimumbalance;
    public:
    bank(int pin, string accounttype, double balance,int minimumbalance){
        this->pin = pin;
        this->balance = balance;
        this->accounttype = accounttype;
        this->minimumbalance = minimumbalance;
    }
    bool login(int inputpin){
        return inputpin == pin;
    }
    void setbalance(double balance){
      this-> balance = balance;
    }
    double getbalance(){
        return balance;
    }
    void setpin(int pin){
     this->pin = pin;
    }
    int getpin(){
        return pin;
    }
    void setaccounttype(string accounttype){
        this->accounttype = accounttype;
    }
    string getaccounttype(){
        return accounttype;
    }
    void setminimumbalance(int minimumbalance){
        this->minimumbalance = minimumbalance;

    }
    int getminimumbalance(){
        return minimumbalance;
    }

    void deposit(double amount){
        balance += amount;
    }
    void withdraw(double amount){
        if(amount > balance){
            cout<<"insufficient fund"<<endl;
        }
        else if(balance - amount < minimumbalance){
            cout<<"insufficient funds."<<endl;
        }
        
        else{
            balance -= amount;
        }
        
    }

};

int main(){
    bool isloggedin = false;
    int attempts = 0;
    
    bank b1(2016, "savings", 1000,50);

 while(attempts < 3 && isloggedin == false){
    
       cout<< "Enter your pin: ";
       int input;
       cin>> input;
       if(b1.login(input)){
        isloggedin = true;
           cout<< "Welcome to your account!"<< endl;}
    
       else{attempts++;
       cout<< "Wrong pin. Please try again. You have " << (3 - attempts) << " attempts left." << endl;
     }
    }
    if(!isloggedin){
        cout<< "You have exceeded the maximum number of attempts. Your account is locked." << endl;
    }
    else{
        bool running = true;
        while(running){
            cout<< "Please select an option: " << endl;
            cout<< "1. Check balance" << endl;
            cout<< "2. Deposit money" << endl;
            cout<< "3. Withdraw money" << endl;
            cout<< "4. Exit" << endl;
            int choice;
            cin>> choice;
            switch(choice){
                case 1:
                cout<<"your balance is:  "<< b1.getbalance() << endl;
                break;
                case 2:
                cout<< "Enter the amount to deposit: ";
                double amount;
                cin>>amount;
                b1.deposit(amount);

                cout<<" Deposit succesful "<<"your new balance is: "<<b1.getbalance()<<endl;
                break;
                case 3:
               
                cout<<"Ener the amount to withdraw; ";
                cin>>amount;
                b1.withdraw(amount);
                cout<<"your new balance is: "<<b1.getbalance()<<endl;
                break;
                case 4:
                cout<<"Thank you for using our ATM. Goodbye!"<<endl;
                running = false;
                break;
            }
        }
}
 return 0;
}


