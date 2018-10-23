/*
3. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
*/



#include<iostream>				//including library
using namespace std;			

void large(int n,int a[]){			//fun for largest

	int b,temp,c;				//decalring and assigning variables
	cout<<"Enter the value of k to find kth largest no: ";
	cin>>b;
	cout<<"Enter the value of k to find kth smallest no: ";
	cin>>c;

	for(int i=0;i<n;i++){		//bubblesorting
	
		for(int j=0;j<n-i;j++){
		
			if(a[j]>a[j+1]){
			
				temp=a[j];		
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n-1;i++){		//eliminating repitions
	
		for(int j=i+1;j<n;j++){
		
			if(a[i]==a[j]){
			
				n--;

				for(int k=j;k<n;k++){
				
					a[k]=a[k+1];
				}
				j--;
			}
		}						
	}
	if(b<n && b>0)
	{
		cout<<"The kth largest element is "<<a[n-b]<<endl;
		cout<<"The kth smallest element is "<<a[c];
	}
}



int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cout<<"Enter the elements of the array: ";
		cin>>a[i];
	}

	large(n,a);

	cout<<endl;

	return 0;
}
