//Q3. Create a class Patient with data members patientName, age, and disease. Take patient information from the user and create a member function displayRecord() to display the complete patient record.

#include <iostream>
using namespace std;

class Patient{    // In this the class is the keyword so here we create a class with the name of a Student .
string patientName,disease;
int age;

// Then we create a total of a two data member and this data member are private mean they donot access outside this class. 

public :  // Public to give the Acess to the Data Function so we use this outside the class body

void getInput(){
	cout << "Enter Your Name : ";
	getline(cin,patientName) ; 
	cout << "Enter Your Disease : ";
	getline(cin,disease) ;	
	cout << "Enter Your Age : ";
	cin >> age ; 	
}
 


void displayRecord(){
	cout << "PatientName is :" << patientName <<  endl ;
	cout << "Age is :" << age <<  endl ;
	cout << "Disease is :" << disease <<  endl ;	

}
	
};

int main(){   // Here the main function is start.

Patient pat1;  // Now we use the same class that we create upper and here we declared a object with the name of calc

pat1.getInput(); //Here we call the function that we create inside a Calculator Class. same way we call a display info function.
pat1.displayRecord();


return 0;	
}
