#include<iostream>		//library
#include<string>

using namespace std;

int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme makes square star pattern."<<endl; // intro

	int a;		//declaration

	cout<<"Enter the star length of square: ";
	cin>>a;

	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}
