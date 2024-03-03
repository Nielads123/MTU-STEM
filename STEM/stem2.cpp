// program to calculate object in 2D dimensional space
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cout<<"program to calculate object in 2D dimensional space \n";
	cout<< "The formmular is sqrt(x2 - x1)^2 + (y2 - y1)^2"<<endl;
	
	float x2, x1, y2 ,y1,sum;


	cout<<"Enter a value for x2"<<endl;
	cin>>x2;
	
	cout<<"Enter a value for x1"<<endl;
	cin>>x1;
	
	cout<<"Enter a value for y2"<<endl;
	cin>>y2;
	
	cout<<"Enter a value for y1"<<endl;
	cin>>y1;
	
	sum =  sqrt(x2 - x1)*(x2 -x1)+ (y2 - y1)*(y2 - y1);
	cout<<"Your answer is: "<<sum<<endl;


	cout<<"Midpoint of both y and x axis"<<endl;
	
	float midpoint;
	
	midpoint = (x2 + x1) / 2;
	
	cout<< "The midpoint for x axis is: "<<midpoint<<endl;
	
	
	midpoint = (y2 + y1) / 2;
	
	cout<< "The midpoint for y axis is: "<<midpoint<<endl;
	
	

}
