/*
2. Write a C++ program to print all natural numbers between 1 to n using recursion.
*/

#include<iostream>
using namespace std;

void fun(int i,int n){
	if(i<=n){	//recursuve condition
		cout<<i<<endl;
		i++;
		fun(i,n);		//output
	}
	else{		//condition to terminate
		return;
	}
		
}

int main(){
	cout<<"This programmes print all natural numbers from 1 to n using recursive function"<<endl;

	int i=1,n;
	cout<<"Enter number: ";		
	cin>>n;			//take input

	fun(i,n);		//calls function

	return 0;

}
