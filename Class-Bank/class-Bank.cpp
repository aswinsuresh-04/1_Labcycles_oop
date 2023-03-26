#include<iostream>
#include<string>
using namespace std;

// Class for bank account
class BankAccount {
private:
    string cust_name;
    int acc_no;
    string acc_type;
    float balance;

public:
    // Function to add a new account
    void addAccount() {
        cout<<"Enter customer name: ";
        cin>>cust_name;
        cout<<"Enter account number: ";
        cin>>acc_no;
        cout<<"Enter account type s(savings) or c(current): ";
        cin>>acc_type;
        cout<<"Enter opening balance: ";
        cin>>balance;
    }
        
    // Function to withdraw money
    void withdraw() {
        float amount;
        cout<<"Enter the amount to withdraw: ";
        cin>>amount;
        if(balance-amount>=500) {
            balance -= amount;
            cout<<"Amount withdrawn successfully"<<endl;
        }
        else {
            cout<<"Insufficient balance"<<endl;
        }
    }
        
    // Function to deposit money
    void deposit() {
        float amount;
        cout<<"Enter the amount to deposit: ";
        cin>>amount;
        balance += amount;
        cout<<"Amount deposited successfully"<<endl;
    }
        
    // Function to display balance
    void displayBalance() {
        cout<<"Balance in the account: "<<balance<<endl;
    }
        
    // Function to display account statement
    void displayAccountStatement() {
        cout<<"Customer name: "<<cust_name<<endl;
        cout<<"Account number: "<<acc_no<<endl;
        cout<<"Account type: "<<acc_type<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    int ch = 0; // Initialize choice to 0
    BankAccount customer;
	
    while(ch!=6){
        cout<<"\n\n1. Open an account. \n2. Deposit. \n3. Withdraw. \n4. Check Balance. \n5. Account Statement. \n6. Exit."<<endl<<endl;
		
        cout<<"Enter choice: ";
        cin>>ch;
		
        switch(ch){
            case 1:{
                customer.addAccount();
                break;
            }
            case 2:{
                customer.deposit();
                break;
            }
            case 3:{
                customer.withdraw();
                break;
            }
            case 4:{
                customer.displayBalance(); // Call the correct function
                break;
            }
            case 5:{
                customer.displayAccountStatement(); // Call the correct function
                break;
            }
            case 6:{
                cout<<"Thank you";
                exit(0);
                break;
            }
            default:{
                cout<<"Invalid choice. Try again."<<endl;
            }
        }
    }
    return(0);
}
