/*
12. Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this. 
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. 
Assign values a=2 and b = 3. Print the values of a, b and *p. 
Now point p to b. Print the values of a, b and *p.
*/

#include<iostream>			//include library
using namespace std;
int main()
{
	int a,b;
	int *p;

	p=&a;
	b=*p;
	cout<<a<<endl<<b<<endl<<*p<<endl;

	a=2;b=3;
	cout<<a<<endl<<b<<endl<<*p<<endl;

	p=&b;
	cout<<a<<endl<<b<<endl<<*p<<endl;

	return 0;
}
