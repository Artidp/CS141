#include<iostream>		//library
#include<string>

using namespace std;

int max(int a,int b) {		//max using int
	int x;
	if (a>b){		// a>b
		x=a;
	}
	else {		//a<b
		x=b;
	}

	return x;
}

void max1(int a,int b, int &h){		//max using void
	if (a>b){		// a>b
		h=a;
	}
	else {		//a<b
		h=b;
	}
	
}

int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme tells the maximum of two numbers"<<endl; 		// intro

	cout<<"Enter two numbers: ";		//asks numbers
	int a,b;		//declaration
	cin>>a>>b;		//takes input

	cout<<"Maximum of two numbers is: ";
	cout<<max(a,b);		// calls max
	cout<<endl;

	int h; 		
	
	
	max1(a,b,h);		//calls max1
	cout<<"Maximum of two numbers is: ";
	cout<<h<<endl;		//displays h as max1 it is void
	cout<<"Why would ans chng by diff typ name of function... -_-"<<endl;

	return 0;
}

