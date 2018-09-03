#include<iostream>		//library
#include<string>

using namespace std;

int main (){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This programme finds LCM of two numbers."<<endl; // intro

	int  a,b;  //declaration
	int i=a;

	cout<<"Enter two positive integer whose LCM you want to know: "; 		// takes input	
	cin>>a>>b;

	for (i=a;i<=a*b;++i){
		if (i%a==0){
			if (i%b==0){
				cout<<"LCM is "<<i<<endl;
				break;			// breaks loop	
			}
		}
	
	}


 
	return 0;
}
