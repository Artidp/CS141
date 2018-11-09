/*
Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
*/


#include<iostream>		//including library
using namespace std;	

void fun(char *x, char b[],int n){

	for(int i=0;i<n;i++)
	{
		if(b[0]==*(x+i))	//If the required element exists cout the given statement
		{
		cout<<"Yes, it exist at "<<i+1<<"position."<<endl;
		}
		else{ cout<<"False"<<endl;}
	}
}

int main()
{
	int n;
	cout<<"Enter size of array: "<<endl;
	cin>>n;
	char arr[n],brr[1];

	cout<<"Enter both the strings: ";
	cin>>arr>>brr;

	fun(arr,brr,n);

	return 0;
}
