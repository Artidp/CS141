#include<iostream>
using namespace std;

long fun(int m,int n){
	if(n==0){		//condition to terminate
		return 1;
	}

	else{			//recursion condition
		return m*fun(m,n-1);
	}
}

int main(){

	cout<<"This programmes raise the input no to some other input number using recursive function"<<endl;

	int m,n;

	cout<<"Enter base number: ";		//asks base
	cin>>m;

	cout<<"Enter exponent: ";		//asks exponent
	cin>>n;

	long x=fun(m,n);				// stores value
	cout<<m<<" raised to "<<n<< " =" <<x<<endl;		// output
	
	return 0;

}
