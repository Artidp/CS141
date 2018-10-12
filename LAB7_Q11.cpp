/*
11. Write a C++ program to find GCD (HCF) of two numbers using recursion.
*/

#include<iostream>				
using namespace std;			
void f(int n,int k,int i)		//defining function
{
	if ((n%i)==0 && (k%i)==0 )            //end condition
	{
		cout<<"the HCF of the given numbers is : "<< i;
	}
	else
	{
		i--;
		f(n,k,i);				//tail end recursion
	}
	
}
int main()
{
	int n,k,i;
	cout<<"please enter the first number: ";            //takes 1st no
	cin>>n;
	cout<<"please enter the second number: ";           //takes 2nd no
	cin>>k;
	
	if (n>k)
	{
		i=n;
	}
	else
	{
		i=k;
	}
	f(n,k,i);					//calls function
  return 0;
}
