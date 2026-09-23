#include <iostream>
using namespace std;

class circle{
	float radius,x,y ;
	
	public : 
	
	
	circle(){
		x=y=radius=0;
	};
	
	circle(float xAxis,float yAxis,float r){
		x=xAxis;
		y=yAxis;
	    radius=r;
	};


void setValues(){
	do{
		cout << "Enter the Value of Radius = " ;
		cin >> radius;
		if(radius < 0){
		    cout << "Please Enter the Value in Positive Numbers";
		}	
	} while(radius < 0);
	cout << "Enter the Value of X axis = " ;
	cin >> x;
		    
	cout << "Enter the Value of Y axis = " ;
	cin >> y;
			
};

float area(){
	return 3.14159 * radius * radius;
};

float circumference(){
	return 2 * 3.14159 * radius;
};

void print(){
	cout << "The Circle X Axis is : " <<  x << endl;
	cout << "The Circle Y Axis is : " <<  y << endl;
	cout << "The Circle Radius is : " <<  radius << endl;
}
	
};



int main(){
circle c1;   

    c1.setValues();

    cout << "Circle Information" << endl;
    c1.print();

    cout << "Area of Circle is : " << c1.area() << endl;
    cout << "Circumference of Circle is : " << c1.circumference() << endl;
	
	
	return 0;
}
