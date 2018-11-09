/*
Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.
*/

#include <iostream>
using namespace std;

int fun(int *arr,int n){        //take arr adress and size from main fun
    int number=0;
    for(int i=0;i<n;i++){          // check by loop
		if(arr[i]%2==0){           // check for even
			number= number +1;      // numbers of even
		}
	}
	return number;
}

int main(){

	int n;
	cout<< "Enter the size of array: ";			//size of array
	cin>>n;

	int arr[n-1];			//declare array

	cout << "Enter numbers: "<<endl;
	for(int i=0;i<n;i++){		//loop to take input as per size
		cin>> arr[i];				//takes input
	}
    int y = fun(arr, n);            // calls fun
    cout<<"Number of even enteries are: ";
	cout <<y;


	return 0;
}
