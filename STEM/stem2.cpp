// program to calculate object in 2D dimensional space
#include <iostream>      //we are calculating the distance between two objects in space, i prefer that to "calculate object in 2D space
#include <cmath>                                       // (x1,y1) is position of object one
using namespace std;                                         // (x2,y2) is position of object two
int main(){                                       // the formula d = sqrt(x2-x1)^2  + (y2 - y1)^2 is for finding the distance between (x1,y1) and (X2,y2) using the Pythagorean theorem a2 + b2 = c2 
	cout<<"program to calculate object in 2D-dimensional space \n";  // c = sqrt(a2 + b2) where c is distance and a is the position of object one, b is the position of object 2
	cout<< "The formmular is sqrt(x2 - x1)^2 + (y2 - y1)^2"<<endl;
	
	int x2, x1, y2, y1, sum;                 // the task is a more sensitive one so a data type of double or float is preferred as we can get more accurate results


	cout<<"Enter a value for x2"<<endl;   //your style very much works but what about either asking for (x1, y1) either at once or progressively like you did there
	cin>>x2;                              // since (x1, y1) defines an object one and (x2, y2) defines the other object in 2d space
	
	cout<<"Enter a value for x1"<<endl;
	cin>>x1;
	
	cout<<"Enter a value for y2"<<endl;
	cin>>y2;
	
	cout<<"Enter a value for y1"<<endl;
	cin>>y1;
	
	sum =  sqrt(x2 - x1)*(x2 -x1)+ (y2 - y1)*(y2 - y1);
	cout<<"Your answer is: "<<sum<<endl;
}

// overall the code is wonderful and very reliable,
//pls find a way to add your teammates on this project so it would be a team project in the name of all you four rahter than only in your name 
//I'd also appreciate finding the midpoint of the distance between two objects.
// After finding the distance, then the exact midpoint between the distance, this is useful for centering objects in 2d space and many more you can read up on it
