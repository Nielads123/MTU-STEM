// program to calculate the distance between two objects in 2D-dimensional space
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cout<<"Program to calculate distance between two objects in 2D-dimensional space \n";
	cout<< "The formmular is sqrt(x2 - x1)^2 + (y2 - y1)^2"<<endl;
	
	float x2, x1, y2 ,y1,sum;


	cout<<"Enter a value for x2: "<<endl;
	cin>>x2;
	
	cout<<"Enter a value for x1: "<<endl;
	cin>>x1;
	
	cout<<"Enter a value for y2: "<<endl;
	cin>>y2;
	
	cout<<"Enter a value for y1: "<<endl;
	cin>>y1;
	
	sum =  sqrt((x2 - x1)*(x2 -x1)+ (y2 - y1)*(y2 - y1));
	cout<<"Your answer is: "<<sum<<endl;


	cout<<"Midpointt of both axis"<<endl;
	int X2, X1, Y2 ,Y1;
	cout<<"Enter a value for x2"<<endl;
	cin>>X2;
	
	cout<<"Enter a value for x1"<<endl;
	cin>>X1;
	
	
	float midpointx;
	midpointx = (X2+X1)/2;
	cout<<"Your answer is: "<<midpointx<<endl;
	
	cout<<"Enter a value for y2"<<endl;
	cin>>Y2;
	
	cout<<"Enter a value for y1"<<endl;
	cin>>Y1;
	
	cout<<"Midpoint of x axis"<<endl;
	
	
		float midpointy;
	midpointy = (Y2+Y1/)2;
	cout<<"Your answer is: "<<midpointy<<endl;
	

}
//You didn't calculate the midpoint?
