// program to calculate surface area of a triangle, rectangle and square

#include <iostream>
using namespace std;
int main(){
	float enter;
	cout<<"program to calculate surface area of a triangle, rectangle and square"<<endl;
	cout<<"press 1 to calculate the surface area of a triangle"<<endl;
	cout<<"press 2 to calculate the surface area of a square"<<endl;
	cout<<"press 3 to calculate the surface area of a rectangle"<<endl;
	cout<<"Enter the surface area you want to calculate first: "<<endl;
	cin>>enter;
	if(enter == 1){
		cout<<"You are calculating the surface area of a triangle"<<endl;
		float base,height;
		float sum;
		cout<<"The formular for the surface area of a triangle is: 1/2bh"<<endl;
		cout<<"Enter a number for the base: "<<endl;
		cin>>base;
		
		cout<<"Enter a number for the height: "<<endl;
		cin>>height;
		sum = 0.5*base*height;
		cout<<"your answer is: "<<sum<<endl;
	}
	
	else if(enter ==2){
		cout<<"You are calculating the surface area of a square"<<endl;
			cout<<"The formular for the surface area of a square is: S^2"<<endl;
			float distance,sum;
			cout<<"Enter a number for the distance: "<<endl;
			cin>>distance;
			
			sum = distance* distance;
			cout<<"your answer is: "<<sum<<endl;
	}

	else if(enter == 3){
		cout<<"You are calculating the surface area of a rectangle"<<endl;
		cout<<"The formular for the surface area of a rectangle is: length * breadth(l*b)"<<endl;
		float length, breadth,sum;
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
