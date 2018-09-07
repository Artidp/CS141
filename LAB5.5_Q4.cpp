#include<iostream>		//library
#include<string>

using namespace std;


int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme makes triangle with decreasing base."<<endl; // intro

	int a;	//declaration

	cout<<"Enter the star length of triangle: ";		//asks size
	cin>>a;
	
	for(int i=0;i<a;i++){		//print n rows
		int k=0;		
           	 
		while(k<(a-i)){
			//print some stars
			cout<<"*";
		k++;
			
		}
	cout<<endl;
	}
	return 0;
}

