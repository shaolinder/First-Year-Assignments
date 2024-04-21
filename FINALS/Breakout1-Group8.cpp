#include <iostream>
using namespace std;

int x, y;

void inputXCoordinate()
{
	cout<<"Enter x coordinate: ";
		cin>>x;
	}
	
void inputYCoordinate()
{
	cout<<"Enter y coordinate: ";
		cin>>y;
	}	
	
void getLocation()
{
	if(x==0 && y==0)
		cout<<"The point lies at the ORIGIN";
		
	else if(x>0 && y>0)
		cout<<"The point lies at QUADRANT 1";
		
	else if(x<0 && y>0)
		cout<<"The point lies at QUADRANT 2";
		
	else if(x<0 && y<0)
		cout<<"The point lies at QUADRANT 3";	
		
	else if(x>0 && y<0)
		cout<<"The point lies at QUADRANT 4";
		
	else if(x==0 && (y>0 || y<0))
		cout<<"The point lies at the Y-Axis";
		
	else if((x>0 || x<0) && y==0)
		cout<<"The point lies at the X-Axis";

}

void displayLocation()
{
	cout<<"";
		getLocation();
	}

int main()
{
	inputXCoordinate();
	inputYCoordinate();
	displayLocation();
	
	return 0;
}

