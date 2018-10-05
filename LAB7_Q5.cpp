/*
5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.
*/



#include <iostream>
using namespace std;

int fun(int c,int b){			//function
	if (c<b){					//recursion 			
		return c+fun(c+2,b);
	}
	else{					//terminating condition
		return 0;
	}
}

int main(){
	cout<<"This programme prints the sum of all even numbers in given range"<<endl;

	int a,b,c;

	cout<<"Enter lower limit: ";		//asks lower limit
	cin>>a;

	cout<<"Enter upper limit: ";		//asks upper limit
	cin>>b;
	
	if(a%2==1){					//if lower limit is odd
		c=a+1;
	}

	else c=a;				//if lower limit is even

	cout<<"Sum of all even numbers between "<<a<<" and " <<b<<" is "<<fun(c,b)<<"."<<endl;


	return 0;
}


