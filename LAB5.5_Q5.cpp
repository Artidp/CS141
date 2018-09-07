#include<iostream>		//library
#include<string>

using namespace std;


int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme makes triangle with increasing base."<<endl; // intro

	int a;	//declaration

	cout<<"Enter the star length of triangle: ";		//asks size
	cin>>a;
	// height of triangle
	for(int i=0;i<a;i++){
		//increasing stars
		int k=0;
		while(k<=i){
			cout<<"*";
			k++;
		}
	
	cout<<endl;
	}
	return 0;
}

