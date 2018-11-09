/*
11.Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )
*/

#include<iostream>				//include library
using  namespace std;

int main()
{

	int a;					//declaration
	char b;
	bool c;
	double d;
	float e;
	long f;
	int *g;
	char *h;
	bool *i;
	double *j;
	float *k;
	long *l;

	cout<<"Size of (int): "<<sizeof(a)<<endl;			//output
	cout<<"Size of (char): "<<sizeof(b)<<endl;
	cout<<"Size of (bool): "<<sizeof(c)<<endl;
	cout<<"Size of (double): "<<sizeof(d)<<endl;
	cout<<"Size of (float): "<<sizeof(e)<<endl;
	cout<<"Size of (long): "<<sizeof(f)<<endl;
	cout<<"Size of (int pointer): "<<sizeof(g)<<endl;
	cout<<"Size of (char pointer): "<<sizeof(h)<<endl;
	cout<<"Size of (bool pointer): "<<sizeof(i)<<endl;
	cout<<"Size of (double pointer): "<<sizeof(j)<<endl;
	cout<<"Size of (float pointer): "<<sizeof(k)<<endl;
	cout<<"Size of (long pointer): "<<sizeof(l)<<endl;

	return 0;
}
