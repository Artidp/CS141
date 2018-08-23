#include<iostream>		//include library
using namespace std;

int main()		//main function
{

	cout<<"Welcome to KESHAV'S programming."<<endl;		//welcome
	cout<<"This programme finds the angle of triangle if other two angles are known."<<endl;		//intro

	float x,y,z,w;		//declaration

	cout<<"Enter the first known angle (in degree): ";			//asks user
	cin>>x;			//take input	
	cout<<"Enter the second known angle (in degree): ";			//asks user
	cin>>y;			//take input	

	z=x+y;
	w=180-z;		//finds angle

	cout<<"Since the sum of angles of triangle is 180°,"<<endl;		//explanation
	cout<<"Third angle= 180°-(first angle+second angle)"<<endl;
	cout<<"Which implies, third angle= 180°-"<<y<< "°"<<endl;
	cout<<"Thus, third angle= "<< w<<"°."<<endl;				//output

return 0;
}
	
