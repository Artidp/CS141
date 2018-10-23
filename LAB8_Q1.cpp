/*
1. Write a program to find sum of all elements of an array. (Use functions)
*/


#include<iostream>
using namespace std;

int fun (int n,int arr[]){
	int sum=0;			
	for(int i=0;i<n;i++){			//loop
		sum=sum+arr[i];				//adding elements
	}
	return sum;
}




int main(){
	cout<<"This programme finds the sum of array using function"<<endl;

	
	int n;
	cout<<"Enter the size of array: ";			//size of array
	cin>>n;
	
	int arr[n-1];			//declare array

	cout<<"Enter numbers: "<<endl;
	for(int i=0;i<n;i++){		//loop to take input as per size
		cin>> arr[i];				//takes input
	}

	cout<<"Sum of elements in array is : "<<fun(n,arr)<<endl;			//output
		
	return 0;
}
