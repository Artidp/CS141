/*
4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
*/

#include<iostream>				//including library
using namespace std;

void f1(int n,int a[]){			//fun to find greatest element

	int z=a[0];
	for(int i=0;i<n;i++){

		if(z<a[i]){
			z=a[i];
		}
	}

	cout<<"The biggest element of the merged arrray is "<<z<<endl;
}


void f2(int n,int a[]){			//fun to find smallest element

	int z=a[0];
		for(int i=0;i<n;i++){

			if(z>a[i]){

				z=a[i];
			}
	}

	cout<<"The smallest element of the merged arrray is "<<z<<endl;
}


void f3(int b[],int c[],int x,int y)		//fun to merge
{							
	int n;
	n=x+y;
	int a[n];	
	for(int i=0;i<x;i++){			// elements of 1st array

		a[i]=b[i];		
	}
	
	for(int j=0;j<n;j++){			//elements of 2nd array

		a[j+x]=c[j];
	}

	f1(n,a);
	f2(n,a);
}


int main()
{
	int x,y,n;
	cout<<"Enter the size of two arrays: ";		//takes size of array
	cin>>x>>y;
	int b[x],c[y],a[n];

	for(int i=0;i<x;i++){

		cout<<"Enter the 1st array element: ";		//takes 1st array
		cin>>b[i];
	}

	for(int i=0;i<y;i++){

		cout<<"Enter the 2nd array element: ";		//takes 2nd array
		cin>>c[i];
	}

	f3(b,c,x,y);

	return 0;
}
