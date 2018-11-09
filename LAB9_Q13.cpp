/*
13.Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method.
*/

#include<iostream>				//include library
using namespace std;			
int main()
{
	int a[10];					//declare array 

	for(int i=0;i<10;i++){				//take input
		a[i]=i+1;
	}
	
	cout<<"Normal index method"<<endl;
	for(int i=0;i<10;i++)		//print by normal index method
	{
		cout<<a[i]<<endl;
	}
	
	cout<<"Pointer method"<<endl;
	int *b;
	b = a;						//declare pointer to array
	for(int i=0;i<10;i++)		
	{
		cout<<*(b+i)<<endl;		//print by pointer nethod
	}

	return 0;
}
