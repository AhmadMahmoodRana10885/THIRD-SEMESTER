#include <iostream>
using namespace std;

//Q1.  Create a C++ class Student with data members name, rollNo, and marks. Take input from the user and display the student's complete information using member functions.

class Student{          // In this the class is the keyword so here we create a class with the name of a Student .
string name ; 
int rollNo,marks;

// Then we create a total of a three data member and this data member are private mean they donot access outside this class. 

public :  // Public to give the Acess to the Data Function so we use this outside the class body

void getInput(){
	cout << "Enter Your Name : " ;
	getline(cin,name);
	cout << "Enter Your Roll No : ";
	cin >> rollNo ; 
	cout << "Enter Your Marks : ";
	cin >> marks ; 	
}

// Then we create a one function with the name of a getInput and with a void data type because i donot return us a anything. Same this concept used in a Display Info function the only difference btw two of them is that one is used to take a value from the user and the second is used to show that value to the user.

void displayInfo(){
	cout << "My Name is :" << name <<  endl ;
	cout << "My Roll No is :" << rollNo <<  endl ;
	cout << "My Marks is :" << marks <<  endl ;
}
	
};

int main(){   // Here the main function is start.

Student std1;  // Now we use the same class that we create upper and here we declared a object with the name of std1

std1.getInput(); //Here we call the function that we create inside a Student Class. same way we call a display info function.
std1.displayInfo();


return 0;	
}
