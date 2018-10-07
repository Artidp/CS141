/*
6. Write a C++ program to find reverse of any number using recursion.
*/

#include <iostream>
using namespace std;

void fun(int a){			//function
	if (a>0){
		cout<<a%10;			//output
		fun(a/10);			//recursion 			
		
	}
	else{					//terminating condition
		return ;
	}
}

int main(){
	cout<<"This programme prints the reverse of input number"<<endl;

	int a;

	cout<<"Enter your number: ";		//asks number
	cin>>a;

	cout<<"The reverse of input numbers is: ";	
	fun(a);		//calls fun
	
	cout<<endl;
	return 0;
}

