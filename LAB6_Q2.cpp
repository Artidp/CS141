#include<iostream>		//library
#include<string>

using namespace std;

int sum(int a,int b) {		//sum using int
	int x=a+b;
	return x;
}

void sum1(int a,int b, int &s1){		//sum using void
	s1=a+b;
}

int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme adds two numbers and the second part stores the sum of two and add the next one."<<endl; 		// intro

	cout<<"Enter two numbers: ";		//asks numbers
	int a,b,y;		//declaration
	cin>>a>>b;		//takes input

	y=sum(a,b);		// calls sum
	cout<<y<<endl;

	int s1; 		

	sum1(a,b,s1);		//calls sum1
	
	cout<<s1<<endl;		//displays sum as it is void
	

	return 0;
}

