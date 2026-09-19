//Q2. Create a class Calculator with two data members num1 and num2. Create separate member functions for addition, subtraction, multiplication, and division. Take values from the user and display the results.

#include <iostream>
using namespace std;

class Calculator{    // In this the class is the keyword so here we create a class with the name of a Student .
int num1,num2;

// Then we create a total of a two data member and this data member are private mean they donot access outside this class. 

public :  // Public to give the Acess to the Data Function so we use this outside the class body

void getInput(){
	cout << "Enter Number1 : ";
	cin >> num1 ; 
	cout << "Enter Number2 : ";
	cin >> num2 ; 	
}
 
 // In this we create a some data function with a int and float type because they return some value and we used void function because that function donot return us a anything

int addition(){
	return num1 + num2;
}
int subtraction(){
	return num1 - num2;
}
int multiplication(){
	return num1 * num2;
}
float division(){
	return (float)num1 / num2;
}

void displayInfo(){
	cout << "Number 1 is :" << num1 <<  endl ;
	cout << "Number 2 is :" << num2 <<  endl ;
	cout << "Addition of Number 1 & Number 2 is  = " << addition() <<  endl ;
	cout << "Subtraction of Number 1 & Number 2 is  = " << subtraction() <<  endl ;
	cout << "Multiplication of Number 1 & Number 2 is  = " << multiplication() <<  endl ;
	cout << "Division of Number 1 & Number 2 is  = " << division() <<  endl ;

}
	
};

int main(){   // Here the main function is start.

Calculator calc;  // Now we use the same class that we create upper and here we declared a object with the name of calc

calc.getInput(); //Here we call the function that we create inside a Calculator Class. same way we call a display info function.
calc.displayInfo();


return 0;	
}
