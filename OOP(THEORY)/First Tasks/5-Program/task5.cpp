//Q4. Create a class BankAccount with data members accountNo, accountHolder, and balance. Create member functions deposit(), withdraw(), and displayBalance(). Take the required values from the user and perform the operations using an object.

#include <iostream>
using namespace std;

class Employee{
string name;
int employeeID;
float basicSalary;
public :
void getInput();
float calculateAllowance();
float calculateNetSalary();
void displayInfo();
};

void Employee::getInput() {
cout << "Enter Employee Name: ";
cin >> name;
cout << "Enter Employee ID: ";
cin >> employeeID;
cout << "Enter Basic Salary: ";
cin >> basicSalary;
};

float Employee::calculateAllowance() {
return basicSalary * 0.20;
};


float Employee::calculateNetSalary() {
return basicSalary + calculateAllowance();
};

void Employee::displayInfo() {
cout << "Employee Name: " << name << endl;
cout << "Employee ID: " << employeeID << endl;
cout << "Basic Salary: " << basicSalary << endl;
cout << "Allowance: " << calculateAllowance() << endl;
cout << "Net Salary: " << calculateNetSalary() << endl;
};


int main(){
  Employee emp;

    emp.getInput();
    emp.displayInfo();
}
