/*
12. Write a C++ program to find LCM of two numbers using recursion.
*/

#include<iostream>			 
using namespace std;		
void f(int a, int b,int i)	    //defining the function
{
	
	if ((b*i)%a==0)			//exit condition
	{
		cout<<"the lcm of the given numbers is: "<< b*i;
	}
	else
	{
			i++;
		f(a,b,i);		    	//tail end recursion
	}
}
 int main()
 {
 	int a,b;				
 	cout<<"Enter first number: ";     //takes input
 	cin>>a;
 	cout<<"Enter second number: ";    //takes 2nd no
 	cin>>b;
 	
 	f(a,b,1);                 //calls fun
 	return 0;
 }
