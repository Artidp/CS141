/*
2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
*/


#include<iostream>
using namespace std;

void largest (int n,int arr[]){			//fun for largest
	int max=0;				
	for(int i=0;i<n;i++){			//loop
				
		if(arr[i]>max){			//condition to find max

		max=arr[i];				//value from arr to max
		}
		
	}
	cout<<"The greatest no. in array is "<<max<<endl;		//output

}

void smallest (int n,int arr[]){		//fun for smallest
	int min =arr[0];				
	for(int i=0;i<n;i++){			//loop
				
		if(arr[i]<min){			//condition to find min

		min=arr[i];				//value from arr to min
		}
		
	}
	cout<<"The smallest no. in array is "<<min<<endl;		//output
	
}


void mean (int n,int arr[]){			//fun for mean
	float mean,sum=0;			
	for(int i=0;i<n;i++){			//loop
		sum=sum+arr[i];				//adding elements
	}
	mean=sum/n;			//mean

	cout<<"Mean of elements in array is "<<mean<<endl;

}

void median(int n,int arr[]){			//fun for median	
	float median;
	n=n-1;
	if(n%2==0){				// if odd number of inputs
		median=arr[n/2];
	}
	else{					// if even number of inputs
		median=(arr[n/2]+arr[(n/2)+1])/2;
	}
	cout<<"Median of elements in array is "<<median<<endl;

}

int f1(int n,int arr[])			//fun to find the greatest number 
{

	int z=arr[0];
	for(int i=0;i<n;i++)
	{
	if(z<arr[i])
	{
	z=arr[i];
	}
	}
	return z;
	}

int sum(int n,int arr[])		//fun for sum
{
	int z=0;
	
	for(int i=0;i<n;i++)
	{
		z=z+arr[i];
	}
	return z;
}

void mode(int n,int arr[]){		//fun for mode
	int v,c[n],h;
	for(int i=0;i<n;i++)		//creating boolean arrays
	{
		int b[n];
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				b[j]=1;
			}
			else
			{
				b[j]=0;
			}
		}
	c[i] = sum(n,b);		//array of frequency of elements
	}
	v=f1(n,c);				//highest frequency
	for(int i=0;i<n;i++)
	{
		if(v==c[i])			//back to arr after comparing frequency
		{
			cout<<"The mode of the given array is "<<arr[i]<<endl;
		}
	}
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

	cout<< " ";	
	cout<<endl;	

	int temp;			//bbubble sorting
	for(int i=1;i<n;++i){
        	for(int j=0;j<(n-i);++j){
            		if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
           	}
	}

	cout<<"Sorted array is: "<<endl;		//sorted output

	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}


	cout<<endl;		
	largest(n,arr);			//largest output
	cout<<endl;	

	smallest(n,arr);		//smallest output
	cout<<endl;	

	mean(n,arr);			//mean output
	cout<<endl;

	median(n,arr);			//median output
	cout<<endl;

	mode(n,arr);			//mode output
	cout<<endl;

	cout<< " ";	
	cout<<endl;	


	
	
	return 0;
}
