#include<iostream>		//library
#include<string>

using namespace std;

int main (){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This programme adds all odd integers from 0 to input."<<endl; // intro

	int  a,i;  //declaration
	int sum=0;

	cout<<"Enter any large positive integer till where you want to add all odds: "; 		// takes input	
	cin>>a;



	for (i=1;i<=a;i++){		//condition
		if (i%2==1){
			sum = sum + i;
			cout<<"Sum till "<<i<<" s "<<sum<< endl;
		
		}
	}
	
	cout<<"Total sum="<<sum<<endl;

	
	return 0;
 
	
}
	
