#include<iostream>		//library
#include<string>

using namespace std;

int main (){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This programme finds HCF of two numbers."<<endl; // intro

	long  a,b,i;  //declaration
	cout<<"Enter two positive integer whose HCF you want to know: "; 		// takes input	
	cin>>a>>b;

	for (i=a;i>=0;i=i--){		//condition			
		if (a%i==0){		//factor of 1st no will satisfy
			if (b%i==0){			//factor of 2nd no. will satisfy	
				cout<<"The HCF of " <<a<< " and " <<b<< " is " <<i<< "."<<endl;	//output
				break ;			// breaks loop
			}
		}
	
	i--;
	}


 
	return 0;
}
