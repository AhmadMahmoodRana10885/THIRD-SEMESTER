//Q4. Create a class BankAccount with data members accountNo, accountHolder, and balance. Create member functions deposit(), withdraw(), and displayBalance(). Take the required values from the user and perform the operations using an object.

#include <iostream>
using namespace std;

class BankAccount{
	int accountNo;
	string accountHolder;
	float balance = 0.0;
	
	public :
		
	void getInput(){
	cout << "Enter Account Holder Name: ";
    getline(cin,accountHolder);
	cout << "Enter Your Account No : ";
	cin >> accountNo; 
    cout << "Enter Initial Balance: ";
    cin >> balance;	
    };
    
    void deposit(){
    	float amount ; 
    	cout << "Enter Your Amount to Deposit : ";
		cin >> amount ; 
		balance = balance + amount ; 		
		cout << "Amount Deposit Successfully" <<  endl;
		
	};
	
	void withdraw() {
        float amount;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Amount Withdraw Successfully." << endl;
        }
        else {
            cout << "Insufficient Balance." << endl;
        }
    };
    
    void displayRecord(){
	cout << "Your Account No is :" << accountNo <<  endl ;
	cout << "Account Holder Name is :" << accountHolder <<  endl ;
	cout << "Your Balance is :" << balance <<  endl ;	

}
	
};

int main(){
	BankAccount account;

    account.getInput();
    account.deposit();
    account.withdraw();
    account.displayRecord();
}
