#include <iostream>
#include <conio.h>
using namespace std;

class toolBooth{
	unsigned int totalCars;
    double totalCash;
    
    public : 
    
    toolBooth(){
    	totalCars =  0 ;
    	totalCash = 0.0;
	}
	void payingCar()
    {
        totalCars++;
        totalCash = totalCash + 0.50;
    }

    void nopayCar()
    {
        totalCars++;
    }
    
    void display() const
    {
        cout << "Total Cars = " << totalCars << endl;
        cout << "Total Cash =$ " << totalCash << endl;
    }
};


int main(){
	toolBooth booth;
    char choice;

    cout << "Press P for Paying Car" << endl;
    cout << "Press N for Non-Paying Car" << endl;
    cout << "Press ESC to Exit" << endl;

    do
    {
        choice = getch();

        if (choice == 'P' || choice == 'p')
        {
            booth.payingCar();
        }
        else if (choice == 'N' || choice == 'n')
        {
            booth.nopayCar();
        }

    } while (choice != 27);

    booth.display();
    
    return 0;
}
