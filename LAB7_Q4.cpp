/*
4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
*/
#include<iostream>
using namespace std;

int fun(int i,int n){
	if(i<=n){	//recursuve condition
		return i+fun(i+1,n);		//output
	}
	else{		//condition to terminate
		return 0;
	}
		
}

int main(){
	cout<<"This programmes print the sum of natural numbers from 1 to n using recursive function"<<endl;

	int i=1,n;
	cout<<"Enter number: ";		
	cin>>n;			//take input

	cout<<"The sum of all natural numbers from 1 to "<<n<< " is "<<fun(i,n)<<endl;		//calls function

	return 0;

}
