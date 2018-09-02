#include<iostream>		//library
#include<string>

using namespace std;

int main (){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This programme finds no. of digits in any given number."<<endl; // intro

	long  a,i;  //declaration
	long n =0;
	cout<<"Enter any large positive integer whose no of digits you want to know: "; 		// takes input	
	cin>>a;



	for (i=a;i>=1;i=i/10){		//condition
		n++;	
		if (i/10<=1){
			cout<<a<<" has "<<n<<" digits."<<endl;
		
		}
	}
	
	
	
	return 0;
 
	
}
	
