#include<iostream>		//library
using namespace std;		

int main()		//main function
{
	cout<<"Welcome to KESHAV'S programming."<<endl;		//welcome
	cout<<"This programme converts length of centimeter unit to metre and kilometer."<<endl;		//intro
	
	float x,y,z;		//declaration
	cout<<"Enter the length (cm): ";		//asks input
	cin>>x;		//takes input

	y=x/100;		//converts to m
	z=y/1000;		//converts to km

	cout <<x<<" centimeters is equivalent to " <<y<< " metres and " <<z<< " kilometres.";		//output

return 0;
}
