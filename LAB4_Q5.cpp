#include<iostream>		//include library
#include<cmath>
using namespace std;

int main()		//main function
{

	cout<<"Welcome to KESHAV'S programming."<<endl;		//welcome
	cout<<"This programme calculates compound interest and amount by taking P,T and R."<<endl;		//intro

	float a,b,c,d,e,f,g;		//declaration

	cout<<"Enter principle: ";		//asks P
	cin>>a;		//takes P

	cout<<"Enter rate of interest per interval: ";		//asks R
	cin>>b;		//takes R

	cout<<"Enter number of intervals (in case interest is given annually enter no of years): ";		//asks T
	cin>>c;		//takes T

	d=1+b/100; 		//calculations
	e=pow(d, c);
	f=a*e;
	g=f-a;

	cout<<"The given principle will amount to "<<f<<"."<<endl; 	// output A
	cout<<"Compound interest as per given conditions= "<<g<<"."<<endl;		//output CI

return 0;
}
