/*
9. Write a C++ program to find factorial of any number using recursion.
*/

#include <iostream>
using namespace std;

int fun(int a){	//function
	if (a>1){			// recursion condition
		int factorial=a*fun(a-1);		// recursive part
		return factorial;
	}
	
}

int main(){
	cout<<"This programme finds the factorial of input number using recursion"<<endl;

	int a;

	cout<<"Enter your number: ";		//asks number
	cin>>a;

	cout<<"The factorial of input numbers is: ";	
	cout<<fun(a)<<endl;		//calls fun and gives output
	

	return 0;
}

