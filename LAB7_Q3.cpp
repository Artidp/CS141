/*
3. Write a C++ program to print all even or odd numbers in given range using recursion.
*/



#include <iostream>
using namespace std;

void fun(int c,int b){		//function
	if (c<b){				//recursion condition
		cout<<c<<endl;		//output
		fun(c+2,b);
	}
	
}

int main(){
	cout<<"This programme prints the all even numbers in given range"<<endl;

	int a,b,c;

	cout<<"Enter lower limit: ";		//asks lower limit
	cin>>a;

	cout<<"Enter upper limit: ";		//asks upper limit
	cin>>b;

	if(a%2==1){							//if lower limit is odd
		c=a+1;
	}

	else c=a;

	cout<<"All even numbers between "<<a<<" and " <<b<<" are: "<<endl;

	fun(c,b);


	return 0;
}


