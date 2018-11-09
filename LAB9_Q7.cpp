/*
7. Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
*/

#include<iostream>			//including library
using namespace std;		
int fun(int *arr,int n){			//fun
		for(int i=0;i<n;i++){

			if(*arr<*(arr+i)){

			*arr= *(arr +i);	//b will always point to the largest variable it finds
		}
	}
	
	return *arr;
}
int main()
{ 
	int n;					//declaring array size and integer array
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n ;i++)
	{
		cout<<"Enter the elements of array: ";
		cin>>arr[i];
	}
	if(n!=0){
		cout<<"The largest element of the array: "<<fun(arr,n)<<endl;		// call fun
	}

	else{
		NULL;
	}
	return 0;
}
