// program to calculate the surface area of a triangle, rectangle, or square
                                                          // very wonderful code but again use the more precise data type
#include <iostream>                                      //use the double and float data type it gives more precise results. 
using namespace std;                                    //integers round up numbers to whole numbers and the decimal digits are also way more important here
int main(){                                            // also learn about the iomanip headerfile and setprecision() function, it should not necessarily be implemented here, but it's something good to know about.
	int enter;
	cout<<"program to calculate the surface area of a triangle, rectangle and square"<<endl;
	cout<<"press 1 to calculate the surface area of a triangle"<<endl;
	cout<<"press 2 to calculate the surface area of a square"<<endl;
	cout<<"press 3 to calculate the surface area of a rectangle"<<endl;
	cout<<"Enter the surface area you want to calculate first: "<<endl;
	cin>>enter;
	if(enter == 1){
		cout<<"You are calculating the surface area of a triangle"<<endl;
		int base, height;
		int sum;
		cout<<"The formula for the surface area of a triangle is: 1/2bh"<<endl;
		cout<<"Enter a number for the base: "<<endl;
		cin>>base;
		
		cout<<"Enter a number for the height: "<<endl;
		cin>>height;
		sum = 0.5*base*height;
		cout<<"your answer is: "<<sum<<endl;
	}
	
	else if(enter ==2){
		cout<<"You are calculating the surface area of a square"<<endl;
			cout<<"The formula for the surface area of a square is: S^2"<<endl;
			int distance, sum;
			cout<<"Enter a number for the distance: "<<endl;
			cin>>distance;
			
			sum = distance* distance;
			cout<<"your answer is: "<<sum<<endl;
	}

	else if(enter == 3){
		cout<<"You are calculating the surface area of a rectangle"<<endl;
		cout<<"The formula for the surface area of a rectangle is: length * breadth(l*b)"<<endl;
		int length, breadth, sum;
		cout<<"Enter a number for the length: "<<endl;
		cin>>length;
		
		cout<<"Enter a value for the breadth: ";
		cin>>breadth;
		
		sum= length * breadth;
		cout<<"your answer is: "<<sum<<endl;
	}
	
	else{
		cout<<"Pick a number"<<endl;
	}

return 0;
}
