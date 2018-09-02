#include<iostream>		//library
#include<string>

using namespace std;

int main (){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This programme prints natural numbers infinitely."<<endl; // intro

	int  a=1;  //declaration

	cout<<"Enter any large positive integer to start backward counting: "; 		// takes input	
	cin>>a;



	while (a>=0){		//condition
		cout<<a<<endl;		//output	
		a--;		//increment
	}
	return 0;
 
	
}
	
