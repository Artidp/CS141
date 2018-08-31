#include<iostream>		//library
#include<string>

using namespace std;

int main (){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This programme finds the maximum of two numbers"<<endl; // intro

	float a,b;  //declaration

	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
 
	if (a>b) 	// first<second
	{
		cout<<"First no is greater than second."<<endl;
	}
		
	else if (a<b)		//second<first
	{
		cout<<"Second no. is greater than first."<<endl;
	}
	else		// both equal
	{
		cout<<"Both numbers are equal."<<endl;
	}
	return 0;

}
	
