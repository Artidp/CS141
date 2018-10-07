/*
8. Write a C++ program to find sum of digits of a given number using recursion
*/

#include <iostream>
using namespace std;

int fun(int a){	//function
	if (a>0){			// recursion condition
		int sum=(a%10)+fun(a/10);		// recursive part
		return sum;
	}
	else{					//terminating condition
		return 0;
	}
}

int main(){
	cout<<"This programme prints the sum of input number using recursion"<<endl;

	int a;

	cout<<"Enter your number: ";		//asks number
	cin>>a;

	cout<<"The sum of input numbers is: ";	
	cout<<fun(a)<<endl;		//calls fun and gives output
	

	return 0;
}

