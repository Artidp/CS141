#include<iostream>		//library
#include<string>

using namespace std;

int min(int a,int b) {		//min using int
	int x;
	if (a>b){		// a>b
		x=b;
	}
	else {		//a<b
		x=a;
	}

	return x;
}

void min1(int a,int b, int &h){		//min using void
	if (a>b){		// a>b
		h=b;
	}
	else {		//a<b
		h=a;
	}
	
}

int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme tells the minimum of two numbers"<<endl; 		// intro

	cout<<"Enter two numbers: ";		//asks numbers
	int a,b;		//declaration
	cin>>a>>b;		//takes input

	cout<<"Minimum of two numbers is: ";
	cout<<min(a,b);		// calls max
	cout<<endl;

	int h; 		
	
	
	min1(a,b,h);		//calls max1
	cout<<"Minimum of two numbers is: ";
	cout<<h<<endl;		//displays h as max1 it is void
	cout<<"Why would ans chng by diff typ name of function... -_-"<<endl;

	return 0;
}

